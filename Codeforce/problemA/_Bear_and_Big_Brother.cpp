#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b; cin >> a >> b;
    int year = 0;
    while (b>=a){
        a *= 3; 
        b *= 2;
        year += 1;
    }
    cout << year;
    return 0;
}