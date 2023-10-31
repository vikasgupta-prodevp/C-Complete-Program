// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     int factorial = 1;
//     cout << "Enter the num ";
//     cin >> n;
//     if (n < 0)
//     {
//         cout << "Factorial of negative num is not exist";
//     }
//     else
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             factorial *= i;
//         }
//         cout << "Factorial of " << n << "=" << factorial;
//     }

//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int fact=1;
//     int n;
//     int i;
//     cout<<"Enter the num "<<endl;
//     cin>>n;
//     if (n<0)
//     {
//         cout<<"The factorial of negative num is not exist"<<endl;
//     }
//     else{
//         for ( i = 1; i <=n; i++)
//         {
//             fact=fact*i;
//         }
//         cout<<"The factorial of "<<n<<"is "<<fact<<endl;
//     }
//     return 0;
// }



// SElection control structure

#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter you age ";
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"Your age is 18"<<endl;
        break;

    case 16:
        cout<<"YOur age is under the 18 so you can not attend thye party"<<endl;
        break;

    case 65:
        cout<<"Your age is over the 60 so you want to take rest"<<endl;
        break;
    
    default:
    cout<<"No any case related to your age";
        break;
    }
    return 0;
}
