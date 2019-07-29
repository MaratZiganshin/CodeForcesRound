#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    deque<int> a(n);
    vector<pair<int, int>> elems;
    int _max = -1;
    int maxInd = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > _max)
        {
            _max = a[i];
            maxInd = i;
        }
    }
    for (int i = 0; i < maxInd; i++)
    {
        elems.emplace_back(pair<int, int>(a[0], a[1]));
        int first = a.front();
        a.pop_front();
        int second = a.front();
        a.pop_front();
        a.push_front(max(first, second));
        a.push_back(min(first, second));
    }
    for (int i = 0; i < q; i++)
    {
        long long m;
        cin >> m;
        if (m <= elems.size())
        {
            cout << elems[m - 1].first << " " << elems[m - 1].second << endl;
        } else
        {
            cout << _max << " " << a[(m - maxInd - 1) % (n - 1) + 1] << endl;
        }
    }
}