#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long q = 0;
    cin >> q;
    vector<long long> result;
    for (long long i = 0; i < q; i++)
    {
        long long k, n, a, b;
        cin >> k >> n >> a >> b;
        long long z = k - n * b - 1;
        if (z < 0)
        {
            result.push_back(-1);
            continue;
        }
        result.push_back(min(n, z / (a - b)));
    }
    for (long long i = 0; i < q; i++)
    {
        cout << result[i] << endl;
    }
}