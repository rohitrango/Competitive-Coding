//Anmol
using namespace std;
#include <bits/stdc++.h>
#define rep(i,a,n) for( i=a;i<n;i++)
#define repeq(i,a,n) for( i=a;i<=n;i++)
#define inarr(i,n,arr) for(i=0;i<n;i++){cin>>arr[i];}
#define all(x) x.begin(),x.end()
#define xx first
#define yy second
typedef long long ll;
typedef unsigned long long ull;
typedef string st;
typedef vector<int> vi;
typedef vector<st> vs;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
 
void allnine(string str)
{
	int n=str.length();
	cout<<"1";
	for(int i=1;i<=n-1;i++)
		cout<<"0";
	cout<<"1\n";
 
}
 
void palin(string str)
{
	int n=str.length();
	if(n%2!=0)
	{
		char mid=str[n/2];
 
		if(mid!='9')
		{
			mid++;
			str[n/2]=mid;
			cout<<str<<"\n";
			return;
		}
		else
		{
			int i=n/2-1;
			int j=n/2+1;
			str[n/2]='0';
			int f=0;
			while(f==0)
			{
				if(str[i]!='9')
				{
					
				str[i]++;
				str[j]++;
				f=1;
				}
				else
				{
					str[i]='0';
					str[j]='0';
				}
				i--;
				j++;
 
			}
 
			cout<<str<<"\n";
		}	
 
	}
	else
	{
		char mid=str[n/2];
 
		if(mid!='9')
		{
			mid++;
			str[n/2]=mid;
			str[n/2-1]=mid;
			cout<<str<<"\n";
			return;
		}
		else
		{
			int i=n/2-2;
			int j=n/2+1;
			str[n/2]='0';
			str[n/2-1]='0';
			int f=0;
			while(f==0)
			{
				if(str[i]!='9')
				{
					
				str[i]++;
				str[j]++;
				f=1;
				}
				else
				{
					str[i]='0';
					str[j]='0';
				}
				i--;
				j++;
 
			}
			cout<<str<<"\n";
		}
}
}
 
void nonpalin(string str)
{
	int i;
	int n=str.length();
	if(n%2!=0)
	{
			char mid=str[n/2];
				int f=0;
				string l=str.substr(0,n/2);
				string r=str.substr(n/2+1);
				reverse(l.begin(),l.end()); 
				int p=l.length();
				rep(i,0,p)
				{
					if(l[i]>r[i])
					{
						f=1;
						break;
					}
				}
				if(f==1)
				{
					r=l;
					reverse(r.begin(),r.end());
					cout<<r<<mid<<l<<"\n";
				}
				else
				{
 
 
					if(mid!='9')
					{
						mid++;
 
					r=l;
					reverse(r.begin(),r.end());
					cout<<r<<mid<<l<<"\n";
 
					}
			
				else
				{
					for(int i=0;i<l.length();i++)
					{
						if(l[i]=='9')
							l[i]='0';
						else
						{
							l[i]++;
							break;
						}
					}
 
					mid='0';
					
					r=l;
					reverse(r.begin(),r.end());
					cout<<r<<mid<<l<<"\n";
 
				}
	}
 
}
	else
	{
		string l=str.substr(0,n/2);
		string r=str.substr(n/2);
		reverse(l.begin(),l.end()); 
		int p=l.length();
		int f=0;
		rep(i,0,p)
		{
			if(l[i]>r[i])
			{
				f=1;
				break;
			}
			else if(l[i]==r[i])
			continue;
			else
			break;
		}
		if(f==1)
		{
			r=l;
			reverse(r.begin(),r.end());
			cout<<r<<l<<"\n";
		}
		else
		{
			if(str[n/2-1]!='9')
			{
			l[0]++;
			r=l;
			reverse(r.begin(),r.end());
			cout<<r<<l<<"\n";
			}
			else
			{
				int i;
				int p=l.length();
				rep(i,0,p)
				{
					if(l[i]=='9')
						l[i]='0';
					else
					{
						l[i]++;
						break;
					}
				}
				r=l;
			reverse(r.begin(),r.end());
			cout<<r<<l<<"\n";
 
			}
 
		}						
	}
}
 
int main() {
    ios_base::sync_with_stdio(false);
	
 
	string str;
	int t;
	cin>>t;
	string s;
	while(t--)
	{
		cin>>str;
		int n=str.length();
		int i,j;
		char ch;
		int f=0;
		rep(i,0,n)
		{
			ch=str[i];
			if(ch!=57)
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			allnine(str);
			continue;
		}
 
		f=0;
 
		rep(i,0,n)
		{
			if(str[i]!=str[n-1-i])
			{
					f=1;
					break;
			}
		}
 
		if(f==0)
		{
			palin(str);
			continue;
		}
		else
		{
			nonpalin(str);
			continue;
		}
 
	}
	return 0;
}
