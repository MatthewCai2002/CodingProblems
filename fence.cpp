#include <iostream>

using namespace std;

int main() {
    int n, fenceHeight;
    cin >> n >> fenceHeight;
    int width = 0;
    for (int i = 0; i < n; i++) {
        int h;
        cin >> h;
        if (h > fenceHeight) {
            width++;
        }
        width++;
    }
    cout << width << endl;
    return 0;
}