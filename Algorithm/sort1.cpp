// sort(start,end)


#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {5, 2, 9, 1, 5, 6};
    sort(arr, arr + size(arr));
    for(int i: arr){
        cout << i << " ";
    }
}