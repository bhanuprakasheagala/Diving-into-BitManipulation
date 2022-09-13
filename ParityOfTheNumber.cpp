/*
"Parity" means total number of 1s in a Binary number. 
Odd Parity(1)  : An odd number of 1s.
Even Parity(0) : An Even Number of 1s.
Use: Parity bits are often used as a simple means of error detection as digital data is transmitted and received.

Approach: There are more than one way. Here is one of the way we can do

TURN OFF the Rightmost Set bit of the given number one by one and count the parity. The following code uses an approach like Brian Kernighan's bit counting.
The time it takes is proportional to the total number of bits set.

Brian Kernighan's Bit counting : https://www.techiedelight.com/brian-kernighans-algorithm-count-set-bits-integer/

*/

#include<iostream>
#include<bitset>

using namespace std;

bool findParity(unsigned n){
  bool parity = false;
  
  //run till `n` becomes zero
  while(n){
    parity = !parity;    //Invert the parity flag
    n = n & (n-1);       // Turn off the rightmost set bit
  }
  
  return parity;
}

int main(){
  unsigned n = 31;
  cout << n << " in Binary is " << bitset<8>(n) << endl;
  
  if(findParity(n)){
    cout << "The Parity of " << n << " is Odd";
  }
  else{
    cout << "The Parity of " << n << "is Even";
  }
  
  return 0;
}

/*
Expected output:
31 in Binary is 00011111
The Parity of 31 is Odd
*/
