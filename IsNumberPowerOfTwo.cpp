/*
We know that the expression n & (n - 1) will unset the rightmost set bit of a number n.
If a number is power of (Ex: 1,2,4,8,16,32,64,....etc.), If we observe the Binary form of all of these, at only one bit position there is bit 1, remaining all 
the positions, only zeros. Let's take the examples below:
1 -> 2 power 0 -> 0000 0001
2 -> 2 power 1 -> 0000 0010
4 -> 2 power 2 -> 0000 0100
.....
64 -> 2 power 6 -> 0100 0000.

Hope you got my point. 
So, any number n which is power of 2, if we perform bitwise AND operation with (n - 1), It returns Zero.
Now we can find whether a given number is power of 2 or not, without using any Branching or Loop concepts.

*/

#include <iostream>
#include <bitset>

using namespace std;

int main(){
  int n;
  cin>>n;
  cout<<n<<" in Binary is: "<<bitset<8>(n)<<endl;
  n = n & (n - 1);
  if(n){
    cout<<"The given number is not Power of 2."<<endl;
  }
  else{
    cout<<"The given numebr is Power of 2."<<endl;
  }
  
  return 0;
}

/*Expected output: Online GDB
Input:
3
Output:
3 in Binary is: 00000011
The given number is not Power of 2.

Input:
64
Output:
64 in Binary is: 01000000
The given numebr is Power of 2.
*/
