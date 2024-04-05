#include <iostream>
#include <iomanip> // setw 함수를 사용하기 위해 추가
#include <cmath>   // 제곱을 계산하기 위해 추가

using namespace std;

int main() {
    cout << setw(10) << "Value" << setw(15) << "Squared" << endl; // 각 열의 헤더 출력

    for (int i = 1; i <= 100; ++i) {
        cout << setw(10) << i << setw(15) << pow(i, 2) << endl; // 값과 해당 값을 제곱한 결과 출력
    }

    return 0;
}