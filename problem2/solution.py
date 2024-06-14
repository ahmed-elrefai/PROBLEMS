class Solution:
    def jump(self, nums: list[int]) -> int:
        jumps = 0
        goal_index = len(nums) - 1
        while len(nums) != 1:
            for i in range(len(nums)):
                if i + nums[i] >= goal_index:
                    jumps += 1
                    if i == 0:
                        return jumps
                    break
            goal_index = i
        return 0


if __name__ == "__main__":
    sol = Solution()
    print(sol.jump([0]))