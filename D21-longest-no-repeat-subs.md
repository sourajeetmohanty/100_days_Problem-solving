```cpp

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int l=0,r=0;
        int max_l=INT_MIN;
        if(s.size()==0)
            return 0;
        set<char> st;
        
        while(l<=r && r<s.size())
        {
            if(st.find(s[r])==st.end())
            {  int lr=r-l+1;
             
                max_l=max(max_l,lr);
             
          
             st.insert(s[r]);
               r++;
            
            }
            else
            {  
                while(st.find(s[r])!=st.end())
                {  
                    st.erase(s[l]);
                    l++;
                }
                st.insert(s[r]);
                int lr=r-l+1;
                max_l=max(max_l,lr);
                r++;
            }
        }
        
        return max_l;
        
        
    }
};
```
