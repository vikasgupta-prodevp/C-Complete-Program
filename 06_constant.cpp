#include<iostream>
using namespace std;

int main()
{
    int a=34;
    cout<<"The value was a is :"<<a<<endl;
    char c='w';

    cout<<"The value of char is :"<<c<<endl;
    a=23;
    c='34';
    cout<<"The value of char c is :"<<c<<endl;
    cout<<"The value of a is :"<<a<<endl;

    const int s=23;
    cout<<"The value of const int s is :"<<s<<endl;
    // s=34;   /*const variable can not be chanded*/

    return 0;
}
