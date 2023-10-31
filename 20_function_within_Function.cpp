// #include <iostream>
// using namespace std;
// struct student
// {
//     int cr_no;
//     char name[10];
//     void getdata()
//     {
//         cin >> cr_no;
//         cin >> name;
//     }
//     void dis()
//     {

//         cout << "The value is " << cr_no << name << endl;
//     }
// };

// int main()
// {
//     struct student vk;
//     vk.getdata();
//     vk.dis();
//     return 0;
// }

#include <iostream>
using namespace std;
struct student
{
    int cr_no;
    char name[10];
    void getdata()
    {
        cin >> cr_no;
        cin >> name;
    }
    void dis()
    {
        cout << "The value is " << cr_no << name << endl;
    }
};
int main()
{
    struct student vk;
    vk.getdata();
    vk.dis();
    return 0;
}
