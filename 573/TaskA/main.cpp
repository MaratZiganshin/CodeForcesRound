#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    if (a % 4 == 1)
    {
        cout << "0 A" << endl;
    }
    else if (a % 4 == 0)
    {
        cout << "1 A" << endl;
    }
    else if (a % 4 == 3)
    {
        cout << "2 A" << endl;
    }
    else if (a % 4 == 2)
    {
        cout << "1 B" << endl;
    }
}