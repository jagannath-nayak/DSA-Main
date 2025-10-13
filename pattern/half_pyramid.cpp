#include<iostream>
using namespace std;
int main()
{
    // triangle pattern
    // 1st row mai 1 star, 2nd row mai 2 stars, 3rd row mai 3 stars, 4th row mai 4 stars and so on.
   

    //  int rows;
    //  cout << "Enter the number of rows" << endl;
    //  cin >> rows;

    // for(int i = 1; i <= rows; i++)
    // {
    //     for(int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    

    // for(int i = 1; i <= n; i++) {                 // Loop for each row
    //     for(int j = 1; j <= n - i; j++) {         // Loop to print spaces
    //         cout << " ";
    //     }
    //     for(int k = 1; k <= i; k++) {             // Loop to print stars
    //         cout << "*";
    //     }
    //     cout << endl;                             // Move to the next line
    // }


    // half pyramid
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // // outer loop
    // for(int row =0; row < n; row++)
    // {
    //     // inner loop
    //     for(int col =0; col < row+1; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // inverted half pyramid
    // outer loop
    // for(int row = 0; row < n; row++)
    // {
    //     // inner loop
    //     for(int col =0; col < n-row; col++)
    //     {
    //         cout << "* ";

    //     }
    //     cout << endl;
    // }

    // hollow half pyramid
//     // outer loop 
//     for(int row = 0; row < n; row++){
//         // inner loop
//         for(int col = 0; col <row+1; col++){
//             if(row==0 || row==n-1 || col==0 || col==row){
//                 cout << "* ";
//             }
//             else{
//                 cout << "  ";

//             }
//     }
//     cout << endl;
// }

// inverted hollow half pyramid
//    // outer loop 
//    for(int row = 0; row < n; row++){
//     // inner loop
//     for(int col = 0; col <n-row; col++){
//         if(row==0 || row==n-1|| col==0 || (row+col==n-1)){
//             cout << "* ";
//         }
//         else{
//             cout << "  ";

//         }
// }
// cout << endl;
// }

// // numeric half pyramid
// for(int row=0; row<n; row++){
//     for(int col=0; col<row+1; col++){
//         cout << (col+1) << " ";

//     }
//     cout << endl;
// }
// // numeric inverted half pyramid
for(int row=0; row<n; row++){
    for(int col=0; col<n-row; col++){
        cout << (col+1) << " ";

    }
    cout << endl;
}
}
    
