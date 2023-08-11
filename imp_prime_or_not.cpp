#include <iostream>
using namespace std;
int main()
{
    int num, i = 2;
    cout<<"enter any number: "<<endl;
    cin >> num;
    while (i < num)
    {
        if (num % i == 0)
        {
            cout << "not prime ";
            return 0;
        }
       
        i++;
    }
    cout<< "prime";
}