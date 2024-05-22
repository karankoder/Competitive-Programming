#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int lo = 1, hi = n;
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        int sum = mid * (mid + 1) / 2;
        if (sum % n == 0) {
            hi = mid;
        }
        else {
            lo = mid + 1;
        }
    }
    cout << lo << endl;
    return 0;
}
