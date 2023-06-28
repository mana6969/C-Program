#include<iostream>
using namespace std;
int main()
{
    int num,i,count=0;
    cin>>num;
    if(num==1)
    {
        cout<<"prime";
    }
    else
    {
        for(i=1;i<=num;i++)
        {
            if(num%i==0)
            {
                count=count+1;
            }
        }
        if(count==2)
        {
            cout<<"prime";
        }
        else
        {
            cout<<"not prime";
        }
    }
    return 0;
}