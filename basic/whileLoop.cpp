// A program that shows an example to use while-loop
// Author: HyGlobalHD <https://github.com/HyGlobalHD>
#include<iostream>
using namespace std;

int main() {

  int num, num2; // declare num and num2 with integer data type
  cout << "Please enter an interger: "; // print
  cin >> num; // assign user input to variable num
  
  num2 = num + 10; // assign num+10 to num2
  
  while(num2 > num) { // looping when the statement is true based on the LOGIC statement
    cout << endl << num;
    num++; // increase the variable num by 1 // a must so that the looping will end
  }
  
  return 0; // idicated that the program end successfull
  
}
