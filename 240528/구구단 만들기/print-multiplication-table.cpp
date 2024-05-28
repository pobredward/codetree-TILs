#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

      
    for (int i=1; i<=9; i++){
        
        for (int cnt = b; cnt >= a; cnt -= 2 ) {

            if (cnt!=a) {
                printf("%d * %d = %d / ", cnt, i, cnt*i);
            } else {
                printf("%d * %d = %d", cnt, i, cnt*i);
            }
            
        }

        cout << "\n";

    }

    return 0;
}