#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int count=0;
    while(n--){
        int p, v, t;
        cin>>p>>v>>t;
        if(p+v+t>=2) count++;
    }
    cout<<count<<"\n";
    
    return 0;
}
