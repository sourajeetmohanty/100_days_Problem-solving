```cpp
class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int> mp;
        int l=s.length();
        
        for(int i=0;i<l;i++)
        {
            mp[s[i]]++;
           
        }
         unordered_map<char,int>::iterator it;
        int res=0;
        vector<int> ans;
        for(it=mp.begin();it!=mp.end();it++)
        {
           ans.push_back(it->second);
        }
        if(ans.size()==1)
            return 0;
        sort(ans.begin(),ans.end());
        int p=0;
        while(p==0)
        {
        for(int i=0;i<ans.size()-1;i++)
        {
            if(ans[i]==ans[i+1] && ans[i]!=0)
            {  ans[i]-=1;
                res++;
             p=0;
             
             break;
            }
            else 
            {
                p=1;
            }
            
        }
            sort(ans.begin(),ans.end());
        }
        return res;
        
    }
};
```
