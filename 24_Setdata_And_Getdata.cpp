// #include <iostream>
// using namespace std;
// class Employee
// {
// private:
//     int a, b, c;

// public:
//     int d, e;

//     void setData(int a, int b, int c);
//     void getdata()
//     {
//         cout << "The value of a is " << a << endl;
//         cout << "The value of b is " << b << endl;
//         cout << "The value of c is " << c << endl;
//         cout << "The value of c is " << c << endl;
//         cout << "The value of d is " << d << endl;
//     }
// };
// void Employee ::setData(int a1, int b1, int c1)
// {
//     a = a1;
//     b = b1;
//     c = c1;
// }

// int main()
// {
//     Employee vk;
//     vk.d = 23;
//     vk.e = 124;
//     vk.setData(1, 2, 3);
//     vk.getdata();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Employee
// {
// private:
//     int a, b, c;

// public:
//     int d, e;
//     void setData(int a1, int b1, int c1);
//     void getData()
//     {
//         cout << "The value of a is " << a << endl;
//         cout << "The value of b is " << b << endl;
//         cout << "The value of c is " << c << endl;
//         cout << "The value of d is " << d << endl;
//         cout << "The value of e is " << e << endl;
//     }
// };
// void Employee ::setData(int a1, int b1, int c1)
// {
//     a = a1;
//     b = b1;
//     c = c1;
// }
// int main()
// {
//     Employee vk;
//     vk.setData(1, 2, 3);
//     vk.d=1212;
//     vk.e=1212343;
//     vk.getData();

//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Employee
// {
// private:
//     int a, b, c;

// public:
//     int d, e;
//     void setData(int a1, int b1, int c1);
//     void getData()
//     {
//         cout << "The value of a is " << a << endl;
//         cout << "The value of b is " << b << endl;
//         cout << "The value of c is " << c << endl;
//         cout << "The value of d is " << d << endl;
//         cout << "The value of e is " << e << endl;
//     }
// };
// void Employee ::setData(int a1, int b1, int c1)
// {
//     a = a1;
//     b = b1;
//     c = c1;
// }

// int main()
// {
//     Employee vk;
//     vk.d = 123214;
//     vk.e = 123;
//     vk.setData(12, 12, 23);
//     vk.getData();
//     return 0;
// }

#include <iostream>
using namespace std;
class Student
{
private:
    int eid;
    char mo_no;
    float h_No;

public:
    int a;
    int b;

    void setData(int eid1, int mo_no1, int h_No1);
    void getData()
    {
        cout << "The value of eid1 is " << eid << endl;
        cout << "The value of mo_no is " << mo_no << endl;
        cout << "The value of h_No is " << h_No << endl;
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};

void Student::setData(int eid1, int mo_no1, int h_No1)
{
    eid = eid1;
    mo_no = mo_no1;
    h_No = h_No1;
}

int main()
{
    Student vk;
    vk.a = 123;
    vk.b = 98759;
    vk.setData(1234, 1452, 212);
    vk.getData();
    return 0;
}