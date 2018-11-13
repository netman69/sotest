#include "library.h"
#include <iostream>
using namespace std;

void Print::test() {
    cout << "more nonsense\n";
}

Print::Print() {
    x = 777;
    q = 213;
    for (; y < 444; ++y);
    test();
}

void Print::more() {
    cout << x << "extra function called\n";
}

void Print::print() {
    more();
    extra();
    cout << "test " << q << " " << y << endl;
}

void Print::extra() {
    cout << "extra function called\n";
}
