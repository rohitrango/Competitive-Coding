#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int t,n,i,j,k;
	cin>>t;
		for(i=0;i<t;i++)
		{
		    cin>>n;
		    int s[n];
		    for(j=0;j<n;j++)
		    cin>>s[j];
		    sort(s,s+n);
		    int d[n-1];
		    for(j=0;j<n-1;j++)
		    {
		        d[j]=s[j+1]-s[j];
		    }
		    sort(d,d+(n-1));
		    cout<<d[0]<<endl;
		}
		return 0;
} 
