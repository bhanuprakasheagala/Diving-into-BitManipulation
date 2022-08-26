/*
Using the expression ~ (1 << (k-1)), we get a number with all its bits set, except the k'th bit. If we do a bitwise AND of this expression with the given number n,
we get a number which has all bits the same as n except the k'th bit which will be set to 0.

Example:
n = 12 and
k = 3

12                          00001100  &
~(1 << (3-1))               11111011
                          -----------
Result = 8                  00001000
 
 Here we can see that in the Result, all bits are same as n(here, n = 12) except third bit(Remember, We count bits from right to left).                            
 
*/

#include<iostream>
#include<bitset>

using namespace std;

int turnOffKthBit(int n, int k){
  return n & ~(1 << (k - 1));
}

int main(){
  int n = 12;
  int k = 3;
  
  //lets first convert into binar and print the binary to the screen
  cout<<n<<" in Binary is "<<bitset<8>(n)<<endl;
  cout<<"Turning K'th bit off...\n"<<endl;
  n = turnOffKthBit(n,k);
  cout<<n<<" in Binary is "<<bitset<8>(n)<<endl;
  
  return 0;
}

/*
Expected output:
12 in Binary is 00001100
Turning K’th bit off
8 in Binary is 00001000
*/
