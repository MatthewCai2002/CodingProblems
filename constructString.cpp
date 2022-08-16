#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        string res = "";
        cin >> n >> a >> b;
        for (int i = 0; i < n; i++) {
            res = res + char('a' + i % b);
        }
        cout << res << endl;
    }
    return 0;
}