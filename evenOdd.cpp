#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int mid = n / 2;
    int ans = 0;
    if (k > mid) {
        int diff = k - mid - 1;
        ans = 2 * diff;
    } else {
        ans = 2 * (k - 1) + 1;
    }
    cout << ans << endl;
    return 0;
}