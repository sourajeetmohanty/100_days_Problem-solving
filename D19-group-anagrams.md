```cpp
class Solution {
public:
    bool is_anagram(string p,string r)
    {   if(p.size()!=r.size())
        return false;
        int a[26];
     memset(a,0,sizeof(a));
        for(int i=0;i<p.size();i++)
        {
            a[p[i]-'a']++;
        }
      for(int i=0;i<r.size();i++)
        {
            a[r[i]-'a']--;
        }
         for(int i=0;i<26;i++)
        {
            if(a[i]>0)
                return false;
        }
     return true;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
         map<vector<int>,vector<string>> mp;
         for(int i=0;i<strs.size();i++)
         {   vector<int> a(26,0);
              for(int j=0;j<strs[i].size();j++)
                  a[strs[i][j]-'a']++;
            
             mp[a].push_back(strs[i]);
             
         }
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            ans.push_back(it->second);
        }
        return ans;
        
        
        
        
        
      return ans;  
    }
};
```
