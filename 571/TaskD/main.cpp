#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<float> a;
    vector<int> a_floor;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        float temp;
        cin >> temp;
        a.push_back(temp);
        int z = floor(temp);
        sum += z;
        a_floor.push_back(z);
    }
    auto i = 0;
    for (i = 0; i != a.size(); i++) {
        if (sum < 0) {
            if (a_floor[i] != a[i])
            {
                int temp = a_floor[i] + 1;
                cout << temp << endl;
                sum++;
            } else
            {
                cout << a_floor[i] << endl;
            }
        } else {
            break;
        }
    }
    for (; i != a.size(); i++)
    {
        cout << a_floor[i] << endl;
    }
}