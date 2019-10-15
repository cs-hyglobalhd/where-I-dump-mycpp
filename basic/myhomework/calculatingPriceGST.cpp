// Homework @ CSC126
// Author: HyGlobalHD <https://github.com/hyglobalhd>
#include <iostream>
#include<string>
using namespace std;

const double GST = 0.06; // declare a global constant variable with the name GST with double data type and assign the value 0.06 to it

int main() {

    string product; // declare variable name product with string data type
    int quantity; // declare variable name quantity with integer data type
    double price, priceGST, afterGST; // declare variable name price, priceGST, afterGST with double data type

    cout << "Please enter a Product Code (AA or BB): ";// prompt user to enter an intput
    cin >> product; // assign use input to variable called product

    if(product == "AA" || product == "aa") { // check if the product equals to AA or aa // continue if one of the condition are met
        cout << "Please enter the product quantities: "; // prompt user to enter an input
        cin >> quantity; // assign user input to quantity variable

        if(quantity >= 10 && quantity <= 50){ // check if quantity is more/equals to 10 AND quantity is less/equals to 50 // continue if both condition are met
            price = 2.0 * quantity; // assign 2.0*quantity to price variable
            priceGST = price* GST; // assign price*GST to priceGST variable
            afterGST = price + priceGST; // assign price+priceGST to afterGST variable
            cout << "The total GST is RM " << priceGST << ", and the price after GST is RM " << afterGST << endl; // prompt the output
        }else if(quantity >= 51 && quantity <= 100) { // check if quantity is more/equals to 51 AND quantity is less/equals to 100 // continue if both condition are met
            price = 1.5 * quantity; // assign 2.0*quantity to price variable
            priceGST = price* GST; // assign price*GST to priceGST variable
            afterGST = price + priceGST; // assign price+priceGST to afterGST variable
            cout << "The total GST is RM " << priceGST << ", and the price after GST is RM " << afterGST << endl; // prompt the output
        }else if(quantity > 100) { // check if quantity is more than 100 // continue if condition are met
            price = 1.0 * quantity; // assign 2.0*quantity to price variable
            priceGST = price* GST; // assign price*GST to priceGST variable
            afterGST = price + priceGST; // assign price+priceGST to afterGST variable
            cout << "The total GST is RM " << priceGST << ", and the price after GST is RM " << afterGST << endl; // prompt the output
        }else {
            cout << "Fails to meet the minimum quantity."; // prompt condition failed to met
        }
    }else if(product == "BB" || product == "bb") { // check is product os equals to BB or bb // continue if one of the condition are met
        cout << "Please enter the product quantities: ";
        cin >> quantity;
        if(quantity >= 20 && quantity <= 50) { // check if quantity is more/equals to 20 AND quantity is less/equals to 50 // continue if both condition are met
            price = 5.0 * quantity; // assign 2.0*quantity to price variable
            priceGST = price* GST; // assign price*GST to priceGST variable
            afterGST = price + priceGST; // assign price+priceGST to afterGST variable
            cout << "The total GST is RM " << priceGST << ", and the price after GST is RM " << afterGST << endl; // prompt the output
        }else if(quantity > 50) { // check if quantity is more than 50 // continue if condition are met
            price = 4.0 * quantity; // assign 2.0*quantity to price variable
            priceGST = price* GST; // assign price*GST to priceGST variable
            afterGST = price + priceGST; // assign price+priceGST to afterGST variable
            cout << "The total GST is RM " << priceGST << ", and the price after GST is RM " << afterGST << endl; // prompt the output
        }else {
            cout << "Fails to meet the minimum quantity."; // prompt did not met requirement
        }
    }else {
        cout << "Invalid code."; // prompt invalid code
    }

    return 0; // succesfully end

}
