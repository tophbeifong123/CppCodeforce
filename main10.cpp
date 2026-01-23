#include <bits/stdc++.h>
using namespace std;
int main(){
    double n; cin >> n;
    if (n == int(n)) {
        cout << "Integer";
    } else {
        cout << "Decimal";
    }
}