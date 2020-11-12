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
```
\\CODE 2:
\\ O(M*N)   SPACE : O(1)
class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
       int flag=1;
       int r=m.size(),c=m[0].size(); 
        for(int i=0;i<r;i++)
        {
            if(m[i][0]==0)flag=0;
            for(int j=1;j<c;j++)
            {
                if(m[i][j]==0)
                {
                    m[0][j]=0;
                    m[i][0]=0;
                }
            }
        }
        for(int i=r-1;i>=0;i--)
        {
            for(int j=c-1;j>=1;j--)
            {
                if(m[i][0]==0 || m[0][j]==0)
                    m[i][j]=0;
            }
            if(flag==0)
                m[i][0]=0;
        }
        
        
        
    }
};
```
