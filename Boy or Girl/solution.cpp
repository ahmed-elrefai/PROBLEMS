#include <iostream>

using namespace std;


int main(){
    string name;
    cin >> name;
    int ctr = 0;
    for (int i =0; i < name.length(); i++){
        if (name.substr(0, i).find(name[i]) == name.npos)
        {
            ctr++;
        }
    }

    if (ctr % 2 == 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
    return 0;
}