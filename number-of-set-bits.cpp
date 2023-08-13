#include<iostream>
using namespace std;

int bitcount(int n)
    {   
        int count=0;
        for(;n!=0;n>>=1)
            {   
                if (n&1)
                {
                    count++;
                }
            }
        return count;    
    }
int main()
{  
    int a,b;
    cout<<"enter two number to count the sets bits"<<endl;
    cin>>a>>b;
    cout<<"total number of set bits are"<<bitcount(a)+bitcount(b)<<endl;
    return 0;
}