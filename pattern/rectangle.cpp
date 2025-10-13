#include<iostream>
using namespace std;
int main()
{
    // for(int i = 1; i<=3; i++)
    // {
    //     cout << i << "-->";

    //     for(int j =1; j<=2; j++)
    //     {
    //         cout << "*";
            
    //     }
    //     cout << endl;
    // }

    // square pattern
    // total rows = 4
    // every row mai 4 stars hoge

    // row -- outer loop
    // column -- inner loop
    
    // outer loop --> 4 rows
    // for(int row = 0; row < 4; row++)
    // {
    //     // inner loop mai 4 stars print karne hai
    //     // hr row me kya karna hai, vo inner loop batyeaga
    //     for(int col = 0; col < 4; col++)
    //     {
    //         cout << "* ";
    //     }
    //     // 4 stars print karne ke baad next line mai ata hu
    //     cout << endl;
    // }
    
    // rectangle pattern
    int length;
    int width;
    cout << "Enter length"<< endl;
    cin >> length;

    cout << "Enter width" << endl;
    cin>> width;


    for(int row = 0; row< length; row++)
    {
        for(int col = 0; col < width; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    

}