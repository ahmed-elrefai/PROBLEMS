#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0;
        int goalIndex = nums.size() - 1;
        while (goalIndex != 0){
            int i = 0;
            for (i = 0; i < nums.size(); i++){
                int reach = i + nums[i];
                if (reach >= goalIndex){
                    jumps++;
                    break;
                }

            }
            if (i == 0){
                return jumps;
            }
            goalIndex = i;
        }
        return 0;
    }
};

int main(){
    int jumps;
    vector<int> nums = {0};
    Solution sol = Solution();
    jumps = sol.jump(nums);
    cout <<    "jumps: " << jumps;

    return 0;
}