#include <iostream>
using namespace std;

int main() 
{
  string text = "TACOCAT";
  bool palindrome = true;

  for (int i = 0; i < (text.length()-1)/2; i++)
  {
    if(text[i] != text[(text.length() -1) -i])
    {
      palindrome = false;
      i = text.length() +1;
    }
  }
  if (palindrome)
  {
    cout << "This string IS a palindrome"<<endl;
  }
  else
  {
    cout << "This string is NOT a palindrome"<<endl;
  }
}