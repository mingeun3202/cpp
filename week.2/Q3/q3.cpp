#include <iostream>
#include <iomanip>  // setprecision을 위한 헤더

using namespace std;

double calculate_pi(int n) {
    double pi_approx = 0.0;
    
    // n번 반복하여 항을 더하고 뺍니다.
    for (int i = 1; i <= n; ++i) {
        // i가 홀수일 때는 더하고, 짝수일 때는 뺍니다.
        if (i % 2 != 0) {
            pi_approx += 1.0 / (2 * i - 1);
        } else {
            pi_approx -= 1.0 / (2 * i - 1);
        }
    }
    
    // 최종적으로 4를 곱해줍니다.
    pi_approx *= 4;
    return pi_approx;
}

int main() {
    int n;
    
    // 사용자로부터 n 입력 받기
    cout << "정수 n을 입력하세요: ";
    cin >> n;
    
    // 파이 근사값 계산
    double pi_value = calculate_pi(n);
    
    // 소수점 15자리까지 출력
    cout << fixed << setprecision(15) << "n=" << n << "일 때 근사된 파이 값: " << pi_value << endl;
    
    return 0;
}
