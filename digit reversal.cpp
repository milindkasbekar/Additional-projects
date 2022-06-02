# include<iostream>
# include <math.h>
using namespace std;

int main(void)
{
    int num, digits, first, last, a, b, middle, newnum;
    cout<<"Program to intechange the first and last digit of a number \n";
    cout<<"Enter the number for digit reversal \n";
    cin>>num;
    digits = (int)log10(num);
    first = num / pow(10, digits);
    last = num % 10;
    a = first* pow(10, digits);
    b = num % a;
    middle = b/10;
    newnum = (last * pow(10, digits)) + (middle * 10) + first;
    cout<<"New Number after digit reversal is : " << newnum<<endl;
}