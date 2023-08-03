#include <iostream>
using namespace std;

struct date {
    int d;
    int m;
    int y;
};

class Hospital
{
    char name[100];
    struct date d_adm;
    struct date d_dis;
protected:
    int age;
public:
    void getdata()
    {
        cout << "Enter name of the patient: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter date of admission (day month year):\n";
        cin >> d_adm.d >> d_adm.m >> d_adm.y;
        cout << "Enter date of discharge (day month year): \n";
        cin >> d_dis.d >> d_dis.m >> d_dis.y;
    }

    void display()
    {
        cout << name<<"\t\t";
        cout << age<<"\t\t";
        cout << d_adm.d << '-' << d_adm.m << '-' << d_adm.y<< "\t\t";
        cout << d_dis.d << '-' << d_dis.m << '-' << d_dis.y<<"\t\t"<<endl;
    }
};

class PediatricPatient : public Hospital
{
public:
    char vaccine[20];

    void get()
    {
        getdata();
        cout << "Enter the name of the vaccine to be given: ";
        cin >> vaccine;
    }

    void put()
    {
        if (age < 12) {
            display();
            cout << vaccine;
            cout << "\n";
        } else {
            cout << "Age greater than 12, not a pediatric patient\n";
        }
    }
};

int main()
{
    Hospital h[5];
    int n;
    cout << "Enter the number of patients: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        h[i].getdata();
    }

    cout << "\nPatient database:\n";
    cout << "NAME" << "\t" << "AGE" << "\t" << "DATE OF ADMISSION" << "\t" << "DATE OF DISCHARGE\n";
    for (int i = 0; i < n; i++) {
        h[i].display();
        cout << "\n";
    }
    PediatricPatient a1[5];
    cout << "\nEnter the number of pediatric patients: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        a1[i].get();
    }
    cout << "\nPediatric Patient database:\n";
    cout << "NAME" << "\t" << "AGE" << "\t" << "DATE OF ADMISSION" << "\t" << "DATE OF DISCHARGE" << "\t" << "VACCINE\n";
    for (int i = 0; i < n; i++) {
        a1[i].put();
    }
    return 0;
}
