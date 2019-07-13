#include <iostream>
#include <string>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int b_zero = 0;
    int c_zero = 0;
    for (int i = 0; i < b.length(); i++)
    {
        if (b[i] == '0')
            b_zero++;
        if (a[i] == '0')
            c_zero++;
    }
    int count = 0;
    if (c_zero % 2 == b_zero % 2)
        count++;
    for (int i = b.size(); i < a.size(); i++) {
        if (a[i] == '0')
            c_zero++;
        if (a[i - b.size()] == '0')
            c_zero--;
        if (c_zero % 2 == b_zero % 2)
            count++;
    }
    cout << count;
}