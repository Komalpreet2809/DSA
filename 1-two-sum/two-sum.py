class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        n=len(nums)
        a={}
        for i,num in enumerate(nums):
            comp=target-num
            if comp in a:
                return [a[comp],i]
            a[num]=i    
        