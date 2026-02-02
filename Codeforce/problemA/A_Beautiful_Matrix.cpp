#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int row,col,val;
    bool flag = false;
    for(int i=0;i<5;i++){
        if(flag) break;
        for(int j=0;j<5;j++){
            cin >> val;
            if(val==1){
                row=i;
                col=j;
                flag = true;
            }
        }
    }
    cout << abs(2 - row) + abs(2 - col) << "\n";
    return 0;
}