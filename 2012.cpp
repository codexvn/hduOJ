#include<iostream>
#include<cmath>
using namespace std;
bool prinum(int get);
int main ()
{
    int x,y;
    while (cin>>x>>y)
    {
        if (x!=0||y!=0)
        {
          for (int i = x; i <=y; i++)
          {
			  if (!prinum(i * i + i + 41))
			  {
				  cout << "Sorry" << endl;
				  break;
			  }
              else if(i==y)
                cout<<"OK"<<endl;           
          }
		}
		else
			break;
    }
}
bool prinum(int get) //是否为素数
{
    for (int i = sqrt(get); i >1 ; i--)
    {
        if(!(get%i))
        {
            return false;
            break;        
        }
    }
    return true;
}