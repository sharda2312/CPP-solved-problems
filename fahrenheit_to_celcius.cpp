#include<iostream>
using namespace std;
int main()
{
    float cel, fah;
    cout<<"enter temperature in fahrenheit: "<< endl;
    cin>> fah;
    cel=(5.0/9)*(fah-32);
    cout<<"temperature in celcius is: "<< cel;
}