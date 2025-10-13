#include <iostream>
using namespace std;

int main(){
    // // integer -> stack memory
    // int a = 5;
    // cout << a << endl;

    // // integer -> heap memory
    // int *ptr = new int;
    // *ptr = 5;
    // cout << *ptr << endl;

    // // deallocate using delete keyword
    // delete ptr;
    
    // // array -> stack memory
    // int arr[5] = {0};
    // cout << arr[0] << arr[1] << endl;

    // // array -> heap memory
    // int *ptr = new int[5];
    // cout << ptr[0] << ptr[1] << endl;

    // 2D array -> stack memory
    // int arr[2][4] = {
    //     {2,4,6,8},
    //     {1,2,3,4}
    // };

    // 2D array -> Heap memory
    // 4 -> row count
    // 3 -> col count

    int** arr = new int *[4];  
    for(int i=0; i<4; i++){
        arr[i] = new int[3];
    }

    // Taking input 
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cin >> arr[i][j];
        }
    }
    cout << "Printing the 2D array" << endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for(int i=0; i<4; i++){
        delete[] arr[i];
    }




    return 0;
}