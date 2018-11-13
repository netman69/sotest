#include "library.h"
#include <iostream>
using namespace std;

Print::Print() {
    q = 123;
    for (; y < 111; ++y);
}

void Print::print() {
    extra();
    cout << "test " << q << " " << y << endl;
}

void Print::extra() {
    cout << "extra function called\n";
}
