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
 string s="b;bcdefbcbebc|abcdebcfgsdf|cbdbesfbcy|1bcdef23423bc32";
 s=s+'|';
 int i=0;
 string k="";
 while(s[i]!=';')
 {
 	k=k+s[i];
 	i++;
 }
 i++;
 int ans=0;
 int ansg=0;
 vector<int> res;
 for(;i<s.size();i++)
 {   if(s[i]=='|')
     {    ansg=ansg+ans;
     	res.push_back(ans);
     	ans=0;
	 }
 	if(s[i]==k[0])
 	{  bool f=true;
 	int r=0;
 		for(int j=i;j<i+k.size()&& i+k.size()<s.size();j++)
 		{
 			if(s[j]!=k[r])
 			{
			 f=false;
			 break;}
 			
 			r++;
		 }
		 if(r!=k.size())
		 f=false;
		 if(f==true)
		 ans++;
	 }
	 
 }
for(int g=0;g<res.size();g++)
cout<<res[g]<<"|";
cout<<ansg;


return 0;
}

```
