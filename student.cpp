#include <iostream>
using namespace std;
class stud
{
    char usn[20], name[30];
    float marks[3];
    int i;
public:
    float avg;
    void read(int);
    void calc(int);
    void disp();
};
void stud::read(int i)
{
    cout << "\nEnter USN no of student "<<i+1<<": ";
    cin >> usn;
    cout << "\nEnter name: ";
    cin >> name;
    for (int j = 0; j < 3; j++) {
        cout << "\nEnter the marks of subject " << j + 1 << ": ";
        cin >> marks[j];
    }
}
void stud::calc(int n)
{
    int sum = 0, min = marks[0];
    for (i = 0; i < n; i++) {
        sum += marks[i];
        if (min >= marks[i])
            min = marks[i];
    }
    avg = float(sum - min) / 2;
}
void stud::disp()
{
    cout << "USN: " << usn << endl;
    cout << "Name: " << name << endl;
    cout << "Marks: ";
    for (int i = 0; i < 3; i++) {
        cout << marks[i] << " ";
    }
    cout <<"\nAverage="<< avg << "\n"<<endl;
}
int main()
{
    int n, topper, i;
    float max = 0;
    cout << "\nEnter the number of students: ";
    cin >> n;
    stud s[n];
    for (i = 0; i < n; i++) {
        s[i].read(i);
        s[i].calc(n);
    }
    cout<<"\nStudent details- \n";
    for (i = 0; i < n; i++)
        s[i].disp();
    for (i = 0; i < n; i++) {
        if (max < s[i].avg) {
            max = s[i].avg;
            topper = i;
        }
    }
    cout << "\nThe toppers is student " << i + 1 << ": ";
    cout << "\nDetails:-\n";
    s[topper].disp();
}
