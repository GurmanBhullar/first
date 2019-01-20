#include<iostream>
using namespace std;
class area
{
    float a,p,c,s;
    public:
    
  
area(int x)
{
    
  s=x;
}

void Area()
{
    a=s*s*p;
}
void cir()
{
    c=a*2*p;
}
void display()
{
    cout<<"area="<<a<<"circumference="<<c;
}
};
int main()
{
    float S;
    cout<<"enter side";
    cin>>S;
    area t(S);
    //t.area1();
    t.Area();
    t.cir();
    t.display();
    return 0;

}