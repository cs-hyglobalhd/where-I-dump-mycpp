// Homework @ csc126 //  csc128 Jan 2018
// Author: HyGlobalHD <https://github.com/hyglobalhd>
#include <iostream>
#include <string>
using namespace std;

int main() {

	string serviceCode, customerName, customerPlate, serviceDecs;
	char tyreBrand;
	int tyreSize, tyreQuantity;
	double price;

	cout << "\t\t\t Welcome to SpeedTyre Service\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout << "Service Offer:\nTC - Tyre change\nAL - Alignment\nBL - Balancing\n";
	cout << "For tyre change we provide three types of brand which are:\n";
	cout << "B - Bridgestone\nM - Michelin\n";

	cout << "Enter customer name: ";
	getline(cin, customerName);
	cout << "Enter vehicle plate no.: ";
	getline(cin, customerPlate);
	cout << "\nEnter service code: ";
	cin >> serviceCode;
	cout << "\nEnter tyre brand: ";
	cin >> tyreBrand;
	cout << "Enter tyre size: ";
	cin >> tyreSize;
	cout << "Enter either 2 or 4 tire only to change: ";
	cin >> tyreQuantity;


	if (tyreQuantity >= 2 && tyreQuantity <= 4) {
		if (serviceCode == "TC" || serviceCode == "tc") {
			serviceDecs = "Tyre Change";
			if (tyreBrand == 'B' || tyreBrand == 'b') {
				if (tyreSize == 15) {
					price = 40 + (270 * tyreQuantity);
				}else if (tyreSize == 16) {
					price = 40 + (290 * tyreQuantity);
				}else {
					cout << "\nInvalid code.";
    return 0;
				}
			}else if (tyreBrand == 'M' || tyreBrand == 'm') {
				if (tyreSize == 15) {
					price = 40 + (320 * tyreQuantity);
				}else if (tyreSize == 16) {
					price = 40 + (345 * tyreQuantity);
				}else {
					cout << "\nInvalid code.";
    return 0;
				}
			}else {
				cout << "\nInvalid code.";
    return 0;
			}
		}else if (serviceCode == "AL" || serviceCode == "al") {
			serviceDecs = "Alignment";
			if (tyreBrand == 'B' || tyreBrand == 'b') {
				if (tyreSize == 15) {
					price = 30 + (270 * tyreQuantity);
				}else if (tyreSize == 16) {
					price = 30 + (290 * tyreQuantity);
				}
				else {
					cout << "\nInvalid code.";
    return 0;
				}
			}else if (tyreBrand == 'M' || tyreBrand == 'm') {
				if (tyreSize == 15) {
					price = 30 + (320 * tyreQuantity);
				}else if (tyreSize == 16) {
					price = 30 + (345 * tyreQuantity);
				}else {
					cout << "\nInvalid code.";
    return 0;
				}
			}else {
				cout << "\nInvalid code.";
    return 0;
			}
		}else if (serviceCode == "BL" || serviceCode == "bl") {
			serviceDecs = "Balancing";
			if (tyreBrand == 'B' || tyreBrand == 'b') {
				if (tyreSize == 15) {
					price = 35 + (270 * tyreQuantity);
				}else if (tyreSize == 16) {
					price = 35 + (290 * tyreQuantity);
				}else {
					cout << "\nInvalid code";
    return 0;
				}
			}else if (tyreBrand == 'M' || tyreBrand == 'm') {
				if (tyreSize == 15) {
					price = 35 + (320 * tyreQuantity);
				}else if (tyreSize == 16) {
					price = 35 + (345 * tyreQuantity);
				}else {
					cout << "\nInvalid code.";
    return 0;
				}
			}else {
				cout << "\nInvalid code.";
    return 0;
			}
		}else {
			cout << "\nInvalid code.";
    return 0;
		}
	}else {
		cout << "\nInvalid code.";
    return 0;
	}

	cout << "\n\n+++++++++SPEEDTYRE SERVICE RECEIPT+++++++++" << endl;
	cout << "Customer name: " << customerName << endl;
	cout << "Vechile plate no.: " << customerPlate << endl;
	cout << "Service Description:" << serviceDecs << endl;
	cout << "Total: RM" << price << endl;
	cout << "++++++++++++++++++++++++++++++++++++++++++++";

	return 0;
}
