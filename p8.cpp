#include<iostream>
using namespace std;

int main()
{
    int n,row,col;
    cout<<"Enter the input : ";
    cin>>n;

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            cout<<"  ";
        }
        for(col=row;col>=1;col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}

//op: Enter the input : 4
//            1
//         2  1
//     3   2  1
// 4   3   2  1