// An example of program that use for-Loop
// Author: HyGlobalHD <https://github.com/hyglobalhd>
#include<iostream>
using namespace std;

int main() {
  int num; // declare variable num with integer data type
  
  cout << "Please enter an integer: "; // print sentences to screen
  cin >> num; // assign user input to num variable
  
  for(int i = 0; i < num; i++) { // for loop
    // explanation: declare cariable i with integer datatype
    // assign value 0 to variable num
    // using LOGIC parameters, check if variable i is less than variable num
    // if true, continue next statement of i++
    // i++, means i = i + 1;
    
    cout << i << endl; // print the variable i, until the loop finished //LOGIC is false
  }
  
  return 0; // indicated that the program end successfull
  
}
