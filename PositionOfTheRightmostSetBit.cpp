/*
Find the position of the right most set bit: 
The idea is to unset the rightmost bit of a number n and XOR the result with n. Then the rightmost set bit in n will be the position of the only set bit in the result.
Also, If n is odd number, we can directly return 1 as the first bit is always set for odd numbers.

Example:
n = 20  in Binary is : 00010100

Expected output:
20 in binary is 00010100
The position of the rightmost set bit is 3

00010100 &                (n = 20)
00010011                  (n-1 = 19)
--------
00010000 ^                (Now, Perform XOR operation between this result and the given number n)
00010100                  (n = 20)
--------
00000100                  Final Result.(here it is 3)


*/

#include <iostream>
#include <bitset>

using namespace std;

int positionOfRightmostSetBit(int n){
  
  //If the number is odd, return 1
  if(n & 1){
    return 1;  
  }
  
  //unset the rightmost bit and xor with the number itself
  n = n ^ (n & (n-1));
  
  //Find the position of the only set bit in the result
  //We can directly return `log2(n) + 1` from the function
  int pos = 0;
  while(n){
    n = n >> 1;
    pos++;
  }
  return pos;
}

int main(){
  int n = 20;
  cout << n << " in Binary is " << bitset<8>(n) << endl;
  cout << "The position of the rightmost set bit is " << positionOfRightmostSetBit(n);
  return 0;
}
