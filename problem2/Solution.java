class Solution{
    public int jump(int[] nums) {
        int goalIndex = nums.length - 1;
        int jumpCount = 0;

        while (goalIndex != 0){
            for (int i = 0; i<nums.length; i++){
                if (i + nums[i] >= goalIndex){
                    jumpCount++;
                    goalIndex = i;
                    break;
                }
            }
        }
        return jumpCount;
    }

    public static void main(String[] args){
        Solution solution = new Solution();
        int[] nums = {2,3,1,1,4};
        int jumps = solution.jump(nums);
        System.out.println("jumps: " + jumps);
    }
}