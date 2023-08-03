#include <iostream>
using namespace std;

template <class X>
void bubble(X *items, int count)
{
   // register int a, b;
    X temp;
    for (int a = 1; a < count; a++)
        for (int b = count - 1; b >= a; b--)
            if (items[b - 1] > items[b])
            {
                temp= items[b-1];
                // exchange elements t = items[b-1];
                items[b - 1] = items[b];
                items[b] = temp;
            }
}
int main()
{
    int intArray[7] = {7, 5, 4, 3, 9, 8, 6};
    double doubleArray[5] = {4.3, 2.5, -0.9, 100.2, 3.0};
    cout<<"Original integer array: ";
    for (int i = 0; i < 7; i++)
        cout << intArray[i] << ' ';
    cout << endl;
    cout << "Original float array: ";
    for (int i = 0; i < 5; i++)
        cout << doubleArray[i] << ' ';
    cout << endl;

    bubble(intArray, 7);
    bubble(doubleArray, 5);

    cout << "Here is sorted integer array: ";
    for (int i = 0; i < 7; i++)
        cout << intArray[i] << ' ';
    cout << endl;
    cout << "Here is sorted double array: ";
    for (int i = 0; i < 5; i++)
        cout << doubleArray[i] << ' ';
    cout << endl;
    return 0;
}
