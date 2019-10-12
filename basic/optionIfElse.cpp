// A program to show an example to use If-Else statement
// Author: @HyGlobalHD <https://github.com/HyGlobalHD>
#include<iostream>
#include<string>
using namespace std;

int main() {
  string clientName; // initialize clientName with string datatype
  int clientAge; // initialize clientAge with integer datatype
  
  cout << "Hello there! Please enter your name: ";
  cin >> clientName; // assign user input to clientName variable
  
  cout << endl << "Hello, " << clientName << "! Please enter your age: ";
  cin >> clientAge; // assign user input to clientAge variable
  
  if(clientAge < 18) { // indicate that if the clientAge is less than 18, continue with code
    cout << "You are underage to work with us, try again next time!";
  }else {
    cout << "You are eligible to have an interview with us!";
  }
  
  return 0; // indicate that the program is succesfully run
  
}
