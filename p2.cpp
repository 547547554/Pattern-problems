#include<iostream>
using namespace std;

int main()
{
    int row,col,n;
    cout<<"Enter n number time print * : ";
    cin>>n;


    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            //space print
             cout<<" ";
        }
        for(col=1;col<=row;col++)
        {
            //star print
            cout<<"*";
        }
        cout<<endl;
    }
       
   
}