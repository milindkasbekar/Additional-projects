#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int n, i;
    vector<int> num;
    vector<int>::iterator it;
    cout<<"Enter the list of number \n";
    while (cin >> n)
    {
        num.push_back(n);
    }
    cout<<"Numbers in vector are : \n";
    for(it = num.begin(); it < num.end(); it++ )
    cout << *it <<"\n ";
    sort(num.rbegin(), num.rend());
    
    cout<<"\n 3 greatest numbers in vector are \n";
    for(i =0; i != 3; i++)
    cout << num[i]<<endl;
    return 0;
}