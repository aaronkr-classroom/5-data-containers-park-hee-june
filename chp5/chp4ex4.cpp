#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    cout << setw(10) << "Value" << setw(15) << "Squared" << endl;

    for (int i = 1; i <= 100; ++i) {
        double squared = pow(i, 2); // ������ ����� double ������ ����
        cout << setw(10) << i << setw(15) << squared << endl;
    }

    return 0;
}
