#include <iostream>
using namespace std;
int main(){
    int a, b;
    string c;
    cout << "input numbers: " << endl;
    cin >> a >> b;
    cout << "что надо сделать?: " << endl;
    cin >> c;
    if (c == "+")
    {
        cout << "result: "<< a+b;
    }
    if (c == "-")
    {
        cout << "result: " << a-b;
    }
    if (c == "*")
    {
        cout << "result: " << a*b;
    }
    if (c == "/")
    {
        cout << "result: " << a/b;
    }
    else
    {
        cout << "Nado bulo vvesti chisla -_- ";
    }
    return 0;
}
// простейший калькулятор на с++