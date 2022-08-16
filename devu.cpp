#include <iostream>

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    int jokeCount = 0;
    while (n--) {
        int t;
        cin >> t;
        d -= t;
        if (n > 0) {
            d -= 10;
            jokeCount += 2;
        }

        
    }

    while (d >= 5) {
        d -= 5;
        jokeCount++;
    }

    if (d < 0) {
        jokeCount = -1;
    }

    cout << jokeCount << endl;
    return 0;
}