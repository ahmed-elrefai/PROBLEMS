#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0, sum = 0;

    for (int i =0; i < n; i++){
        int a , b;
        cin >> b >> a;
        sum += (a - b);

        if (sum > ans){
            ans = sum;
        }
    }
    cout << ans;
    return 0;
}