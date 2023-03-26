#include<iostream>
using namespace std;

class fraction
{
    private:
      long num,deno;
      public:
      fraction(long int n=0,long int d=0)
      {
        num=n;
        deno=d;

      }
      friend void operator>>(istream &in,fraction &f)
      {
        cout<<"\nNumner :";
        in>>f.num;
        cout<<"\n Denominator :";
        cin>>f.deno;
      }
      friend void operator<<(ostream &out,fraction &f){
        cout<<f.num<<"/"<<f.deno;
      }
      fraction operator++()
      {
        ++num;
        ++deno;
        return(*this);

      }
      fraction operator++(int s)
      {
        fraction temp = *this;
        num++;
        deno++;
        return temp;
      }
};
int main()
{
    fraction f1,f2;
    cout<<"\nf1   :";
    std::cout<<f1;
    cout<<"\nf2  :";
    cout<<f2;
    cout<<"\n\nEnter 1st fraction value \n";
    cin>>f1;
    cout<<"\n ++f1 :";
    ++f1;
    cout<<f1;
    cout<<"\n\nenter 2ed fraction value \n";
    cin>>f2;
    f2=++f1;
    cout<<"\nf2== ++f1";
    cout<<"\n    :";
    cout<<f1;
    cout<<"\nf2  :";
    cout<<f2;
    f2=f1++;
    cout<<"\n\nf2==f1++";
    cout<<"\n    :";
    cout<<f1;
    cout<<"\nf2  :";
    cout<<f2;
    return 0;





}