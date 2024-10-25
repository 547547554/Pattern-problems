#include<iostream>
using namespace std;

int main()
{
    int n, row,col;
    cout<<"Enter input : ";
    cin>>n;

    for(row=1;row<=5;row++)
    {   
        //space print
        for(col=1;col<=5-row;col++)
        cout<<"  ";
        
        //number print 
        for(char name='A';name<='A'+row-1;name++)
        cout<<name<<" ";

        cout<<endl;
    }
}