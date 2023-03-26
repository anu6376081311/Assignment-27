#include <iostream>
using namespace std;
class Matrix
{
   int a[3][3];
   public:
   void  accept();
   void display();
   void operator + (Matrix x);

};
// Accepting value from user
void Matrix::accept()
{
    cout<<"\n Enter Matrix Element (3X3):\n\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<" ";
            cout<<a[i][j];
        }
    }
}
// Function for displaying matrix

void Matrix::display()
{
    cout<<"\n Matrix is:\n\n";
    for(int i=0;i<3;i++)
    {    
        cout<<" ";
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
void Matrix::operator +(Matrix x){
    int mat[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            mat[i][j]= a[i][j]+x.a[i][j];
        }
    }
        cout<<"\n\nAddition of Matrix :\n\n";
        for(int i=0;i<3;i++)
           {    
             cout<<" ";
             for(int j=0;j<3;j++)
                 {
                    cout<<mat[i][j]<<"\t";
                 }
        cout<<"\n";
          }
    
}
int main()
{
    Matrix m1,m2,m3;
    m1.accept();
    // Displaying matrix
    m1.display();
    m2.accept();
    // Displaying matrix
    m2.display();
    
    m3=m1+m2;
    // Displaying nagated value
    m3.display();
    return 0;
}