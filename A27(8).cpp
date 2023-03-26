#include<iostream>
using namespace std;
class Matrix
{
     int a[3][3];
     public:
     void accept();
     void display();
    //  Overload "-"Unary operator
     void operator-();
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
        for(int j=0;j<3;j++)
        {
            cout<<" ";
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
}

void Matrix::operator-()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            a[i][j]=-a[i][j];
        }
    }
}

int main()
{
    Matrix m;
    m.accept();
    // Displaying matrix
    m.display();
    // calling overloded unary - operator
    -m;
    // Displaying nagated value
    m.display();
    return 0;
}