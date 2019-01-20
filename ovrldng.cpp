#include<iostream>
using namespace std;
class fibo
{
    int f0,f1,fib;
    public:
    fibo()
    {
        f0=0;
        f1=1;
        fib=f0+f1;

    }

    void operator ++()
    {
        f0=f1;
        f1=fib;
        fib=f1+f0;
        cout<<fib<<endl;
    }

    void display()
    {
        cout<<f0<<endl<<f1<<endl<<fib<<endl;
    }
};

int main()
{
    fibo t;
    int n,i;
    cout<<"enter number of terms";
    cin>>n;
    t.display();
    for(i=4;i<=n;i++)
    {
        ++t;
    }
return 0;
}
