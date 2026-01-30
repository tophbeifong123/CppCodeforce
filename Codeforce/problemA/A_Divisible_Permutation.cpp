#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int p; cin >> p;
        vector<int> v;
        
        int L = (p + 1) / 2; 
        int R = L + 1;

        for(int i = 0; i < p; i++) {
            if(i % 2 == 0) {
                v.push_back(L--); 
            } else {
                v.push_back(R++); 
            }
        }

        for(int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}