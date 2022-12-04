#include <iostream>

using namespace std;

int main(){

    // r-value

    int a(5);
    int &&r1 = a;
    int &&r2 = 3;
    int &&r3 = a * a;
}