#include<iostream>
using namespace std;

class ab
{
    int f;
int n;
    public:
    int fib(int x)
    {n=x;
        if(n==1)
        {return 0;
       // break;
        }

        if(n==2)
        {return 1;
        //break;
        }
        
        else{
            f=fib(n-1)+fib(n-2);
            return f;
          
        }
    }
};
int main()
{
  ab t;
  int n,i,m;
  cout<<"enter number";
cin>>n;
//t.fib(n);
while(i<n)
    {   i=1;
    m=t.fib(i);
        cout<<m<<endl;
        i++;
    }
return 0;
}

