#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int start, end;
    cin >> start >> end;

    int cnt = 0;

    for (int i=start; i<=end; i++) {
        int cnt_divisor = 0;
        for (int j = 1; j <= i; j++) {
            if (i%j==0) {
                cnt_divisor++;
            }
        }
        if (cnt_divisor == 3) {
            cnt++;
        }
    } 
    cout << cnt;

    return 0;
}