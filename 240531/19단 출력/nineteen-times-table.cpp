#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    for (int i = 1; i <= 19; i++) {
        for (int j = 1; j <= 18; j+=2) {
            printf("%d * %d = %d / %d * %d = %d\n", i, j, i*j, i, j+1, i*(j+1));
            if (j==17) {
                printf("%d * %d = %d\n", i, j+2, i*(j+2));
            }
        }
    }
    return 0;
}