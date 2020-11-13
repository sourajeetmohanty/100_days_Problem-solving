```cpp
problem link: https://leetcode.com/problems/pascals-triangle/

\\CODE: 
class Solution {
public:
    vector<vector<int>> generate(int nums) {
        vector<vector<int>> ans;
        if(nums==0)
            return ans;
        ans.push_back({1});
        if(nums==1)
            return ans;
        ans.push_back({1,1});
        if(nums==2)
            return ans;
        for(int i=2;i<nums;i++)
        {   vector<int> temp;
           temp.push_back(1);
            for(int j=1;j<i;j++)
            {
                
                    temp.push_back(ans[i-1][j-1]+ans[i-1][j]);
            }
                
                    temp.push_back(1);
                
            
         ans.push_back(temp);
         temp.clear();
        }
        return ans;
    }
};
```
