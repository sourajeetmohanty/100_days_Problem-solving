
```cpp
//problem link :
//"https://leetcode.com/problems/find-the-duplicate-number/"

//ALGORITHM: HARE TORTOISE ALGO

//CODE:

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      int slow=nums[0];
      int fast=nums[0];
      int start=0;
      while(slow!=fast || start==0)
      {
          start=1;
          slow=nums[slow];
          fast=nums[nums[fast]];
      }
        fast=nums[0];
    
        while(slow!=fast)
        {
           
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
        
        
        
    }
};
```
