#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str, result = "";
    getline(cin, str);

    int words = 0, digits = 0, special = 0;
    bool space = false;

    for(int i=0; i<str.length(); i++) {
        if(str[i] != ' ') {
            result += str[i];
            space = false;
        }
        else if(!space) {
            result += ' ';
            space = true;
        }
    }

    if(result[0] == ' ')
        result.erase(0,1);

    if(result[result.length()-1] == ' ')
        result.erase(result.length()-1);

    for(int i=0; i<result.length(); i++) {
        result[i] = tolower(result[i]);
    }

    result[0] = toupper(result[0]);

    for(int i=0; i<result.length(); i++) {
        if(result[i] == ' ')
            words++;
        else if(isdigit(result[i]))
            digits++;
        else if(!isalnum(result[i]) && result[i] != ' ')
            special++;
    }

    words++;

    cout << "Normalized String: " << result << endl;
    cout << "Words = " << words << endl;
    cout << "Digits = " << digits << endl;
    cout << "Special Characters = " << special << endl;

    if(special == 0)
        cout << "Valid String";
    else
        cout << "Invalid String";

    return 0;
}
