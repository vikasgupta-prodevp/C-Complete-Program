#include <iostream>
using namespace std;
class simple
{
    int data1;
    int data2;

public:
    void display();
    simple(int a, int b)
    {
        data1 = a;
        data2 = b;
    }
};
int main()
{
    simple c1(11, 12);
    c1.display();
    return 0;
}