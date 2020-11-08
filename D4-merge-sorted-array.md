```CPP
//problem link:https://www.geeksforgeeks.org/efficiently-merging-two-sorted-arrays-with-o1-extra-space/

//CODE-1:
//TIME: O(N1) + O(N2) + O(N3 LOGN3);  N3=N1+N2
//SPACE: O(N1+N2)
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
vector<int> a={2,4,5,8,9};
vector<int> b={1,3,8,10};
vector<int> ans;
for(int i=0;i<a.size();i++)
ans.push_back(a[i]);
for(int i=0;i<b.size();i++)
ans.push_back(b[i]);


sort(ans.begin(),ans.end());
cout<<"The sorted merged array is"<<"\n";
for(int i=0;i<ans.size();i++)
cout<<ans[i]<<" ";



return 0;
}
```
```
//CODE 2:
//TIME:O(N1*LOGN2)
//SPACE : O(1)
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
vector<int> a={1,3,8,10};
vector<int> b={2,4,5,8,9};
int l1=a.size();
int l2=b.size();
for(int i=0;i<l1;i++)
{
	if(b[0]<a[i])
	{
		int t=a[i];
		a[i]=b[0];
		b[0]=t;
		sort(b.begin(),b.end());
	}
	
}
for(int i=0;i<l1;i++)
cout<<a[i]<<" ";
for(int i=0;i<l2;i++)
cout<<b[i]<<" ";



return 0;
}
```
