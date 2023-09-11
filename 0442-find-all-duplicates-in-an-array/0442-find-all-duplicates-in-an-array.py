class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        ans = []
        
        for i in nums:
            abs_val = i
            #to find the absolute value
            if(i < 0):
                abs_val *= -1
            if nums[abs_val - 1] < 0:
                ans.append(abs(i))
            else:
                nums[abs_val - 1] *= -1
        
        return ans