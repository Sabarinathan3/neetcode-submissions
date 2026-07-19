class Solution:
    def numRescueBoats(self, nums: List[int], limit: int) -> int:
        s = sorted(nums)

        left = 0
        right = len(nums) - 1

        res = 0

        while left <= right:
            if left == right or s[left] + s[right] <= limit:
                right -= 1
                left += 1 
            elif s[left] + s[right] > limit:
                right -= 1
            res += 1
        return res