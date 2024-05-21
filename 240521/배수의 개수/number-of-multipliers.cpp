#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt_three, cnt_five = 0;
    int n;
    for (int i = 0; i < 10; i++) {
        cin >> n;
        if (n%3==0 && n > 0) {
            cnt_three += 1;
        }
        if (n%5==0 && n > 0) {
            cnt_five += 1;
        }
    }

    cout << cnt_three << " " << cnt_five;
    return 0;
}