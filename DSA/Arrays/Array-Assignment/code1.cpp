#include<iostream>
#include<cmath>
using namespace std;

void find_missing(int a[], int n){
    // Negative marking method
    // visit
    for(int i=0; i<n; i++){
        int index = abs(a[i]);
        if(a[index-1] > 0){
            a[index-1] *= -1;
        }
    }
    // Missing number
    for(int i=0; i<n; i++){
        if(a[i]>0)
        cout << i+1 << " ";
    }
}

int main(){
    int a[] = {1,3,5,3,4};
    int n;
    n = sizeof(a)/sizeof(int);
    find_missing(a, n);


    return 0;
}