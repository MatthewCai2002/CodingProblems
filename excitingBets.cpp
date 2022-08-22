#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        long long a, b;
        cin >> a >> b;
        if (a == b) {
            cout << 0 << " " << 0 << endl;
        } else {
            long long maxExcitment = abs(a - b);
            long long c = a % maxExcitment;
            long long turns = min(c, maxExcitment - c);
            cout << maxExcitment << " " << turns << endl;
        }
        
    }
    return 0;
}
