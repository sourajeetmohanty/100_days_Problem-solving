```
\\problem link:  https://www.geeksforgeeks.org/determine-string-unique-characters/
\\CODE 1:
\\  O(N) TIME, NO EXTRA DATA STRUCTURE NEEDED


#include<bits/stdc++.h>
using namespace std;

int main()
{
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  string s;
  cin>>s;
  int check=0;
  for(char c:s)
  {
  	int bit=c-'a';
  	if(check&(1<<bit))
  	{
	cout<<"IT's NOT UNIQUE";
	return 0;
     }
  	check=check|(1<<bit);
  }
cout<<"IT's UNIQUE"<<endl;

return 0;
}
```
