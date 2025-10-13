#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the length of the side of sqaure " << endl;
    cin>>n;
  // outer loop for rows 
    for(int r =0; r < n; r++)
    {  // inner loop for columns 
        for(int c=0; c < n; c++){
            if(r==0 || r==n-1 || c==0 || c==n-1){
                cout << "* ";

            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
}
}