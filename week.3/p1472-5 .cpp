#include <iostream>
#include "p1472-5h"

using namespace std;

int reverse(int num)  {
    int reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 +digit;
        num /=10;
    }

    return reversedNum;
}

int main()  {

    cout << "숫자를 입력하세요: ";
    cint >> number;
    cout << "역순 숫자: " << reverse(number) << endl;

    return 0;
}