// A program to show an example to use switch statement
// Author: @HyGlobalHD <https://github.com/HyGlobalHD>
#include<iostream>
#include<string>
using namespace std;

int main() {
  string clientName; // initialize clientName with string datatype
  char clientGender; // initialize clientGender with character datatype
  
  cout << "Hello there! Please enter your name: ";
  cin >> clientName; // assign user input to clientName variable
  
  cout << endl << "Hello, " << clientName << "! Please enter your gender: ";
  cin >> clientGender; // assign user input to clientGender variable
  
  switch(clientGender) {
    case 'm':
    case 'M':
      cout << emdl << "You are eligible for a slice of pizza";
      break;
    case 'w':
    case 'W':
      cout << endl << "You are eligible for a branded cosmestic";
      break;
    default:
      cout << "Wrong code, forcefully close the program";
      break;
  }
  
  return 0; // indicate that the program is succesfully run
  
}
