#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int q;
    cin >> q;
    vector<int> result;
    for (int _ = 0; _ < q; _++)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        if (*max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end()) >= 2*k + 1)
        {
            result.push_back(-1);
        }
        else
        {
            result.push_back(*min_element(a.begin(), a.end()) + k);
        }
    }
    for (int i = 0; i < q; i++)
    {
        cout << result[i] << endl;
    }
}