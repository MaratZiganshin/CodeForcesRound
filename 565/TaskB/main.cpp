#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> result;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int sum[3];
        for (int j = 0; j < 3; j++)
            sum[j] = 0;
        for (int j = 0; j < n; j++)
        {
            int temp;
            cin >> temp;
            sum[temp % 3]++;
        }
        result.push_back(sum[0] + min(sum[2], sum[1]) + (max(sum[1], sum[2]) - min(sum[2], sum[1])) / 3);
    }
    for (int i = 0; i < t; i++)
    {
        cout << result[i] << endl;
    }
}