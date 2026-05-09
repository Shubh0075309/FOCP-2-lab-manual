#include <iostream>
using namespace std;

int main() {
    int arr[5], even = 0, odd = 0;

    for(int i=0; i<5; i++)
        cin >> arr[i];

    for(int i=0; i<5; i++) {
        if(arr[i] % 2 == 0)
            even += arr[i];
        else
            odd += arr[i];
    }

    cout << "Even Sum = " << even << endl;
    cout << "Odd Sum = " << odd;

    return 0;
}
