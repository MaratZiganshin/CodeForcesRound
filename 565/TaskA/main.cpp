#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long q;
    cin >> q;
    vector<long long> result;
    for (long long i = 0; i < q; i++)
    {
        long long n;
        cin >> n;
        long long c = 0;
        while (n > 1)
        {
            c++;
            if (n % 2 == 0)
            {
                n /= 2;
            }
            else if (n % 3 == 0)
            {
                n = 2 * n / 3;
            }
            else if (n % 5 == 0)
            {
                n = 4 * n / 5;
            }
            else
            {
                c = -1;
                break;
            }
        }
        result.push_back(c);
    }
    for (long long i = 0; i < q; i++)
    {
        cout << result[i] << endl;
    }
}