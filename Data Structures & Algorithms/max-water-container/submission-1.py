class Solution:
    def maxArea(self, nums: List[int]) -> int:
        l = 0
        r = len(nums) - 1

        res = 0

        while l < r:
            area = min(nums[l], nums[r]) * (r-l)
            res = max(res, area)
            if nums[l] <= nums[r]:
                l += 1
            else:
                r -= 1
        return res