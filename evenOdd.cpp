#include <iostream>
#include <math.h>

using namespace std;

int main() {
    unsigned long long int n, k;
    cin >> n >> k;
    unsigned long long int mid = 0;
    
    if (n % 2 == 0) {
        mid = n / 2;
    } else {
        mid = n / 2 + 1;
    }

    unsigned long long int ans = 0;
    if (k > mid) {
        k -= mid;
        ans = 2 * k;
    } else {
        ans = 2 * (k - 1) + 1;
    }

    cout << ans << endl;
    return 0;
}