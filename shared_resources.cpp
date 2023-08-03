#include <iostream>
using namespace std;
class SharedResource
{
private:
    static int resource;
public:
    void accessResource()
    {
        if (resource > 0) {
            cout << "Access granted to the shared resource." << endl;
            resource--;
        } else {
            cout << "Access denied Shared resource is currently unavailable." << endl;
        }
    }
    static void setResourceCount(int count)
    {
        resource = count;
    }
};
int SharedResource::resource = 0;
int main()
{
    SharedResource obj1, obj2;
    SharedResource::setResourceCount(5);
    obj1.accessResource(); // Access granted
    obj2.accessResource(); // Access granted
    obj1.accessResource(); // Access granted
    obj2.accessResource(); // Access granted
    obj1.accessResource(); // Access granted
    obj2.accessResource(); // Access granted
    obj1.accessResource(); // Access denied
    obj2.accessResource(); // Access denied
    return 0;
}
