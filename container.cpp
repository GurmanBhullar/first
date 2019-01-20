#include<iostream>
using namespace std;
 
 class a;
  {
     private:
     char n[20];
     public:

     void enter()
     {
         cout<<"enter name";
         cin.getline(n,20);
     }
     void display()
     {
         cout<<"Name="<<n<<endl;
         
     }
 };

 class b;
 {
     private:
     a t;
     int r;
     public:
     void enter()
     {
         t.enter();
         cout<<"enter roll no";
         cin>>r;
     }
     void display()
     {
         t.display();
         cout<<"roll no="<<r;
     }

 }r;

 int main()
 {
     \]

     r.enter();
     r.display();
     return 0;
 }