#include <iostream>
using namespace std;

int main() {
    int n;
    float salary, bonus, net;

    cin >> n;

    for(int i=1; i<=n; i++) {
        cin >> salary;
        bonus = salary * 0.12;
        net = salary + bonus;

        cout << "Bonus = " << bonus << endl;
        cout << "Net Salary = " << net << endl;
    }

    return 0;
}
