#include<iostream>
using namespace std;
int nthTermofAP(int n){
    int nthTerm;
    cout<<"enter the nth term "<<endl;
    cin>>n;
    nthTerm=3*n+6;
   
    cout<<n<<"th term of AP is "<<nthTerm<<endl;
    return nthTerm;
}

int main()

{   int n;
    nthTermofAP(n);
    // nthTermofAP(n);
    // nthTermofAP(n);
    
}