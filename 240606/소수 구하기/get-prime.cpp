#include <iostream>
#include <list>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    list<int> p;

    for (int i = 1; i <= n; i++){
        int cnt = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j==0) {
                cnt++;
            }
        }
        if (cnt==2) {
            p.push_back(i);
        }
    }

    for (auto it=p.begin(); it!=p.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}