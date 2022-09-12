/*
First thing we should be aware of in this problem statement is: "position of the ONLY SET BIT", which means that there should be no other bits should be in set mode.
Here the idea is to UNSET the Rightmost bit of the given number n and check if it zero or not. If it is non-zero, we know that there is another set bit present, and we
can conclude it as Invalid input as per the problem statement.
If it becomes Zero, then we can find the position of the only set bit by processing every bit of the number n, bit by bit Or also we can use the formula log2(n)+1.
Great. Let's check with an example then.

Example:
Let n = 16 in Binary it is : 0001 0000
We can see that the position of the rightmost set bit is 5.
FYI: we are following general counting, not from 0th indexing. But remember, while converting it to decimal, we count from LSB as 2 to the power of Zero.
So,
00010000  &         (n = 16)
00001111            (n-1 = 15)
--------
00000000

This is zero, so it is Valid input. Also, note that: "To unset the Rightmost bit of the n, we performed the n & (n-1) operation which is kind of standard procedure"

Now, we need the position of the only set bit. So, log2(16)+1 = 4+1 = 5.

Expected output:

16 in binary is 00010000
The position of the only set bit is 5

*/

#include<iostream>
#include<bitset>
#include<math.h>
using namespace std;
int positionOfSetBit(int n){
  
  if(n & (n-1)){
    cout<< "Wrong input";
    return 1;
  }
  return log2(n)+1;
}

int main(){
  int n = 16;
  cout<< n << " in Binary is " << bitset<8>(n) << endl;
  cout<< " The position of the only set bit is " << positionOfSetBit(n);
  
  return 0;
}
