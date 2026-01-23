#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 10;
    for(int i =0;i < n;i++){
        if (i == 1){
         continue;
        }
        else if (i == 5){
         break;
        }
       cout << i << "\n";
    }
    return 0;
}