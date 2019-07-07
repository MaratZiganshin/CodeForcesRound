#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <functional>
#include <set>

using namespace std;

struct lex_compare {
    bool operator() (const int& lhs, const int& rhs) const {
        return lhs != rhs ? lhs > rhs : true;
    }
};
int main() {
    int q;
    cin >> q;
    vector<int> result;
    for (int i = 0; i < q; i++)
    {
        int n;
        cin >> n;
        map<int, int> a;
        for (int j = 0; j < n; j++)
        {
            int temp;
            cin >> temp;
            if (a.count(temp) == 0)
            {
                a[temp] = 1;
            }
            else
            {
                a[temp]++;
            }
        }
        int sum = 0;
        set<int, lex_compare> setA;
        for (auto p : a)
        {
            setA.insert(p.second);
        }
        int max = (*setA.begin());
        for (auto it = setA.begin(); it != setA.end(); ++it)
        {
            max = min((*it), max);
            sum += max--;
            if (max <= 0)
                break;
        }
        result.push_back(sum);
    }
    for (int i = 0; i < q; i++)
    {
        cout << result[i] << endl;
    }
}