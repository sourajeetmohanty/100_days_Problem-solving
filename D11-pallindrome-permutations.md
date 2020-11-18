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
 
   string s;
   cin.tie();
   getline(cin,s);
   int l=0;
   for(int i=0;i<s.length();i++)
   if(s[i]!=' ')
     l++;
     
     map<char,int> mp;
     for(int i=0;i<s.length();i++)
     {
     	if(s[i]!=' ')
     	{
     		mp[s[i]]++;
		 }
	 }
	 int two=0,one=0;
	 map<char,int> :: iterator it;
	 for(it=mp.begin();it!=mp.end();it++)
	 {
	 	if(it->second%2==0)
	 	two++;
	 	else
	 	one++;
	 }
	 if(l%2==0)
	 {
	 	if(one==0)
	 	{
		 cout<<"TRUE";
	 	return 0;}
	 }
	 else
	 {
	 	if(one==1)
	 	{
		 cout<<"TRUE";
	 	return 0;}
	 }
  cout<<"FALSE";
return 0;
}
```
