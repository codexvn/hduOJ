#include<iostream>
using namespace std;
int main()
{
    int T,tmp,sum=0;
    while (cin>>T,T!=0)
    {       
        for (int i = 0; i < T; i++)
        {
            cin>>tmp;
            sum+=tmp;
        }
        cout<<sum<<endl;
        sum=0;
    }
}
