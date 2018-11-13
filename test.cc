#include <iostream>

class PrintBase
{
    private:
        int bullshit = 0;

    public:
        void print();
};

class Print : PrintBase // Notice this one inherits stuff and does not match library.h
{
    public:
        Print(); // If removing this constructor simply not called.
        void print();
};

int main() {
    Print *test = new Print();
    test->print();
}
