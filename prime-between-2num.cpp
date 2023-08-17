#include<iostream>
#include<math.h>
using namespace std;
int prime(int first,int last){
    if (first<0 || last<0)
    {
        cout<<"please enter positive number.";
        return 0;
    }
    
    int num=first;
    for(;num<=last;num++)
    {
        if (num==0 || num==1)
            {
                continue;
            }
        bool notprime=0;
        for(int i=2;i<sqrt(num);i++)
        {
            if (num%i==0)
            {
                notprime=1;
                break;
            }
        }
        if (notprime==0)
        {
            cout<<num<<endl;
        }    
    } 
    return num;     
}
int main()
{
    prime(0,20);
} 