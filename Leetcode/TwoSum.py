class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        ls = []
        for i in range(len(nums)):
            for j in range(len(nums)):
                if i != j:
                    if target == nums[i]+nums[j]:
                        ls.append(i)
                        ls.append(j)
                
        return set(ls)

Your input
[2,7,11,15]
9
Output
[0,1]
Expected
[0,1]