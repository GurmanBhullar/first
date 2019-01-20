#include<iostream>
using namespace std;
template<class T>
class add
{
    private:
    T a;
    T b;
    T c;
    public:
    void enter()
    {
        cout<<"enter two numbwrs";
         cin>>a>>b;
    }
    void sum()
    {
        c=a+b;
    }
    void display()
    {
        cout<<"sum="<<c;

    }
};

int main()
{
    add <int> i;
    add <float> f;
    i.enter();
    i.sum();
    i.display();
    f.enter();
    f.sum();
    f.display();
    return 0;
}
