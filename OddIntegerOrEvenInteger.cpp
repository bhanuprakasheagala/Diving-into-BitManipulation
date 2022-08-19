#include <iostream>
using namespace std;
 
int main()
{
    int n = 5;
 
    if (n & 1) {
        cout << n << " is odd";
    }
    else {
        cout << n << " is even";
    }
 
    return 0;
}
