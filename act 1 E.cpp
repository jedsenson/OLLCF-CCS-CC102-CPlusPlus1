#include <iostream>
using namespace std;

int main() {
    int range;

    cout << "Enter the range: ";
    cin >> range;

    for (int i = 1; i <= range; i++) {
        for (int s = 0; s < range - i; s++) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        cout << endl;  
    }

    return 0;
}
