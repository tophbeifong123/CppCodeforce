#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m, a;
    cin >> n >> m >> a;
    if (a >= n && a >= m) {
        cout << "1\n";
    } else {
        cout << ((n + a - 1) / a ) * ((m + a - 1) / a) << "\n";
    }
    return 0;
}