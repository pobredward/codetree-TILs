#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string c;
    int n;
    cin >> c;
    cin >> n;

    if (c=="A") {
        for (int i = 1; i <= n; i++) {
            cout << i << " ";
        }
    } else if (c=="D") {
        for (int i = n; i > 0; i--) {
            cout << i << " ";
        } 
    }
    return 0;
}