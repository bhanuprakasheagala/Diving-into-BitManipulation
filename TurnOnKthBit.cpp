/*
Using the expression 1 << (k - 1), we get a number with all bits 0, except the K'th bit. If we do bitwise OR of this expression with the number n, 
(which means, n | (1 << (k-1)) operation), we get a number which has all bits the same as n except the K'th bit which will be set to 1.

Example:
n = 12 and K = 4

00001100 |        n=12
00000100          (1 << (4 - 1))
--------
00001100          Result:All bits are same as n, but the K'th bit always be 1.


*/

#include<iostream>
#include<bitset>

using namespace std;

int turnOnKthBit(int n, int k){
  return n | (1 << (k - 1));
}

int main(){
  int n = 12;
  int k = 4;
  
  cout<<n<<" in Binary is "<<bitset<8>(n)<<endl;
  cout<<"Turning On K'th bit....<<endl;
  n = turnOnKthBit(n,k);
  cout<<n<<" in Binary is "<<bitset<8>(n)<<endl;
  
  return 0;
}
