#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
 
 
int main() {
    int t,u;
    cin>>t;
    int f=0;
    long long n,k,i,j,j1,p;
    while(t--)
    {
        f=0;
        cin>>n;
long long arr[n];
for(i=0;i<n;i++)
cin>>arr[i];
sort(arr,arr+n);
for(j=0;j<n-1;j++)
{
    if(arr[j+1]-arr[j]>1)
    {
        f=1;
        break;
    }
}
if(f==1)
cout<<"NO"<<endl;
else
cout<<"YES"<<endl;
 
 
    }    
 
    return 0;
}
