#include <iostream>
using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void onescomp(void);
    void display(void);
};
void binary ::read(void)
{
    cout << "Enter binary num" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '0')
        {
            cout << "Incorrect format" << endl;
            exit(0);
        }
    }
}
void binary ::onescomp(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) == '1';
        }
      else {
            s.at(i) == '0';
            }

        
    }
}
void binary ::display(void)
{
    cout<<"Displaying your binary num"<<endl;

    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
int main()
{
    binary b;



    b.read();
    b.chk_bin();
    b.display();
    b.onescomp();
    b.display();

    return 0;
}