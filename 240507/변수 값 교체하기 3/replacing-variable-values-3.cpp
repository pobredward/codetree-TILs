#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 3;
    int b = 5;
    int temp;
    
    temp = a;
    a = b;
    b = temp;

    std::cout << a << "\n" << b;

    return 0;
}