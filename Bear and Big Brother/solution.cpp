#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int a,b;

    cin >> a >> b;
    int i = 0;
    while (b >= a){
        b *= 2; 
        a *= 3;
        i++;
    }

    cout << i;

    return 0;
}