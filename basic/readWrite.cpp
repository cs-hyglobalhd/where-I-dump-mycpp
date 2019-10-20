// An example program to ( create / read / write ) a file/data
// Author: HyGlobalHD <https://github.com/hyglobalhd>
#include <iostream>
#include <string>
#include <fstream> // this library must be included to read,write,create file
using namespace std;

void readWrite(string str); // new function must be declare first here

int main() {
    cout<<"\t\t\tFile Reading/Writing Program: \n";
    
    readWrite("\nFirst attempt!\n");
    readWrite("\nSecond attempt!\n");
    readWrite("\Third attempt!\n");

    cout<<"\nPress <enter> to exit console: "; // prompt to get the user to press enter
    cin.get(); // continue if true ( this is to get the key enter )
    return 0; // end program
}

void readWrite(string str) {
    cout<<str;
    fstream file;
    file.open("file.txt", ios::out|ios::in);//Attempt to open file.
    if(file.is_open()) { // check if the file is available and can be opened
        cout<<"Reading...\n";
        string temp; // assign file's content to temp variable
        while(getline(file,temp) && cout<<temp<<'\n');//Print data in file!
    }else { // if not, create the file, and add a content it it
        cout<<"Writing...\n";
        file.open("file.txt", ios::out|ios::in|ios::trunc); //TRUNCATING to make new file!
        file<<"Hello World!\nThis is a string!\nThis is a third Line!!"; // Line that write the data
    }
    file.close();//File must be properly closed if opened! Else issues may arise.
}
