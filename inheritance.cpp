#include<iostream>
using namespace std;
class student
{
    private:
    char n[20];
    int r;
    public:
    void enter()
    {
        cout<<"dnter name and roll number";
        cin.getline(n,20);
        cin>>r;
    }
void display()
{
    cout<<"name="<<n<<endl<<"roll no="<<r;
}
};

class result:private student
{
    int a,b,c,T;

    public:
    void enter()
    {
        student::enter();

        cout<<"enter marks of students";
        cin>>a>>b>>c;
        T=a+b+c;
    }
    void display()
    {
        student::display();
        cout<<endl<<"total marks="<<T;
    }
};

int main()
{
    result t;
    t.enter();
    t.display();
    return 0;
}