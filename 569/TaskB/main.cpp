#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a;
    int min = 1;
    int minInd = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
        if (temp >= 0 && - temp - 1 < min)
        {
            min = - temp - 1;
            minInd = i;
        }
        else if (temp < 0 && temp < min)
        {
            min = temp;
            minInd = i;
        }
    }
    if (n % 2 == 0)
    {
        for (int i: a)
        {
            cout << ((i >= 0) ? - i - 1 : i) << " ";
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i != minInd)
            {
                cout << ((a[i] >= 0) ? - a[i] - 1 : a[i]) << " ";
            }
            else
            {
                cout << ((a[i] < 0) ? - a[i] - 1 : a[i]) << " ";
            }
        }
    }
}