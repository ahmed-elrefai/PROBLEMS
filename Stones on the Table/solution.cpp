#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    char* rocks = new char[n];
    int ctr =0;
    for (int i = 0; i < n; i++){
        if (i == 0){
            cin >> rocks[i];
        }
        else{
            cin >> rocks[i];
            if (rocks[i] == rocks[i - 1]){
                ctr++;
            }
        }
    }
    cout << ctr;
    delete [] rocks;
    return 0;
}