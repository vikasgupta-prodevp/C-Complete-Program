#include <iostream>
using namespace std;
int main()
{
    int marks[4] = {112, 145, 115, 245};
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;


//  **************Pointer yo array***************
    int * p=marks;
    cout<<"The value of *p is :  "<<*p<<endl;
    cout<<"The value of *(p+1) is :  "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is :  "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is :  "<<*(p+3)<<endl;

    // int Mathmark[3];
    // Mathmark[0]=233;
    // Mathmark[1]=263;
    // Mathmark[2]=232;
    // Mathmark[3]=213;

    // cout<<"These are Mathmarks"<<endl;
    // cout<<Mathmark[0]<<endl;
    // cout<<Mathmark[1]<<endl;
    // cout<<Mathmark[2]<<endl;
    // cout<<Mathmark[3]<<endl;

    // To print the marks using loop
    // int i;

    // *********FOR loop**********
    // for ( i = 0; i <4; i++)
    // {
    //     cout<<"The marks of "<<i<<" is :"<<marks[i]<<endl;
    // }

    // **********WHILE LOOP*********
    // while (i<=4)
    // {
    //    cout<<"The marks of "<<i<<" is :"<<marks[i]<<endl;
    //    i++;
    // }


    // do
    // {
    //     cout << "The marks of " << i << " is :" << marks[i] << endl;
    //     i++;

    // } while (i < 4);

    return 0;
}