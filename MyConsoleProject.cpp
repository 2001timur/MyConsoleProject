#include <iostream>

using namespace std;

int main() {

    while (true)
    {
        cout << "Input point coordinates: ";
        double x, y; cin >> x >> y;
        if ((y <= (x + 5)) &&
            (y <= (-6 * x + 19)) &&
            (9 * y >= (-5 * x - 25)))
            cout << "This point is inside shaded area\n";
        else cout << "This point is outside shaded area\n";
    }
}