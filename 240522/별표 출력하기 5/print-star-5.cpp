#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for (int i = n; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            for (int k = 1; k <= i; k++) {
                cout << "*";
            }
            cout << " ";
        }
        cout << "\n";
    }
    return 0;
}