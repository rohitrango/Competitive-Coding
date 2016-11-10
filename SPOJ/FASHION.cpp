using namespace std;
#include <bits/stdc++.h>
#define rep(i,a,n) for( i=a;i<n;i++)
int main() {
    ios_base::sync_with_stdio(false);
    int t,n,i,j=0;
    cin>>t;
    while(t--)
    {
        j=0;
        cin>>n;
        int a1[n];
        int b[n];
        int c[n];
        rep(i,0,n)
        cin>>a1[i];
        rep(i,0,n)
        cin>>b[i];
        sort(a1,a1+n);
        sort(b,b+n);
        rep(i,0,n){
        c[i]=a1[i]*b[i];
        j+=c[i];
        }
        cout<<j<<"\n";
        
    }
    
    return 0;
} 
