#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    cout << (min(m, k) < n ? "No" : "Yes");
}