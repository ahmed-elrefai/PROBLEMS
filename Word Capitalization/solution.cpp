#include <iostream>

using namespace std;


int main(){
    string word;
    cin >> word;
    char upper = toupper(word[0]);
    cout << upper << word.substr(1, word.length() - 1);
    return 0;
}