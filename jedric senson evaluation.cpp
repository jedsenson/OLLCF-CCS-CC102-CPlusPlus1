#include <iostream>
using namespace std;

int main() {
    int range;

    cout << "Enter the range: ";
    cin >> range;

    for (int i = 1; i <= range; i++) {
         if (i == 6) {
            cout << endl;
         }else{
             for (int space = 1; space <= range - i; space++) {
            cout << "  ";
        }

        for (int j = i; j >= 1; j--) {
            if (j % 3 == 0) {
                cout << "* ";
            } else if (j % 5 == 0) {
                cout << "# ";
            } else if (j % 7 == 0) {
                cout << "@ ";
            } else {
                cout << j << " ";
                
                
            }
        }
        cout << endl;
    }
}
    return 0;
}