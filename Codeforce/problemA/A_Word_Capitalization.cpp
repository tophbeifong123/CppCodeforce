#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    if(s[0] == toupper(s[0])){
        cout<<s;
    } else {
        cout << char(toupper(s[0])) << s.substr(1);
    }
    return 0;
}