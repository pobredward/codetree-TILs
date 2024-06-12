#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int pass_p = 0;

    for (int i = 0; i < n; i++) {

        int arr[4];
        int sum = 0;

        for (int j = 0; j < 4; j++) {
            cin >> arr[j];
        }

        for (int j = 0; j < 4; j++) {
            sum += arr[j];
        }

        double avg = (double)sum / 4;

        if (avg >= 60) {
            cout << "pass" << endl;
            pass_p++;
        } else {
            cout << "fail" << endl;
        }

    }

    cout << pass_p;

    return 0;
}