#include <iostream>
#include <iomanip> // setw �Լ��� ����ϱ� ���� �߰�
#include <cmath>   // ������ ����ϱ� ���� �߰�

using namespace std;

int main() {
    cout << setw(10) << "Value" << setw(15) << "Squared" << endl; // �� ���� ��� ���

    for (int i = 1; i <= 100; ++i) {
        cout << setw(10) << i << setw(15) << pow(i, 2) << endl; // ���� �ش� ���� ������ ��� ���
    }

    return 0;
}