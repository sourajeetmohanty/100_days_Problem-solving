```cpp
\\problem link:https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
\\CODE 1: BRUTE FORCE 1
\\TIME O(N^3), SPACE O(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxg=INT_MIN,sum=0;
        if(nums.size()==1)
            return nums[0];
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                for(int k=i;k<=j;k++)
                {
                    sum=sum+nums[k];
                }
                maxg=max(maxg,sum);
                sum=0;
            }
            sum=0;
        }
        return maxg;
    }
};
```
```cpp

\\CODE 1: BRUTE FORCE 2
\\TIME O(N^2), SPACE O(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxg=INT_MIN,sum=0;
        if(nums.size()==1)
            return nums[0];
        int n=nums.size();
        for(int i=0;i<n;i++)
        {  sum=0;
            for(int j=i;j<n;j++)
            {   sum=sum+nums[j];
                maxg=max(maxg,sum);
               
            }
           
                
        }
        return maxg;
    }
};
```



```cpp


\\CODE 3: KADANES ALGORITHM
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
