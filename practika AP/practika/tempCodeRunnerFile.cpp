#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Введите текст: ";
    string s;
    getline(cin, s);
    
    int digitCount = 0;
    int dotCount = 0;
    int error = 0;
    
    for (int i = 0; i < s.length() && !error; i++) {
        char c = s[i];
        
        if (c >= '0' && c <= '9') {
            digitCount++;
        }
        else if (c == '+' || c == '-') {
            if (i != 0) error = 1;
        }
        else if (c == '.' || c == ',') {
            dotCount++;
            if (dotCount > 1) error = 1;
            else if (digitCount == 0) error = 1;
        }
        else {
            error = 1;
        }
    }
    
    if (error == 0 && digitCount > 0) {
        cout << "Текст является вещественного числа" << endl;
    } else {
        cout << "Текст не является вещественного числа" << endl;
    }
    
    return 0;
}