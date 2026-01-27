#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int x=0;
    while(n--){
        string word;
        cin >> word;
        if(word=="++X"||word=="X++") x++;
        else x--;
    }
    cout<<x<<"\n";
    
    return 0;
}
