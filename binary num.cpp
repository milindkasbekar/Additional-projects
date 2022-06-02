#include <iostream>
#include <math.h>
using namespace std;

int main(void){
    long b1, b2; 
    int r = 0, i = 0;
    int sum[20];
     cout << "\n\n Input the 1st binary number \n" ;
     cout << "------------------------------\n" ;
     std::cin >> b1;
     cout << "\n\n Input the 2nd binary number \n" ;
     cout << "------------------------------\n" ;
     std::cin >> b2;
     while(b1 !=0 || b2 !=0)
     {
         sum[i++] = int(((b1%10 + b2%10 + r) % 2));
         r = int(((b1%10 + b2%10 + r) / 2));
         b1 = b1/10;
         b2 = b2/10;
     }
     if(r != 0)
     sum[i] = r;
     
     cout << "Sum of Binary number is ";
     while(i > -1)
     {
         cout << sum[i];
         i--;
     }
}