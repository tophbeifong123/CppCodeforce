#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int mx = INT_MIN; int mn = INT_MAX;
    for(int i=1;i<=n;i++){
        int x; cin>>x;
        mx = max(mx,x);
        mn = min(mn,x);
    }
    cout << mx << " " << mn << endl;
    return 0;
}