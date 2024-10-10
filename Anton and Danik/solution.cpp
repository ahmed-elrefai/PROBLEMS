#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int anton = 0;
    char* s = new char[n];
    for (int i = 0; i < n; i++){
        cin >> s[i];
        if (s[i] == 'A'){
            anton++;   
        }
    }

    if (anton > n - anton){
        cout << "Anton";
    }
    else if ( anton < n - anton){
        cout << "Danik";
    }
    else{
        cout << "Friendship";
    }

    delete [] s;
    return 0;
}