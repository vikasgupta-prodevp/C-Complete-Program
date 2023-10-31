// #include<iostream>
// using namespace std;
// typedef struct employee
//     {
//         /* data */
//         int Eid;
//         char favchar;
//         float salary;
//     }ep;
// int main(){
//     ep vikas;
//     ep harish;
//     harish.salary=11111111;
//     cout<<"The value of harish's salary is "<<harish.salary<<endl;
//     vikas.Eid=122334;
//     vikas.favchar='v';
//     vikas.salary=65000.00;
//     cout<<"The value is"<<vikas.Eid<<endl;
//     cout<<"The value is"<<vikas.favchar<<endl;
//     cout<<"The value is"<<vikas.salary<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// typedef struct employee
// {
//     /* data */
//     int salary;
//     char favchar;
//    double mobileno;
//     string name;

// }ep;

// int main(){
//     ep vishal;
//     vishal.salary=140000000;
//     vishal.mobileno=8081278686;
//     vishal.name='vishak';
//     vishal.favchar='k';
//     cout<<"The value is :"<<vishal.salary<<endl;
//     cout<<"The value is :"<<vishal.mobileno<<endl;
//     cout<<"The value is :"<<vishal.name<<endl;
//     return 0;
// }


// ******************************union is used for better memory managemnt********************

#include <iostream>
using namespace std;
union money
{
    int rice;
    float pound;
    char car;
};

int main()
{
    union money vikas;
    vikas.rice = 33;
    vikas.pound = 33.23;
    vikas.car = 'c';
    cout<<"The value is "<<vikas.rice<<endl;
    // cout<<"The value is "<<vikas.pound<<endl;
    // cout<<"The value is "<<vikas.car<<endl;

    return 0;
}