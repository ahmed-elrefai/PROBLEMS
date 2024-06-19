class Solution:
    def jump(self, nums: list[int]) -> int:
        jump_count = 0
        goalIndex = len(nums) - 1
        while goalIndex != 0:
            for i, num in enumerate(nums):
                if (i + num >= goalIndex):
                    jump_count += 1
                    goalIndex = i
                    break
        return jump_count



def main():
    solution = Solution()
    jump_count = solution.jump([2,3,1,1,4])
    print("jumps: ",jump_count)

if __name__ == "__main__":
    main()