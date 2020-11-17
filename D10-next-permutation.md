```cpp
class Solution {
public:
   
    void nextPermutation(vector<int>& nums) {
       int n=nums.size();
        int fi=-1,fj=-1;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                fi=i;
                break;
            }
        }
        if(fi==-1)
        {
            reverse(nums.begin(),nums.end());
            return ;    
        }
        
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]>nums[fi])
            {
                fj=i;
                break;
            }
        }
        swap(nums[fi],nums[fj]);
        reverse(nums.begin()+fi+1,nums.end());
        }
};
```
