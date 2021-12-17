#include<bits/stdc++.h>
using namespace std;
int  main()
{
	int t=0;
	cin>>t;
	while(t--)
{
	int x,y,l,m,d;
	cin>>x>>y>>l>>m>>d;
	if(x/l>=d&&y/l>=d)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}
return 0;	
}
