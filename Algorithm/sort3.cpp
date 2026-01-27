#include <bits/stdc++.h>
using namespace std;

bool prime(int a,int b){
    return a > b;
}
int main(){
    int arr[] = {3, 1, 2, 3, 2, 1, 1, 2, 3};
    sort(arr,arr + size(arr), prime);
    for(int i: arr){
        cout << i << " ";
    }
    return 0;
}