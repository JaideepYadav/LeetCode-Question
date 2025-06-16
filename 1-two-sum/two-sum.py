class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        i=0
        j=len(nums)
        for i in range(0,j):
            
            for k in range(i+1,j):
                if nums[i]+nums[k]==target:
                    return [i,k]





        