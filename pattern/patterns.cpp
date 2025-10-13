#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
//     // numeric hollow half pyramid
//     for(int r =0; r<n; r++){
//         for(int c=0; c<r+1; c++){
//             if( r==n-1 || c==0 || c==r){
//                 cout << c+1 << " ";
//             }
//             else{
//                 cout << "  ";
//             }    
//         }
//         cout << endl;
//     }

// numeric inverted half pyramid
   // numeric hollow half pyramid
   for(int r =0; r<n; r++){
    for(int c=r+1; c<=n; c++){
        if( c==r+1 || c==n || r==0){
            cout << c << " ";
        }
        else{
            cout << "  ";
        }    
    }
    cout << endl;
}
}
