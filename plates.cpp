#include <iostream>

using namespace std;

int main() {
    int days, bowls, plates, dish;
    cin >> days >> bowls >> plates;
    int washedDishes = 0;
    for (int i = 0; i < days; i++) {
        cin >> dish;
        if (dish == 1) {
            if (bowls == 0) {
                washedDishes++;
            } else {
                bowls--;
            }
        } else {
            if (plates > 0) {
                plates--;
            } else if (bowls > 0) {
                bowls--;
            } else {
                washedDishes++;
            }
        } 

    }
    cout << washedDishes << endl;
    return 0;
}