#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<float> a;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        float temp;
        cin >> temp;
        a.push_back(temp);
        sum += floor(temp);
    }
    auto i = 0;
    for (i = 0; i != a.size(); i++) {
        if (sum < 0) {
            int temp = ceil(a[i]);
            cout << temp << endl;
            if (temp != a[i])
                sum++;
        } else {
            break;
        }
    }
    for (; i != a.size(); i++)
    {
        cout << floor(a[i]) << endl;
    }
}