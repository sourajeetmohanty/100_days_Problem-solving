```cpp
\\problem link:https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
\\CODE 1: KADANES ALGORITHM
\\TIME : O(N),SPACE : O(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxg=INT_MIN,maxl=0;
        if(nums.size()==1)
            return nums[0];
        for(int i=0;i<nums.size();i++)
        {
            maxl=maxl+nums[i];
            maxg=max(maxg,maxl);
            maxl=max(maxl,0);
            
        }
        return maxg;
    }
};

```
