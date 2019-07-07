#include <iostream>

using namespace std;

int sum(int a)
{
    int sum = 0;
    while (a > 0)
    {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}

int main() {
    int a;
    cin >> a;
    while (sum(a) % 4 != 0)
    {
        a++;
    }
    cout << a;
}