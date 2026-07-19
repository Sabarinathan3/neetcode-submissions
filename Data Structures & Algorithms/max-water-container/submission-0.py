class Solution:
    def maxArea(self, nums: List[int]) -> int:
        res = 0

        for i in range(len(nums)):
            for j in range(i+1, len(nums)):
                res = max(res, min(nums[i], nums[j]) * (j-i))
        return res