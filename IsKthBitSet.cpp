/*
Using the expression 1 << (k-1), we get a number with all bits zero, except the K'th bit. If we do bitwise AND of this expression with the number n,
any non-zero value indicates that its K'th bit set.

Example 1:
n = 16 and k = 3

00010000 &      (n = 16)
00000100        ( 1 << (3-1) )
--------
00000000        Zero value: indicates that third bit is not set in the given number (i.e, 16).

Example 2:
n = 20 and k = 5

00010100 &      (n = 20)
00010000        ( 1 << (5-1) )
--------
00010000        Non-zero value: indicates that 5th bit is set in the given number (i.e, 20).

*/

#include <iostream>
#include <bitset>
using namespace std;

bool isKthBitSet(int n, int k){
  return (n & (1 << (k-1)) != 0;
}

int main(){
  int n = 20;
  int k = 5;
  
  cout<<n<<" in Binary is "<<bitset<8>(n)<<endl;
  
  if(isKthBitSet(n,k)){
    cout<<k<<"'th bit is set"<<endl;
  }
  else{
    cout<<k<<"'th bit is not set"<<endl;
  }
  return 0;
}
