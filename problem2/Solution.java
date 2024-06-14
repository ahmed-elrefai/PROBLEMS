class Solution {
    public int jump(int[] nums) {
        int goalIndex = nums.length - 1;
        int jumps = 0;
        while (goalIndex != 0){
            for (int i =0; i < nums.length ;i++){
                int reach = i + nums[i];
                if (reach >= goalIndex){
                    goalIndex = i;
                    jumps++;
                    if (goalIndex == 0){
                        return jumps;   
                    }
                    break;
                }
            }
        }
        return 0;
    }


    // write here the test cases
    public static void main(String[] args){
        Solution sol = new Solution();
        int[] nums = {2,3,1,1,1};
        int jumps = sol.jump(nums);
        System.out.println("jumps: " + jumps);
    }
}