#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex() {}
    Complex(int r, int i) : real(r), imag(i) {}
    void set(int i){
        cout<<"Enter the real part of "<<i<<" complex number : ";
        cin>>real;
        cout<<"Enter the imaginary part of"<<i<<" complex number : ";
        cin>>imag;
    }
    void show() { cout << real << " + " << imag << "i"
                       << "\n"; }

    Complex operator+(const Complex &op2) const { return {real + op2.real, imag + op2.imag}; }
    Complex operator-(const Complex &op2) const { return {real - op2.real, imag - op2.imag}; }
    Complex &operator++()
    {
        ++real;
        ++imag;
        return *this;
    }
    Complex operator++(int)
    {
        Complex temp = *this;
        ++real;
        ++imag;
        return temp;
    }
    Complex &operator--()
    {
        --real;
        --imag;
        return *this;
    }
    Complex operator--(int)
    {
        Complex temp = *this;
        --real;
        --imag;
        return temp;
    }
    bool operator==(const Complex &op2) const { return (op2.real == real) && (op2.imag == imag); }
};

int main()
{
    Complex comp1, comp2, comp3;
    comp1.set(1);
    comp2.set(2);
    cout << "Complex Number 1: ";
    comp1.show();
    cout << "Complex Number 2: ";
    comp2.show();

    cout << "Addition of complex numbers: ";
    (comp1 + comp2).show();
    cout << "Subtraction of complex numbers: ";
    (comp1 - comp2).show();

    cout << "Checking if the 2 complex numbers are equal\n";
    comp1.show();
    comp2.show();
    cout << (comp1 == comp2 ? "Numbers are same" : "Numbers are different") << endl;

    cout << "Incrementing complex number: ";
    comp1.show();
    ++comp1;
    cout << "After increment: ";
    comp1.show();
    cout << "Decrementing complex number: ";
    comp2.show();
    --comp2;
    cout << "After decrement: ";
    comp2.show();

    return 0;
}
