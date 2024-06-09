#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    double avg;
    double arr[5];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        avg += arr[i];
    }

    avg /= n;
    cout << fixed;
    cout.precision(1);
    cout << avg << "\n";

    if (avg >= 4.0) {
        cout << "Perfect";
    } else if (avg >= 3.0) {
        cout << "Good";
    } else {
        cout << "Poor";
    }

    return 0;
}