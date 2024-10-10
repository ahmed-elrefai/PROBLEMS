#include <iostream>
using namespace std;

int main(){
    string s;
    string t;

    cin >> s >> t;
    if (s.length() != t.length()){
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < s.length(); i++){
        if (s[s.length() - i - 1] != t[i]){
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}