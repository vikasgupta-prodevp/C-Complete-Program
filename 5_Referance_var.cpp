#include<iostream>
using namespace std;

int main()
{
    float x=343.434;
    float & y=x;    /*this is referance variable*/
    cout<<"The value of x is :"<<x<<endl;
    cout<<"The value of y is :"<<y<<endl;
    cout<<"The value of x in integer is :"<<(int)x<<endl;

    return 0;
}
