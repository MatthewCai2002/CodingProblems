#include <iostream>

using namespace std;

int main() {
    int n, b, d;
    cin >> n >> b >> d;
    int overflowCount = 0;
    int juice = 0;
    while (n--) {
        int size;
        cin >> size;
        if (size <= b) {
            juice += size;

            if (juice > d) {
                overflowCount++;
                juice = 0;
            }
        }
    }

    cout << overflowCount << endl;
    return 0;
}