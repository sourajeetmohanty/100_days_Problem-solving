```
//problem link : https://www.geeksforgeeks.org/find-a-repeating-and-a-missing-number/

code:
O(N)
space :O(1)

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
  vector<int> nums={ 1, 3, 4, 5, 5, 6, 2 };
  int xor1=nums[0];
  for(int i=1;i<nums.size();i++)
   xor1=xor1^nums[i];
  for(int i=1;i<=nums.size();i++)
  xor1=xor1^i;
  
  int set_bit=xor1 & ~(xor1 - 1);
  //cout<<set_bit<<" ";
  int x=0,y=0;
  for(int i=0;i<nums.size();i++)
  {
  	if(set_bit & nums[i])
  	x=x^nums[i];
  	else
  	y=y^nums[i];
  }
  
  for(int i=1;i<=nums.size();i++)
  {
  	if(set_bit & i)
  	x=x^i;
  	else
  	y=y^i;
  }
  int f=0,s=0;
  for(int i=0;i<nums.size();i++)
  {
  	if(x==nums[i])
  	f=1;
  	if(y==nums[i])
  	s=1;
  }
  if(f==0)
  cout<<"Missing number is = "<<x<<"Repeating is ="<<y<<"\n";
  if(s==0)
  cout<<"Missing number is = "<<y<<"Repeating is ="<<x<<"\n";
  

return 0;
}

```
