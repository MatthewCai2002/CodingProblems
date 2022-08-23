#include <iostream>

using namespace std;

int main() {
    int i = 64;
    int whiteWeight = 0;
    int blackWeight = 0;
    while (i--) {
        char piece;
        cin >> piece;
        switch (piece) {
        case 'Q':
            whiteWeight += 9;
            break;
        case 'R':
            whiteWeight += 5;
            break;
        case 'B':
            whiteWeight += 3;
            break;
        case 'N':
            whiteWeight += 3;
            break;
        case 'P':
            whiteWeight += 1;
            break;
        case 'q':
            blackWeight += 9;
            break;
        case 'r':
            blackWeight += 5;
            break;
        case 'b':
            blackWeight += 3;
            break;
        case 'n':
            blackWeight += 3;
            break;
        case 'p':
            blackWeight += 1;
            break;
        
        default:
            break;
        }
    }
    
    if (whiteWeight > blackWeight) {
        cout << "White" << endl;
    } else if (blackWeight > whiteWeight) {
        cout << "Black" << endl;
    } else {
        cout << "Draw" << endl;
    }

    return 0;
}