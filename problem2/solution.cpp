#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int goalIndex = nums.size() - 1;
        int jumpsCount = 0;
        while (goalIndex != 0){
            for (int i = 0; i < nums.size(); i++){
                if (i+nums[i] >= goalIndex){
                    jumpsCount++;
                    goalIndex = i;
                    break;
                }
            }
        }

        return jumpsCount;

    }
};

int main(){
    Solution solution;
    vector<int> nums = {2,3,1,1,4};
    int jumps = solution.jump(nums);
    cout << "jumps: " << jumps;
    return 0;
}