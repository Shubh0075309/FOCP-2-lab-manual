#include <iostream>
using namespace std;

int main() {
    int choice;
    float c, f;

    cout << "1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n";
    cin >> choice;

    if(choice == 1) {
        cin >> c;
        f = (c * 9/5) + 32;
        cout << "Fahrenheit = " << f;
    }
    else {
        cin >> f;
        c = (f - 32) * 5/9;
        cout << "Celsius = " << c;
    }

    return 0;
}
