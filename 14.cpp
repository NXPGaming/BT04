#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int a[n];
    int b[n+1];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<=n;i++) cin>>b[i];
    
    sort(a,a+n);
    sort(b,b+n+1);
    int k=0,idx;
    for(int i=0;i<n;i++)
    {
        if(a[i] != b[i])
        {
            k=1;
            idx = i;
            break;
        }
    }
    if(k==1)
    {
        cout<<b[idx];
    }
    else cout<<b[n];
    return 0;
}
