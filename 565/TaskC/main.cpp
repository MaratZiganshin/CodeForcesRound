#include <iostream>

using namespace std;

int retIndex(int a)
{
    if (a == 4)
        return 0;
    if (a == 8)
        return 1;
    if (a == 15)
        return 2;
    if (a == 16)
        return 3;
    if (a == 23)
        return 4;
    if (a == 42)
        return 5;
}

int main() {
    int n;
    cin >> n;
    int count[6] = {0};
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        int index = retIndex(t);
        bool match = true;
        for (int j = 0; j < index; j++)
        {
            if (count[j] <= count[index])
                match = false;
        }
        if (match)
        {
            count[index]++;
        }
    }
    cout << n - count[5] * 6;
}