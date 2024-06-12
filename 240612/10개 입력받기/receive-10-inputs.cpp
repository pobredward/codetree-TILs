#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];
    int cnt = 0;

    int result_sum = 0;
    double result_avg = 0.0;
    
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if(arr[i] == 0) {
            break;
        }
        cnt++;

    }

    cout << fixed;
    cout.precision(1);

    for (int i = 0; i < cnt; i++) {
        result_sum += arr[i];
    }
    cout << result_sum << " " << (double)result_sum/cnt;

    return 0;
}