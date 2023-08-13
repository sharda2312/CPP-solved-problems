#include<iostream>
using namespace std;
int febo(int n){
    int a=0,b=1,i=3,sum=0;
    for (; i <=n; i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    cout<<n<<"th term of febonacci series is "<<sum<<endl;
    return sum;
}

int main()

{   int n;
    cout<<"enter the nth term"<<endl;
    cin>>n;
    if (n==1)
    {
        cout<<"the first term of the febonacci series is 0"<<endl;
    }
    else if (n==2)
    {
        cout<<"the second term of the febonacci series is 1"<<endl;
    }
    else if (n<=0)
    {
        cout<<"please enter the valid term"<<endl;
    }
    else
    {
        febo(n);
    }
}


// #include<iostream>
// using namespace std;
// int nthTermofAP(int n){
//     int nthTerm;
//     cout<<"enter the nth term "<<endl;
//     cin>>n;
//     nthTerm=3*n+6;
   
//     cout<<n<<"th term of AP is "<<nthTerm<<endl;
//     return nthTerm;
// }

// int main()

// {   int n;
//     nthTermofAP(n);
//     // nthTermofAP(n);
//     // nthTermofAP(n);
    
// }