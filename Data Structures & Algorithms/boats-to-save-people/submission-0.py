class Solution:
    def numRescueBoats(self, people: List[int], limit: int) -> int:
        s = sorted(people)

        left = 0
        right = len(people) - 1

        nums = s

        res = 0

        while left <= right:
            remain = limit - nums[right]

            right -= 1

            res += 1

            if left <= right and remain >= nums[left]:
                left += 1
        return res