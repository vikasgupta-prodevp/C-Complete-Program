// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if (n<=1)
//     {
//         return 1;
//     }
//    return n*factorial(n-1);
// }
// int main(){
//     int a;
//     cout<<"Enter your num"<<endl;
//     cin>>a;
//     cout<<"The factorial of a is "<<factorial(a);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int factorial(int n)
// {
//     if (n <= 1)
//     {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }
// int main()
// {
//     int a;
//     cout << "Enter the num which you want to find the factorial" << endl;
//     cin >> a;
//     cout << "The factorial of " << a << " is :" << factorial(a) << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int factorial(int n){
//     if (n<=1)
//     {
//         return 1;
//     }
    
//     return n*factorial(n-1);
// }
// int main()
// {
//     int b;
//     cin>>b;
//     cout<<"The factorial of "<<b<<" is :"<<factorial(b)<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int fib(int n){
//     if (n<2)
//     {
//         return 1;
//     }
    
//     return fib(n-2)+fib(n-1);
// }
// int main()
// {
//     int a;
//     cin>>a;
//     cout<<"The series is :"<<fib(a);
//     return 0;
// }



#include<iostream>
using namespace std;
int fib(int n){
    if (n<2)
    {
        return 1;
    }
    
    return fib(n-2)+fib(n-1);
}
int main(){
    int b;
    cin>>b;
    cout<<"The fibonachi series is :"<<fib(b)<<endl;
    return 0;
}