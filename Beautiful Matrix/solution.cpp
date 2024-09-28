#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int result = 0;
    for (int i =1; i <= 5; i++){
        for (int j =1; j <= 5; j++){
            int x;
            cin >> x;
            if (x == 1){
                result = abs(i - 3) + abs(j - 3);
            }
        } 
    }
    cout << result;
    return 0;
}