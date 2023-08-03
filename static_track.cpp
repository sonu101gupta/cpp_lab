#include <iostream>
using namespace std;
class ObjectCounter
{
private:
    static int count; // Static variable to track the number of objects
public:
    ObjectCounter()
    {
        count++; // Increment count when an object is created
    }
    ~ObjectCounter()
    {
        count--; // Decrement count when an object is destroyed
    }
    static int getCount()
    {
        return count;
    }
};
int ObjectCounter::count = 0; // Initialize static variable
int main()
{
    ObjectCounter obj1, obj2;
    cout << "Number of objects: " << ObjectCounter::getCount() << endl; // Output: 2
    ObjectCounter obj3, obj4;
    cout << "Number of objects: " << ObjectCounter::getCount() << endl; // Output: 4
    return 0;
}
