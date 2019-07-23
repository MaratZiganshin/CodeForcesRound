#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    sort(a.begin(), a.end());
    if (a[n - 1] >= a[n - 2] + a[n - 3])
    {
        cout << "NO";
    }
    else
    {
        cout << "YES" << endl;
        cout << a[n - 2] << " " << a[n - 1] << " ";
        for (int i = n - 3; i >= 0; i--)
        {
            cout << a[i] << " ";
        }
    }
}