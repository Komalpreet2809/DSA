class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        n=len(nums)
        a=set()
        for num in nums:
            if num in a:
                    return True
            a.add(num)
        return False