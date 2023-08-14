#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int decimal = -6,x,i=0,binary=0;
    
    decimal=decimal*-1;
    for (;decimal!=0;i++ )
    {
       x=decimal&1;
       binary=x*pow(10,i)+binary;
       
       decimal = decimal>>1;
    }
     cout << binary;
}   