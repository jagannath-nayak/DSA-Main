#include<iostream>
using namespace std;


int main(){
    // Declare[2D array]
    //int arr[4][3];

    // Initilization

    // int arr[3][3] = {
    //     {10,20,100},
    //     {30,40,200},
    //     {50,60,300}
    // };
    //cout << arr[1][1] << endl;
    
    // Traverse the entire array
    // int rowsize = 3;
    // int colsize = 3;

    // row wise
    // for(int rowIndex=0; rowIndex<rowsize; rowIndex++){
    //     for(int colIndex=0; colIndex<colsize; colIndex++){
    //         cout << arr[rowIndex][colIndex] << " ";
    //     }
    //     cout << endl;
    // }

    // col wise
    // for(int c=0; c<colsize; c++){
    //     for(int r=0; r<rowsize; r++){
    //         cout << arr[r][c] << " ";
    //     }
    //     cout << endl;
    // }
    
    // Diagonal wise
    // for(int r=0; r<rowsize; r++){
    //     for(int c=0; c<colsize; c++){
    //         if(r==c){
    //             cout << arr[r][c] << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    int arr[2][3];
    int rowsize = 2;
    int colsize = 3;

    // Taking Input
    for(int r=0; r<rowsize; r++){
        for(int c=0; c<colsize; c++){
            cout << "Enter the value for (" << r << "," << c << ") : ";
            cin >> arr[r][c];
        }
    } 
    cout << "Printing 2D array: " << endl;

    // row wise
    for(int rowIndex=0; rowIndex<rowsize; rowIndex++){
        for(int colIndex=0; colIndex<colsize; colIndex++){
            cout << arr[rowIndex][colIndex] << " ";
        }
        cout << endl;
    }



    return 0;
}
