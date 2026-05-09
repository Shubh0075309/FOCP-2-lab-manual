#include <iostream>
using namespace std;

int main() {
    int itemNo, qty;
    float price, amount, discount, finalAmount;

    cin >> itemNo >> qty >> price;

    amount = qty * price;
    discount = amount * 0.20;
    finalAmount = amount - discount;

    cout << "Amount = " << amount << endl;
    cout << "Discount = " << discount << endl;
    cout << "Final Amount = " << finalAmount;

    return 0;
}
