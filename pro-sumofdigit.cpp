#include<iostream>
using namespace std;
int main()
{
    int a,b,mul=1,num,sum=0,x;
    cout<<"enter the number: ";
    cin>>num;
    for(a=1;num>=1;a++)
    {
        b=num%10;
        num=num/10;
        sum=sum+b;
        mul=mul*b;

    }
    
    cout<<"the sum of digits are:"<<sum<<endl;
    cout<<"the product of the digits are:"<<mul<<endl;
    x=mul-sum;
    cout<<"product-sum= "<<x;

}