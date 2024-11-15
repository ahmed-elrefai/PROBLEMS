#include <iostream>
using namespace std;

int main(){

    int n;
    int ans =0;
    cin >> n;
    
    int prev = 0;
    for (int i =0; i<n; i++){
        int cur = 0;
        cin >> cur;
        if (cur != prev){
            prev = cur;
            continue;
        }
        ans++;
    }
    if (ans == 1){
        cout << 1;
    }
    cout << ans;
    return 0;
}