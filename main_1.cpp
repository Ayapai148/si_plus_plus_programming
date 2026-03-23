#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ifstream in("f.txt");
    string text;
    int count = 0;
    if (in.is_open()){
        string line;
        char bucva;
        cout << "Введите букву, которую хотите посчитать из строки - ";
        cin >> bucva;
        while (getline(in, line)){
            text += line + "\n";
        }
        for (size_t i = 0; i < text.length(); i++){
            if (bucva == text[i]){
                count++;
            }
        }
        cout << endl;
        cout << "Количество найденных букв: " << count << endl;
        cout << "Из строки \"" << text << "\"";
        in.close();
    }
    
    return 0;
}