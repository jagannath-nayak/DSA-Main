#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void printdouble(int a){
    cout << 2*a << " ";
}

bool checkeven(int a){
    return a % 2 ==0;
}

int main(){
    vector<int> arr(6);
    arr[0] = 10;
    arr[1] = 11;
    arr[2] = 12;
    arr[3] = 13;
    arr[4] = 14;
    arr[5] = 15;
    //for_each(arr.begin(), arr.end(), printdouble);

    // int target = 400;
    // auto it = find(arr.begin(), arr.end(), target);
    // cout << *it;

    // auto it = find_if(arr.begin(), arr.end(), checkeven);
    // cout << *it << endl;

    // int target = 11;
    // int ans = count(arr.begin(), arr.end(), target);
    // cout << ans << endl;
    
    // int ans = count_if(arr.begin(), arr.end(), checkeven);
    // cout << ans << endl;
    
    // sort(arr.begin(), arr.end());
    // for(int a: arr){
    //     cout << a << " ";
    // }

    // reverse(arr.begin(), arr.end());
    // for(int a: arr){
    //     cout << a << " ";
    // }

    // rotate(arr.begin(), arr.begin()+3, arr.end());
    // for(int a: arr){
    //     cout << a << " ";
    // }

    // auto it = unique(arr.begin(), arr.end());

    // it iterator se phale sare unique elements hai
    // it ka baad sare duplicate elements hai

    // arr.erase(it, arr.end());
    // for(int a: arr){
    //     cout << a << " ";
    // }

    // auto it = partition(arr.begin(), arr.end(), checkeven);
    // for(int a: arr){
    //     cout << a << " ";
    // }

    return 0;
}