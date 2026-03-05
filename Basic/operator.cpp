#include <iostream>
using namespace std;
int main(){
    int a = 10, b = 4;
    cout << "a & b is " << (a > b && a-b == 6 ) << endl;
    cout << "a & b is " << (a > b || b>a ) << endl;
    cout << "a & b is " << (!b == 0) << endl;
}