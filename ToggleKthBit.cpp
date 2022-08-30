/*
  We know that, By using the expression 1 << (k - 1), we get a number with all bits zero, except the K'th bit. If we do bitwise XOR of this expression
  with the number n, we can toggle it's K'th bit.
  
  Ex-OR(also called XOR):
  
    Input         output
  -----------------------
  A       B         A^B
 -----------------------
  0       0          0
  0       1          1
  1       0          1
  1       1          0
 ----------------------
  
*/

#include <iostream>
#include <bitset>

int toggleKthBit(int n, int k){
  return n ^ (1 << (k - 1));
}

using namespace std;

int main(){
    int n = 20;
    int k = 3;
    cout<<n<<" in Binary is "<<bitset<8>(n)<<endl;
    cout<<"Toggling the Kth Bit....<<endl;
    n = toggleKthBit(n,k);
    cout<<n<<" in Binary is "<<bitset<8>(n)<<endl;
  
    return 0;
}

/*

Expected Output:

20 in Binary is 00010100
Toggling the Kth Bit....
16 in Binary is 00010000

*/
