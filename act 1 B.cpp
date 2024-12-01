
#include <iostream>
using namespace std;
int main() {

int range;

cout << "Enter the range: ";
cin >> range;

for (int i = 0; i < range; i++) {
    for (int g = 0; g < range - i; g++) {
        cout << "# ";
    }
    cout << endl;
}
return 0;
}