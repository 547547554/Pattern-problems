#include<iostream>
using namespace std;

int main()
{
    int col,row;
    for(row=1;row<=5;row++)
    {
        char name = 'a'+row-1;

        for(col=1;col<=row;col++)
        {
        cout<<name<<" ";
        }
        cout<<endl;
        
    }
}