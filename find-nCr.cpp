#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i=1;i<=n; i++)
    {
        fact = fact * i;
    
}
    return fact;
}
int nCr(int n, int r){
    int numerator = factorial(n);
    int denom = factorial(r)*factorial(n-r);
    return numerator/denom;
    
}
int main()
{
    int n=10,r=5;
    cout<<"the value of 10C5  "<<(nCr(n,r));
}