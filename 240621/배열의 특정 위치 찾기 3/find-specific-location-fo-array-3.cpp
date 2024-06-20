#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int arr[100];
    int cnt = 0;

    for (int i = 0; i < 100; i++) {
        cin >> arr[i];
        cnt++;
        if (arr[i]==0) {
            break;
        }
    }

    int sum = 0;

    cnt--;
    for (int i = 0; i <= 3; i++) {
        sum += arr[cnt];
        cnt--;
    }

    cout << sum;

    return 0;
}