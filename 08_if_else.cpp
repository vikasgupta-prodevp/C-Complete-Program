#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Tell me your age :" << age << endl;
    cin >> age;
    if (age < 18)
    {
        cout << "You can not come my party because your age is not over the 18";
    }
    else if (age == 18)
    {
        cout << "You can come";
    }
    else if (age > 60 and age < 70)
    {
        cout << "Your age is over 60 and this time is to take rest ";
    }
    else
    {
        cout << "Your age is over 18 and you can come to my party";
    }
    return 0;
}
