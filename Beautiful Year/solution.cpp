#include <iostream>
using namespace std;

int main(){

    int n;
    int flags[10] = {0};

    cin >> n;
    n++;
    int tmp = n;
    while (tmp){
        int digit = tmp % 10;
        if (flags[digit] == 0){
            flags[digit] = 1;
            tmp /= 10;
        }
        else{
            n++;
            tmp = n;
            for (int i =0; i < 10; i++){
                flags[i] = 0;
            }
        }
    }

    cout << n;

    return 0;
}