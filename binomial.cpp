#include<iostream>
using namespace std;
//factorial function
 int factorial(int n){
    int fact = 1;
    for(int i = 1; i<= n ;i++){
        fact *= i;


    }
    return fact;
 }
 // math function
 int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);
     return fact_n /(fact_r * fact_nmr);

 }

 int main(){
    int n,r;
    cin>> n >>r;
    cout<< nCr(n,r);
    return 0;
 }