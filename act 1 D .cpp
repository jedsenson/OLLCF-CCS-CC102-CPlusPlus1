#include <iostream>
using namespace std;

int main() {
    int range;

    cout << "Enter the range: ";
    cin >> range;

    for (int i = 1; i <= range; i++) {
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
