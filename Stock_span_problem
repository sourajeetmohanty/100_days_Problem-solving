```cpp
vector <int> calculateSpan(int arr[], int n)
{
   // Your code here
   unordered_map<int,int> mp;
   stack<pair<int,int>> st;
   
   
   
   vector<int> ans;
   for(int i=0;i<n;i++)
   {
       
       if(st.empty())
       {
           ans.push_back(1);
           st.push(make_pair(arr[i],i));
           continue;
       }
       
       else
       {
           
           while(1)
           {   
               if(st.empty())
               {
                   ans.push_back(i+1);
                   break;
               }
           
               if(st.top().first>arr[i])
               { int cnt=i-st.top().second;
                ans.push_back(cnt);
                   break;
               }
               st.pop();
               
               
           }
           
           st.push(make_pair(arr[i],i));
           
           
           
       }
       
       
       
       
   }
   
   return ans;
   
}
```
