#include<iostream>
using namespace std;
void display();
class rectangle


{
    int a,l,b;
    public:
    void enter()
    {
        cout<<"enter sides";
        cin>>l>>b;

    }
    friend void display(rectangle);

};


int main()
{
    rectangle t;
    t.enter();
    display(t);
    return 0;
}

void display(rectangle o)
{
    o.a=o.l*o.b;
    cout<<"area="<<o.a;
}