#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string pass;
    bool upper=false, lower=false, digit=false, special=false;

    cin >> pass;

    for(int i=0; i<pass.length(); i++) {
        if(pass[i] >= 'A' && pass[i] <= 'Z')
            upper = true;
        else if(pass[i] >= 'a' && pass[i] <= 'z')
            lower = true;
        else if(pass[i] >= '0' && pass[i] <= '9')
            digit = true;
        else if(pass[i]=='@'||pass[i]=='#'||pass[i]=='$'||
                pass[i]=='%'||pass[i]=='!'||pass[i]=='&'||pass[i]=='*')
            special = true;
    }

    if(upper && lower && digit && special)
        cout << "Valid Password";
    else
        cout << "Invalid Password";

    return 0;
}
