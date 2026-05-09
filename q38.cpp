#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string username;
    bool valid = true;

    cin >> username;

    for(int i=0; i<username.length(); i++) {
        if(!isalnum(username[i])) {
            valid = false;
            break;
        }
    }

    if(valid)
        cout << "Valid Username";
    else
        cout << "Invalid Username";

    return 0;
}
