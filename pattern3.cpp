#include<iostream>
using namespace std;

// 12345
// 678910

int main()
{
    int row,col;

    for(row=1;row<=5;row++)
    {
        for(col=1;col<=5;col++)
        {
            cout<<(row-1)*5+col<<" ";
           
        }
        cout<<endl;
    }

}