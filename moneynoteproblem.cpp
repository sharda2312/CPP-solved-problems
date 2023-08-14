#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int money = 13130;
   int rs100,rs50,rs20,rs1;
   switch(1){
      case 1:rs100=money/100;
             money=money%100;
             cout << "100 rupee note required="<<rs100<<endl;
      case 2:rs50=money/50;
             money=money%50;
             cout << "50 rupee note required="<<rs50<<endl;       
      case 3:rs20=money/20;
             money=money%20;
             cout << "20 rupee note required="<<rs20<<endl;
      case 4:rs1=money/1;
             money=money%1;
             cout << "1 rupee coin required="<<rs1<<endl;       
   }
}   