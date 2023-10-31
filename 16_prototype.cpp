// *********FUNCTION PROTOTYPING*********
#include <iostream>
using namespace std;
// int sum(int a,int b){
//     int c=a+b;
// return c;
// }

// int sum(int a,int b);  NOT EXCEPTABLE
// int sum(int a, b);  NOT EXCEPTABLE

void g(void);
int sum(int a, int b)
{
    // *************** a and b is formal parameter************
    int c = a + b;
    return c;
}
int main()
{
    // **************num1 and num2 are actual parameter*********
    int num1;
    int num2;
    cout << "Enter your first num" << endl;
    cin >> num1;
    cout << "Enter your second num" << endl;
    cin >> num2;
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum(num1, num2) << endl;
    g();
    return 0;
}
void g()
{
    cout << "Good Morning " << endl;
}