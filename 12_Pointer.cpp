// #include<iostream>
// using namespace std;
// int main(){
//     int a=4;
//     int* b=&a;
//     b=&a;
//     cout<<"The address of a is "<<&a<<endl;
//     cout<<"The address of b is "<<b<<endl;
//     cout<<"The address of a is "<<&b<<endl;
//     cout<<"The value at address b is  "<<*b<<endl;
//     int** c=&b;
//     cout<<"The address of b is "<<&b<<endl;
//     cout<<"The address of b is "<<c<<endl;
//     cout<<"The value at address of c is  "<<*c<<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 5;
//     int *b = &a;
//     b = &a;
//     cout << "The address of a is " << &a << endl;
//     cout << "The address of a is " << b << endl;
//     cout << "The value at address b is  " << *b << endl;
//     int **c = &b;
//     cout << "The value at address at address b is " << c << endl;
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int *b = &a;
    b=&a;
    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << b << endl;
    cout<<"The value of a is "<<*b<<endl;
    int **c=&b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The value of b is "<<**c<<endl;
    return 0;
}