#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    double score;

    scanf("%lf", &score);

    if (score == 100) {
        printf("pass");
    } else {
        printf("failure");
    }
    return 0;
}