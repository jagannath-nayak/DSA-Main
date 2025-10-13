#include<iostream>
using namespace std;

void fullpyramid(int n){
    for(int row = 0; row < n; row++){
        // print spaces
        for(int col = 0; col < n-row-1; col++)
            cout << " ";
        // print stars    
        for(int col = 0; col < row+1; col++)
            cout << "* ";
        cout << endl;
    }
}


void Invertedfullpyramid(int n){
    for(int row = 0; row < n; row++){
        // print spaces
        for(int col = 0; col < n+row-n; col++)
            cout << " ";
        // print stars    
        for(int col = 0; col < n-row; col++)
            cout << "* ";
        cout << endl;
    }
}

// inverted hollow full pyramid
void invertedhollowpyramid(int n){
    for(int row = 0; row < n; row++){
        // print spaces
        for(int col = 0; col < n+row-n; col++)
            cout << " ";
        // print stars    
        for(int col = 0; col < n-row; col++){
            if(/*row==0 ||*/ row==n-1 || col==0 || col==n-row-1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;

    }
}

// hollow full pyramid
void hollowfullpyramid(int n){
    for(int row = 0; row < n; row++){
        // print spaces
        for(int col = 0; col < n-row-1; col++)
            cout << " ";
        // print stars    
        for(int col = 0; col < row+1; col++){
            if(row==0 /*|| row==n-1 */|| col==0 || col==row )
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;

    }
}

// Diamond pattern
void Diamond(int n){
    fullpyramid(n);
    Invertedfullpyramid(n);
}

// hollow diamond pattern
void hollowDiamond(int n){
    hollowfullpyramid(n);
    invertedhollowpyramid(n);
}

void mixpyramid1(int n){
    for(int row =0; row<n; row++){
        // part1 - stars
        for(int col =0; col<n-row; col++){
            cout << "* ";
        }
        // part2 - spaces
        for(int col =0; col<row+row+1; col++){
            cout << "  ";
        }
        // part3 - stars
        for(int col =0; col<n-row; col++){
            cout << "* ";
        }
        cout << endl;

    }
}


void mixpyramid2(int n){
    for(int row =0; row<n; row++){
        // part1 - stars
        for(int col =0; col<row+1; col++){
            cout << "* ";
        }
        // part2 - spaces
        for(int col =0; col< (2*(n-row)-1); col++){
            cout << "  ";
        }
        // part3 - stars
        for(int col =0; col<row+1; col++){
            cout << "* ";
        }
        cout << endl;

    }
}

void fullmixpyramid(int n){
    mixpyramid1(n);
    mixpyramid2(n);
}

void fancy1(int n){
    for(int row=0; row<n; row++){
        for(int col=0; col<2*row+1; col++){
            if(col==0){
                cout << row+1 << " ";        
            }
            else if(col==2){
                cout << row+1 << " ";
            }
            else if(col==4){
                cout << row+1 << " ";
            }
            else if(col==6){
                cout << row+1 << " ";
            }
            else if(col==8){
                cout << row+1 << " ";
            }
            else{
                cout << "* ";
            }
        }
        cout << endl;
    }
}

void fancy2(int n){
    for(int row=0; row<n;row++){
        for(int col=0; col<2*(n-row)-1;col++){
            if(col%2==0){
                cout << n-row << " ";
            }
            else{
                cout << "* ";
            }
            }
            cout << endl;
        }
    }

void fullfancy12(int n){
    fancy1(n);
    fancy2(n);
} 

void ABCBA(int n){
    for(int row=0; row<n; row++){
        char ch = 'A';
        for(int col=0; col<row+1; col++){
            cout << ch << " ";
            ch++;
        }
        ch--;

        while(ch>'A'){
            ch--;
            cout << ch << " ";
        }
        cout << endl;
    }
}


int main() {
    int n;
    cin>>n;
    //fullpyramid(n);
    //Invertedfullpyramid(n);
    // Diamond(n);
    // hollowfullpyramid(n);
    //invertedhollowpyramid(n);
    //hollowDiamond(n);
    //fullmixpyramid(n);
    //fancy1(n);
   // fullfancy12(n);
   ABCBA(n);
    
    
    return 0;
}
