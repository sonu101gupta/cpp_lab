#include <iostream>
using namespace std;
class rs
{
public:
    float rs;
    virtual void conv() = 0;
    void disp()
    {
        cout << "is eqvivalent to " << rs << " INR\n\n";
    }
};
class doll : public rs
{
    float dol;

public:
    void conv()
    {
        cout << "Enter currncy in dollar : ";
        cin >> dol;
        rs = 54.3 * dol;
        cout <<dol << " in dollar ";
        disp();
    }
};
class euro : public rs
{
    float er;

public:
    void conv()
    {
        cout << "Enter currency in Euro : ";
        cin >> er;
        rs = 70.2 * er;
        cout <<er << " in euro ";
        disp();
    }
};
class pound : public rs
{

    float pnd;

public:
    void conv()
    {
        cout << "Enter currency in pound : ";
        cin >> pnd;
        rs = 81.1 * pnd;
        cout <<pnd << " in pound ";
        disp();
    }
};
int main()
{
    int choice;
    doll d;
    euro e;
    pound p;
    cout << "\tCurrency conversion\n";
    while (1)
    {
        cout << "1-$ to Rs 2-Euro to Rs 3-Pound to Rs 4-Exit\n";
        cout<<"Enter your choice : ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            d.conv();
            break;
        case 2:
            e.conv();
            break;
        case 3:
            p.conv();
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "Enter a valid choice\n\n";
        }
    }
    return 0;
}
