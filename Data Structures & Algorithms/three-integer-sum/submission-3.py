class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        ans = set()
        n = len(nums)

        for i in range(n):
            seen = set()

            for j in range(i + 1, n):
                target = -(nums[i] + nums[j])

                if target in seen:
                    ans.add((nums[i], target, nums[j]))

                seen.add(nums[j])

        return [list(x) for x in ans]