#include<iostream>
using namespace std;

class Numbers
{
    int x,y,z;
    public:
      void accept()
      {
        cout<<"Enter three numbers:";
        cout<<"\n-------------------------------";
        cout<<"Enter frist number:";
        cin>>x;
        cout<<"Enter second  number:";
        cin>>y;
        cout<<"Enter third number:";
        cin>>z;
        cout<<"\n-------------------------------";
      }

      void display()
      {
        cout<<" "<<x<<"\t"<<y<<"\t"<<z;
      }

      void operator-()
      {
        x=-x;
        y=-y;
        z=-z;
      }

};

int main()
{
    Numbers num;
    num.accept();
    cout<<"\n Numbers are :\n\n";
    num.display();
    -num;
    cout<<"\n\n Negated Numbers are :\n\n";
    num.display();
    return 0;
    
    }