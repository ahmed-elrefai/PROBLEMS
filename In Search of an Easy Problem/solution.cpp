#include <iostream>
using namespace std;


int main(){

    int n;
    cin >> n;
    bool easy = true;
    for (int i =0; i < n; i++){
        int value;

        cin >> value;
        if (value == 1){
            easy = false;
        }
    }

    if (easy){
        cout << "EASY";
    }
    else{
        cout << "HARD";
    }


    return 0;
}