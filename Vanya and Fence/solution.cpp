#include <iostream>
using namespace std;

int main(){
    int n, h;
    int ans = 0;
    cin >> n >> h;
    
    for (int i = 0; i < n; i++){
        int height;
        cin >> height;

        if (height > h){
            ans += 2;
        }
        else{
            ans++;
        }
        
    }
    cout << ans;
    
    return 0;
}