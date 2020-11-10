
\\problem link: https://leetcode.com/problems/merge-intervals/
\\CODE : 1 
\\ O(NLOGN + N ) 
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
          vector<vector<int>> ans;
           if(inter.size()==1 || inter.size()==0)
               return inter;
        sort(inter.begin(),inter.end());
        int a=inter[0][0],b=inter[0][1];
       for(int i=0;i<inter.size();i++)
       {
           if(inter[i][0]<=b)
           {
               b=max(inter[i][1],b);
               if(i==(inter.size()-1))
               {
                    ans.push_back({a,b});
                   
               }
           }
           else
           {
               ans.push_back({a,b});
               a=inter[i][0];
               b=inter[i][1];
               if(i==(inter.size()-1))
               {
                    ans.push_back({a,b});
                   
               }
           }
       }
        return ans;
    }
};
