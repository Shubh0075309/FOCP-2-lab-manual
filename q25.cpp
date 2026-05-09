#include <iostream>
using namespace std;

int main() {
    int a, b, count;
    cin >> a >> b;

    for(int i=a; i<=b; i++) {
        count = 0;

        for(int j=1; j<=i; j++) {
            if(i % j == 0)
                count++;
        }

        if(count == 2)
            cout << i << " ";
    }

    return 0;
}
