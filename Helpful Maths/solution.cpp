#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;


int main(){
    vector<string> nums;
    string item;
    string s;

    cin >> s;
    stringstream ss(s);

    while (getline(ss, item, '+')) {
        nums.push_back(item);
    }

    sort(nums.begin(), nums.end());
    string ans = (string) nums[0];
    for (int i =1; i < nums.size(); i++){
        ans += '+' + (string) nums[i];
    }

    cout << ans;
}