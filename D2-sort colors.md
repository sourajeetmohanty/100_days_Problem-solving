
```cpp
//Problem link : https://leetcode.com/problems/sort-colors

//code -1

//O(2N) TIME, O(1) SPACE    (COUNT SORT)

class Solution {
public:
    void sortColors(vector<int>& nums) {
       
        int z=0,n=0,t=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                z++;
            else if(nums[i]==1)
                n++;
            else
                t++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(z)
            {nums[i]=0;
             z--;}
            else if(n)
            {nums[i]=1;
             n--;
            }
            else
            { nums[i]=2;
             t--;}
        }
    }
};
```

```
//code-2
//Dutch National Flag Algorithm:
//O(N)
//O(1)

class Solution {
public:
    void sortColors(vector<int>& nums) {
         int n=nums.size();
        int low=0,mid=0,high=n-1;
        
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid],nums[high]);
                high--;
            }
        }
        
        
    }
};
```

