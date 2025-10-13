#include<iostream>
#include<algorithm>
using namespace std;

int sqrt(int n){
        int s = 0;
        int e = n;
        int mid = (s + e)>>1;
        int ans = 0;
        while(s<=e){
            if(mid*mid<=n){
                ans = mid;
                s = mid + 1;
            }
            else e = mid - 1;
            mid = (s + e)>>1;
        }
        return ans;
    }
double Precisionsqrt(int n){
    double mysqrt = sqrt(n);
    int precision = 13;
    double step = 0.1;
    while(precision--){
        double j = mysqrt;
        while(j*j <= n){
            mysqrt = j;
            j+= step;
        }
        step /= 10;
    }
    return mysqrt;

}    

double BSprecisionsqrt(int n){
    double s = 0;
    double e = n;
    double mid = s + (e-s)/2;
    double ans = 0;
    while((e-s) >= 0.000001){
        double prod = mid*mid;
        if(prod <= n){
            // store 
            ans = mid;
            // compute
            s = mid;
        }
        else e = mid;
        mid = s + (e-s)/2;
    }
    return ans;

}

int main(){
    // int n = 63;
    // double ans = Precisionsqrt(n);
    // printf("Precison sqrt: %.13f\n", ans);

    int n = 63;
    double ans = BSprecisionsqrt(n);
    // cout islye use nhi kiya kyuki vo 5 precision tak answer de sakta hai.
    printf("Precision sqrt: %.6f\n", ans);

    return 0;
}
