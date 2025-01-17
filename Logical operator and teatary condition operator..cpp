#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5, c = 20;
    cout << ((a > b && b < c) ? "Both conditions are true" : "At least one condition is false") << endl;
    cout << ((a < b || b < c) ? "At least one condition is true" : "Both conditions are false") << endl;
    return 0;
}
