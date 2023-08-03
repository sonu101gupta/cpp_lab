#include <iostream>
using namespace std;
class divide
{
    float a, b;
public:
    void compute()
    {
        cout << "\nEnter two integers:\n";
        cin >> a >> b;
        try {
            if (b != 0)
                cout << "Answer = "<<a / b << "\n";
            else
                throw b;
        } catch (...) {
            cout << "\nDivision by zero(error) \n";
        }
    }
};
class neg
{
    int a;
public:
    void scan()
    {
        cout << "\nEnter age: ";
        cin >> a;
        try {
            if (a >= 0)
                cout << "\nAge of the person is " << a << " \n";
            else
                throw a;
        } catch (...) {
            cout << "\nPlease enter positive value for age \n";
        }
    }
};
int main()
{
    int c;
    divide d;
    neg n;
    while (1) {
        cout << "\n1-Divide integers\n2-Enter age\n3-Exit \n";
        cout<<"Enter your choice: ";
        cin >> c;
        switch (c) {
        case 1:
            d.compute();
            break;
        case 2:
            n.scan();
            break;
        default:
            return 0;
        }
    }
    return 0;
}
