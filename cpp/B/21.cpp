#include <iostream>
using namespace std;

int main() {
    int a1, b1, c1;
    cin >> a1 >> b1 >> c1;

    int a2, b2, c2;
    cin >> a2 >> b2 >> c2;

    if (a1 == 0 && b1 == 0 && c1 == 0) {
        if (a2 == 0 && b2 == 0 && c2 == 0) {
            cout << -1;
        } else if (a2 == 0 && b2 == 0 && c2 != 0) {
            cout << 0;
        } else {
            cout << -1;
        }
        return 0;
    }

    if (a2 == 0 && b2 == 0 && c2 == 0) {
        if (a1 == 0 && b1 == 0 && c1 == 0) {
            cout << -1;
        } else if (a1 == 0 && b1 == 0 && c1 != 0) {
            cout << 0;
        } else {
            cout << -1;
        }
        return 0;
    }

    if (a1 == 0 && a2 == 0 && b1 == 0 && b2 == 0)
    {
        cout << 0;
        return 0;
    }

    int d = a1 * b2 - a2 * b1;

    int d1 = -c1 * b2 + c2 * b1;
    int d2 = a1 * (-c2) - a2 * (-c1);

    if (d != 0)
    {
        cout << 1 << endl;
    }

    else
    {
        if (d1 == 0 && d2 == 0)
        {
            cout << -1 << endl;
        }

        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}
