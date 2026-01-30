#include <bits/stdc++.h>
using namespace std;
int main(){
    int row,col,val;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> val;
            if(val==1){
                row=i;
                col=j;
            }
        }
    }
    cout << abs(2 - row) + abs(2 - col) << "\n";
    return 0;
}