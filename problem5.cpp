#include<iostream>
using namespace std;

int main()
{
    int row,col,n;
    cout<<"inter the input : ";
    cin>>n;

    for(row=1;row<=n;row++)
    {
        //print *
        for(col=1;col<=row;col++)
        cout<<"* ";
        
        //print space
        for(col=1;col<=2*n-2*row;col++)
         cout<<"  ";

        //print *
        for(col=1;col<=row;col++)
        cout<<"* ";

        cout<<endl;
    }
    for(row=n-1;row>=1;row--)
    {
      //print *
      for(col=1;col<=row;col++)
      cout<<"* ";

      //print space
      for(col=1;col<=2*n-2*row;col++)
      cout<<"  ";
      

      //print *
      for(col=1;col<=row;col++)
      cout<<"* ";
    
     cout<<endl;

    }
}