#include <iostream>
using namespace std;

int main() {
    int range;

    cout << "Enter the range: ";
    cin >> range;

    for (int i = 0; i < range; i++) {
        if (i % 2 == 0) {
            cout << "# * # * # * # ";
        }
        else {
            cout << " # * # * # * #";
        }
        cout << endl;  
    }

    return 0;
}
