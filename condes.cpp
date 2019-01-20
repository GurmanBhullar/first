#include<iostream>
using namespace std;

class ab
{
    private:
    int a,b,c,d,e,f,g;
     ab()
    {
        cout<<"enter two numbers";
        cin>>a>>b;
    }
    public:
    /*ab()
    {
        cout<<"enter two numbers";
        cin>>a>>b;
    }*/
    void sum()
    {
        c=a+b;
    }
    void sub()
    {
        d=a-b;
    }
    void mul()
    {
        e=a*b;
    }
    void div()
    {
        f=a/b;
    }
    void mod()
    {
        g=a%b;
    }
    ~ab()
    {
        cout<<"sum="<<c<<endl<<"sub="<<d<<endl<<"mul="<<e<<endl<<"div="<<f<<endl<<"mod="<<g;
    }
};

int main()

{ab t;
t.sum();
t.sub();
t.mul();
t.div();
t.mod();
return 0;
}

