#include<iostream>
#include<string.h>
using namespace std;

class CString
{
    public:
    char str[20];
    public:
       void get_string()
       {
        cout<<"\n Enter string";
        cin>>str;
       }

       void display()
       {
        cout<<str<<endl;
    
       }

       CString operator+(CString x)
       {
            CString s;
            strcpy(s.str,str);
            strcat(s.str,x.str);
            return s;
       }
       int operator==(CString &t); 
};

int CString::operator==(CString &t)
{
    for(int i=0;str[i]!='\0';i++)
    {
        for(int j=0;t.str[j]!='\0';j++)
        {
            if(str[i]==t.str[j])
            {
               return 0;
            }
            else
            {
                return 1;
            }
        }
    }
}

int main()
{
    CString str1, str2,str3;
    int result =0;
    str1.get_string();
    str2.get_string();

    cout<<"\n-------------------------------";
    cout<<"\n frist string is                :";
    str1.display();

    cout<<"\n second string is                :";
    str2.display();
    cout<<"\n-------------------------------";
    str3=str1+str2;
    cout<<"\n Concatened string is:";
    str3.display();

    result=str1==str2;
    if(result==0)
    {
      cout<<"\n\n Both strings are equal";
    }
    else
    {
        cout<<"\n\n Both strings are not  equal";
    }
    return 0;
}