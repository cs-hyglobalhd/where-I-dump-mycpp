#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

double Price(char categories, int quantity) {
	double totalPrice;
	switch(categories) {
		case 'C':
		case 'c':
			totalPrice = 45.00 * quantity;
			break;
		case 'A':
		case 'a':
			totalPrice = 5.00 * quantity;
			break;
		default:
			break;
	}
	return totalPrice;
}

double Discount(char categories, double totalPrice) {
	double PriceDisc;
	switch(categories) {
		case 'C':
		case 'c':
			PriceDisc = totalPrice * 0.2;
			break;
		case 'A':
		case 'a':
			PriceDisc = totalPrice * 0.05;
			break;
		default:
			break;
	}
	return PriceDisc;
}

int main() {
	int quant;
	char categ, request;
	double price, priceAfter;
	
	cout << "Do you want to start the program?\n(Press Y for yes, Press N to terminated the program): ";
	cin >> request;
	while(tolower(request) != 'y' && tolower(request) != 'n') {
		cout << endl << "Invalid input! Please enter correctly!" << endl;
		cout << "Do you want to start the program?\n(Press Y for yes, Press N to terminated the program): ";
		cin >> request;
		}
	
	while(tolower(request) == 'y') {
		cout << endl;
		cout << "Categories Available: C - Children, A - Adults. Please choose either C or A." << endl;
		cout << "Please enter the categories requested: ";
		cin >> categ;
		cout << "Please enter the quantity needed: ";
		cin >> quant;
		
		price = Price(categ, quant);
		priceAfter = price - Discount(categ, price);
		
		cout << endl;
		cout << setprecision(2) << fixed;
		cout << "************** RECEIPT **************" << endl;
		cout << "Quantity\t\tPrice" << endl;
		cout << "---------\t\t---------" << endl;
		cout << quant << "\t\t\t" << "RM" << priceAfter << endl;
		cout << endl;
		cout << "Thank you. Please come again." << endl;
		cout << "*************************************";
		
		cout << endl << endl;
		cout << "Do you want to continue the program?\n(Press Y for yes, Press N to terminated the program): ";
		cin >> request;
		if(tolower(request) == 'n') continue; // end the looping
		while(tolower(request) != 'y' && tolower(request) != 'n') { // incase of an invalid input given
			cout << endl << "Invalid input! Please enter correctly!" << endl;
			cout << "Do you want to continue the program?\n(Press Y for yes, Press N to terminated the program): ";
			cin >> request;
		}
	}
	cout << endl << "Program terminated.";
	return 0;
}
