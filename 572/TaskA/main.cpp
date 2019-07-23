#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    getline(cin, s);
    getline(cin, s);
    int zeros = 0;
    for (int i = 0; i < n; i++)
        if (s[i] == '0')
            zeros++;
    if (zeros != n - zeros)
    {
        cout << 1 << endl << s;
    }
    else
    {
        cout << 2 << endl << s.substr(0, n - 1) << " " << s[n - 1];
    }
}