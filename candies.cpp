#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int tests;
    cin >> tests;

    int res[tests];

    int n;
    int x = 0;

    for (int i = 0; i < tests; i++) {
        int k = 1;
        cin >> n;

        while (-x * (1 - pow(2, k)) != n) {
            k++;
            x = -n / (1 - pow(2, k));
        }
        res[i] = x;
    }

    for (int i : res) {
        cout  << i << endl;
    }

    return 0;
}