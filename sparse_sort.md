```cpp
/*
emplace_back();

Author: Sourajeet Mohanty
DEVCPP
NO endl only '/n'
*/
#include<bits/stdc++.h>
using namespace std;
/*
vector<int> arr[100001];
int vis[100001];
*/
int main()
{
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  vector<string> s={"abc","","","","","","","","","","","","","ball","","","","dad","",""};
  string t="ball";
  int low=0,high=s.size()-1;
  while(low<=high)
  {
  	int mid=low+(high-low)/2;
  	
	   if(s[mid]=="")
	  {
	  	int left=mid-1;
	  	int right=mid+1;
	    
	    while(1)
	    {
	    	if(left<low && right>high)
	    	{
	    		cout<<"not found";
	    		break;
			}
			
			if(left>low && s[left]!="")
			{ mid=left; 
			break;}
			
			if(right< high && s[right]!="")
			{
				mid=right;
				break;
			}
			
			left--;
			right++;
			
		
		}
	  	
	  }
	  
	  if(s[mid]==t)
    	{
  		cout<<"found at "<<mid;
  	 	break;
	   }
  	  else if(s[mid]>t)
  	  high=mid-1;
  	  else
  	  low=mid+1;
  }


return 0;
}

```
