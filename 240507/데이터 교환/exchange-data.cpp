#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 5;
    int b = 6;
    int c  = 7;

    int temp;
    
    temp1 = b;
    temp2 = c;

    b = a;
    c = temp1;
    a = temp2;

    std::cout << a << '\n' << b << '\n' << c;
    return 0;
}