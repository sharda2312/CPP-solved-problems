#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int decimal = 10;
    switch (decimal)
    {
    case 5:
        cout <<" binary 5";
        break;
    case 10:
        cout <<" binary 10";
        // continue;
    case 4:
        cout <<" binary 4";
        // break;        
    default:cout <<" this is default";
        break;
    }



//     int decimal = 10,x,i=0,binary=0;
    

//     for (;decimal!=0;i++ )
//     {
//        x=decimal&1;
//        binary=x*pow(10,i)+binary;
       
//        decimal = decimal>>1;
//     }
//      cout << binary;
}   