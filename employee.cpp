#include <iostream>
using namespace std;
class employee
{
    int num, basic;
    long da, it, net, gross;
    char name[20];
public:
    void read();
    void disp();
    void calc();
};
void employee::read()
{
    cout << "Enter employee id: ";
    cin >> num;
    cout<<"Enter emplyee name: ";
    cin>> name;
    cout<<"Enter emplyee basic salary: ";
    cin>>basic;
}
void employee::calc()
{
    da = (0.52) * basic;
    gross = da + basic;
    it = (0.3) * gross;
    net = basic + da - it;
}
void employee::disp()
{
    cout << "\nEmployee Number: " << num << "\n";
    cout << "Employee Name: " << name<<"\n";
    cout << "Basic Salary: " << basic<<"\n";
    cout << "DA: " << da << "\n";
    cout << "IT: " << it << "\n";
    cout << "Gross Salary: " << gross << "\n";
    cout << "Net Salary: " << net <<endl;
}
int main()
{
    int n;
    cout << "Enter no. of employee: ";
    cin >> n;
    employee e[n], *p;
    for (int i = 0; i < n; i++) {
        p = &e[i];
        p->read();
        p->calc();
    }
    cout<<"\n\nEmployees Details-\n";  
    for (int i = 0; i < n; i++) {
        p = &e[i];
        p->disp();
    }
    return 0;
}
