#include<iostream>
#include "assert.h"
using namespace std;
int main(){
    int n;
    cin>>n;
   // assert(n<=9);
        // for(int i=0; i<n; i++){
        //     int start_num_index = 8-i;
        //     int num = i+1;
        //     int count_num = num;
        //     for(int j=0; j<17; j++){
        //         if(j==start_num_index && count_num>0){
        //             cout << num;
        //             start_num_index+=2;
        //             count_num--;
        //         }
        //         else{
        //             cout << "* ";
        //         }
        //     }
        //     cout << endl;
        // }
        // int c =1;
        // for(int i =0; i<n; i++){
        //     for(int j =0; j<=i; j++){
        //         cout << c;
        //         c++;
        //         if(j<i){
        //             cout << "*";
        //         }
        //     }
        //     cout << endl;
        // }
        // // cout "C: "" << c << endl; 
        // // shrinking phase
        // int start = c-n;
        // for(int i =0; i<n; i++){
        //     int k = start;
        //     for(int j =0; j<=n-i-1; j++){
        //         cout << k;
        //         k++;
        //         if(j<n-i-1){
        //             cout << "*";
        //         }
        //     }
        //     start = start-(n-i-1);
        //     cout << endl;
        // }
        for(int i=0; i<n; i++){
            int cond = i<= n/2 ? 2*i : 2*(n-i-1);
            for(int j=0; j<=cond; j++){
                if(j<=cond/2){
                    cout << j+1;
                }
                else{
                    cout << cond-j+1;
                }
            }
            cout << endl;
        }

    }
