```cpp
\\problem link: https://leetcode.com/problems/set-matrix-zeroes/

\\CODE-1 : BRUTE FORCE

\\O(N*M) SPACE!=O(1)
class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        vector<vector<int>> ans;
        for(int i=0;i<m.size();i++)
        {
            for(int j=0;j<m[i].size();j++)
            {   if(m[i][j]==0)
                ans.push_back({i,j});
            }
        }
        for(int i=0;i<ans.size();i++)
        {
            for(int j=0;j<m[0].size();j++)
                m[ans[i][0]][j]=0;
            for(int j=0;j<m.size();j++)
                m[j][ans[i][1]]=0;
        }
        
        
        
    }
};
```
