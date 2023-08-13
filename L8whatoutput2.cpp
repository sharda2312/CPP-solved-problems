#include<iostream>
using namespace std;
int update(int n){
    n=n/2;
    return n;  
}
int main()
{
    int n=10;
    update(n);
    cout<<n<<endl;
}