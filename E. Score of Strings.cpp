#include<bits/stdc++.h>
using namespace std;
int main ()
{
	long long int t,q;
	cin>>t>>q;
      vector<string> v;
         string s;
      map <string,long long int> mp;
	while(t--)
	{
		long long int i,sum=0;
		char x;
		cin>>x>>s;
		if(x=='I')
		{
		     long long int pos=1;
			while(pos<=s.size ()) {
			string sub= s.substr(0,pos);
			mp[sub]++;
			pos++;
			}

		}
		else
		{
			if(mp[s]==0)
				cout<<0<<endl;
			else
			{
			 long long int pos=1;
			for(i=0;i<s.size();i++)
			{
				string sub= s.substr(0,pos);
				pos++;
				 sum+=mp[sub];
					//cout<<sum<<endl;
			}
			cout<<sum<<endl;
		}
		}
	}
}
