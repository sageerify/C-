#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;
    cout << (a == b) << endl;  // 0 (false)
    cout << (a != b) << endl;  // 1 (true)
    cout << (a > b) << endl;   // 1 (true)
    cout << (a < b) << endl;   // 0 (false)
    cout << (a >= b) << endl;  // 1 (true)
    cout << (a <= b) << endl;  // 0 (false)
    return 0;
}
