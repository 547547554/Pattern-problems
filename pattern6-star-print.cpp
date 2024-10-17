#include <iostream>
using namespace std;

int main()
{
    int row, col, n;
    // cout<<"Enter the input : ";
    // cin>>n;

    for(row=1;row<=5;row++)
    {
        for(col=1;col<=5-(row-1);col++)
        cout<<"*"<<" ";

        cout<<endl;
    }
    
    
  
}