#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b;
    double result;

    cin >> a >> b;
    
    cout << fixed;
    cout.precision(2);

    result = (double)(a+b) / (a-b);

    cout << result;

    return 0;
}