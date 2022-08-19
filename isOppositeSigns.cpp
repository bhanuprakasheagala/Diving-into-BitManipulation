#include <iostream>
#include <bitset>
using namespace std;
 
int main()
{
    int x = 4;
    int y = -8;
 
    cout << x << " in binary is " << bitset<32>(x) << endl;
    cout << y << " in binary is " << bitset<32>(y) << endl;
 
    // true if `x` and `y` have opposite signs
    bool isOpposite = ((x ^ y) < 0);
 
    if (isOpposite) {
        cout << x << " and " << y << " have opposite signs";
    }
    else {
        cout << x << " and " << y << " don't have opposite signs";
    }
 
    return 0;
}
