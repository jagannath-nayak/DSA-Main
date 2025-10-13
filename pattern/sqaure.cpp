#include<iostream>
using namespace std;
int main()
{
    // square pattern
    int side;
    cout << "Enter the length of the side of the sqaure"<< endl;
    cin >> side;

    for(int r = 0; r< side; r++)
    {
        for(int c=0; c<side; c++)
        {
            cout << "* ";

        }
        cout << endl;
    }
}