// A program to show an example to use switch statement
// Author: @HyGlobalHD <https://github.com/HyGlobalHD>
#include<iostream>
using namespace std;

int main() {
  string clientName; // initialize clientName with string datatype
  char clientGender; // initialize clientGender with character datatype
  
  cout << "Hello there! Please enter your name: ";
  cin >> clientName; // assign user input to clientName variable
  
  cout << endl << "Hello, " << clientName << "! Please enter your gender: ";
  cin >> clientGender; // assign user input to clientGender variable
  
  switch(clientGender) { // get the clientGender variable, and check the case that equal with it.
    case 'm':
    case 'M':
      cout << endl << "You are eligible for a slice of pizza";
      break;
    case 'w':
    case 'W':
      cout << endl << "You are eligible for a branded cosmestic";
      break;
    default:
      cout << endl << "Wrong code, forcefully close the program";
      break;
  }
  
  return 0; // indicate that the program ended succesfully
  
}
