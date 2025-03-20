#include <iostream>
using namespace std;

void printkoreanNumber(int num) {
    if (num < 0 || num >= 10000) {
        std::cout << "10000 미만의 정수를 입력해주세요." << std::endl;
        return;
    }

    // 숫자에 해당하는 한글 표현
    const char* koreanNumbers[] = {"", "일", "이", "삼", "사", "오", "육", "칠", "팔", "구"};
    int units[] = {1000, 100, 10, 1}; 
    const char* unitNames[] = {"천", "백", "십", ""};

    bool isFirst = true; // 첫 번째 자리수 여부

    // 각 자리를 처리
    for (int i = 0; i < 4; i++) {
        int digit = num / units[i]; // 현재 자릿수 계산

        if (digit > 0) {
            if (!isFirst) std::cout << " "; // 첫 번째 자리가 아니면 공백 추가
            
            // 10, 100, 1000 자리에 1이 오면 '일'을 출력하지 않음
            if (digit == 1 && i > 0) {
                std::cout << unitNames[i]; // '십', '백', '천'만 출력
            } else {
                std::cout << koreanNumbers[digit] << unitNames[i]; // 숫자와 단위 출력
            }
            
            isFirst = false; // 첫 번째 자리 출력 이후 변경
        }
        
        num %= units[i]; // 나머지 숫자 처리
    }

    std::cout << std::endl; // 출력 후 줄 바꿈
}

int main() {
    int number;
    std::cout << "10000 미만의 정수를 입력하세요: ";
    std::cin >> number;
    printkoreanNumber(number);
    return 0;
}
