```
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
void insert(vector<int> &a,int last)
{
	if(a.size()==0 || a[a.size()-1]<=last)
	{
		a.push_back(last);
		return;
	}
	int temp=a[a.size()-1];
	a.pop_back();
	insert(a,last);
	a.push_back(temp);
	
}
void sort(vector<int> &a)
{
	if(a.size()==1)
	return;
	int last=a[a.size()-1];
	a.pop_back();
	sort(a);
	insert(a,last);
}
int main()
{
vector<int> a={1,6,4,2,7,9,6,10,3,11};
sort(a);
for(int i=0;i<a.size();i++)
{
   cout<<a[i]<<" ";	
}
return 0;
}
```
