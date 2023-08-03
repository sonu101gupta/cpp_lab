#include<iostream>
#include<cstdio>
using namespace std;
class dates
{
    int dd,mm,yy;
public:
    dates()
    {
        cout<<"Default date format: 1/12/2012 \n";
    }
    dates(int m,int d,int y)
    {
        dd=d;
        mm=m;
        yy=y;
    }
    void sd()
    {
        cout<<"Date is: ";
        cout<<mm<<"/"<<dd<<"/"<<yy<<"\n";
    }
};
int main()
{
    int m,d,y;
    cout<<"Enter year: ";
    cin>>y;
    cout<<"Enter month: ";
    cin>>m;
    cout<<"Enter date: ";
    cin>>d;
    dates a(m,d,y),b(d,m,y),c;
    a.sd();
    b.sd();
    return 0;
}
