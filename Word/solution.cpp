#include <iostream>
using namespace std;

int main(){
    int lower = 0;

    string txt;
    cin >> txt;

    for (int i =0; i < txt.length(); i++){
        if (islower(txt[i])){
            lower++;
        }
    }

    if (lower >= ((float) txt.length() / 2.0)){
            for (int j = 0; j < txt.length(); j++){
                char c = tolower(txt[j]);
                cout << c;
            }
            return 0;
        }
    else{
        for (int j = 0; j < txt.length(); j++){
            char c = toupper(txt[j]);
            cout << c;
        }
        return 0;
    }
    

    return 0;
}