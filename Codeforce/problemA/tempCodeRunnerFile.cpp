#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b ; cin >> a >> b;
    int year = 0;
    if (a == b) {
        cout << 1;
    } else{
        while(b>a){
            a *= 3;
            b *= 2;
            year += 1;
        }   
        cout << year;
    }
    return 0;
}
