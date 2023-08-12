#include <iostream>
using namespace std;
int main()
{
    int num = 254,product=1,sum=0,x,result;
    

    for (; num!=0; )
    {
        x=num%10;
        num=num/10;
        product=product*x;
        sum=sum+x;
    }
    result=product-sum;
    cout << result;
}