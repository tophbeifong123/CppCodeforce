// custom sort function
// sort(start,end,compare_function)
#include<bits/stdc++.h>
using namespace std;
bool compare(int a, int b){
    return a > b; // for descending order
}

bool comparison_function(int a, int b){
    if (a%2 == b%2){
        return a < b;
    }
    return a%2 < b%2;
}

int main(){
    int arr[] = {5, 2, 9, 1, 5, 6};
    sort(arr, arr + size(arr), comparison_function);
    for(int i: arr){
        cout << i << " ";
    }
    return 0;
}