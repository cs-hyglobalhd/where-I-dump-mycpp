// Homework @ csc126 //  csc128 Jan 2018
// Author: HyGlobalHD <https://github.com/hyglobalhd>
#include <iostream>
#include <string>
using namespace std;

int main() {

    string serviceCode, tyreBrand, customerName, customerPlate;
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

    if(tyreQuantity >= 2 && tyreQuantity <= 4) {
        if(serviceCode == "TC") {
            if(tyreBrand == "B") {
                if(tyreSize == 15) {
                    cout << "\n\n+++++++++SPEEDTYRE SERVICE RECEIPT+++++++++" << endl;
                    cout << "Customer name: " << customerName << endl;
                    cout << "Vechile plate no.: " << customerPlate << endl;
                    cout << "Service Description: Tyre Change" << endl;
                    price = 40 + (270 * tyreQuantity);
                    cout << "Total: RM" << price << endl;
                    cout << "++++++++++++++++++++++++++++++++++++++++++++";
                }else if(tyreSize == 16) {
                    cout << "\n\n+++++++++SPEEDTYRE SERVICE RECEIPT+++++++++" << endl;
                    cout << "Customer name: " << customerName << endl;
                    cout << "Vechile plate no.: " << customerPlate << endl;
                    cout << "Service Description: Tyre Change" << endl;
                    price = 40 + (290 * tyreQuantity);
                    cout << "Total: RM" << price << endl;
                    cout << "++++++++++++++++++++++++++++++++++++++++++++";
                }else {
                    cout << "\nInvalid code.";
                }
            }else if(tyreBrand == "M") {
                if(tyreSize == 15) {
                    cout << "\n\n+++++++++SPEEDTYRE SERVICE RECEIPT+++++++++" << endl;
                    cout << "Customer name: " << customerName << endl;
                    cout << "Vechile plate no.: " << customerPlate << endl;
                    cout << "Service Description: Tyre Change" << endl;
                    price = 40 + (320 * tyreQuantity);
                    cout << "Total: RM" << price << endl;
                    cout << "++++++++++++++++++++++++++++++++++++++++++++";
                }else if(tyreSize == 16) {
                    cout << "\n\n+++++++++SPEEDTYRE SERVICE RECEIPT+++++++++" << endl;
                    cout << "Customer name: " << customerName << endl;
                    cout << "Vechile plate no.: " << customerPlate << endl;
                    cout << "Service Description: Tyre Change" << endl;
                    price = 40 + (345 * tyreQuantity);
                    cout << "Total: RM" << price << endl;
                    cout << "++++++++++++++++++++++++++++++++++++++++++++";
                }else {
                    cout << "\nInvalid code.";
                }
            }else {
                cout << "\nInvalid code.";
            }
        }else if(serviceCode == "AL") {
            if(tyreBrand == "B") {
                if(tyreSize == 15) {
                    cout << "\n\n+++++++++SPEEDTYRE SERVICE RECEIPT+++++++++" << endl;
                    cout << "Customer name: " << customerName << endl;
                    cout << "Vechile plate no.: " << customerPlate << endl;
                    cout << "Service Description: Alignment" << endl;
                    price = 30 + (270 * tyreQuantity);
                    cout << "Total: RM" << price << endl;
                    cout << "++++++++++++++++++++++++++++++++++++++++++++";
                }else if(tyreSize == 16) {
                    cout << "\n\n+++++++++SPEEDTYRE SERVICE RECEIPT+++++++++" << endl;
                    cout << "Customer name: " << customerName << endl;
                    cout << "Vechile plate no.: " << customerPlate << endl;
                    cout << "Service Description: Alignment" << endl;
                    price = 30 + (290 * tyreQuantity);
                    cout << "Total: RM" << price << endl;
                    cout << "++++++++++++++++++++++++++++++++++++++++++++";
                }else {
                    cout << "\nInvalid code.";
                }
            }else if(tyreBrand == "M") {
                if(tyreSize == 15) {
                    cout << "\n\n+++++++++SPEEDTYRE SERVICE RECEIPT+++++++++" << endl;
                    cout << "Customer name: " << customerName << endl;
                    cout << "Vechile plate no.: " << customerPlate << endl;
                    cout << "Service Description: Alignment" << endl;
                    price = 30 + (320 * tyreQuantity);
                    cout << "Total: RM" << price << endl;
                    cout << "++++++++++++++++++++++++++++++++++++++++++++";
                }else if(tyreSize == 16) {
                    cout << "\n\n+++++++++SPEEDTYRE SERVICE RECEIPT+++++++++" << endl;
                    cout << "Customer name: " << customerName << endl;
                    cout << "Vechile plate no.: " << customerPlate << endl;
                    cout << "Service Description: Alignment" << endl;
                    price = 30 + (345 * tyreQuantity);
                    cout << "Total: RM" << price << endl;
                    cout << "++++++++++++++++++++++++++++++++++++++++++++";
                }else {
                    cout << "\nInvalid code.";
                }
            }else {
                cout << "\nInvalid code.";
            }
        }else if(serviceCode == "BL") {
            if(tyreBrand == "B") {
                if(tyreSize == 15) {
                    cout << "\n\n+++++++++SPEEDTYRE SERVICE RECEIPT+++++++++" << endl;
                    cout << "Customer name: " << customerName << endl;
                    cout << "Vechile plate no.: " << customerPlate << endl;
                    cout << "Service Description: Balancing" << endl;
                    price = 35 + (270 * tyreQuantity);
                    cout << "Total: RM" << price << endl;
                    cout << "++++++++++++++++++++++++++++++++++++++++++++";
                }else if(tyreSize == 16) {
                    cout << "\n\n+++++++++SPEEDTYRE SERVICE RECEIPT+++++++++" << endl;
                    cout << "Customer name: " << customerName << endl;
                    cout << "Vechile plate no.: " << customerPlate << endl;
                    cout << "Service Description: Balancing" << endl;
                    price = 35 + (290 * tyreQuantity);
                    cout << "Total: RM" << price << endl;
                    cout << "++++++++++++++++++++++++++++++++++++++++++++";
                }else {
                    cout << "\nInvalid code";
                }
            }else if(tyreBrand == "M") {
                if(tyreSize == 15) {
                    cout << "\n\n+++++++++SPEEDTYRE SERVICE RECEIPT+++++++++" << endl;
                    cout << "Customer name: " << customerName << endl;
                    cout << "Vechile plate no.: " << customerPlate << endl;
                    cout << "Service Description: Balancing" << endl;
                    price = 35 + (320 * tyreQuantity);
                    cout << "Total: RM" << price << endl;
                    cout << "++++++++++++++++++++++++++++++++++++++++++++";
                }else if(tyreSize == 16) {
                    cout << "\n\n+++++++++SPEEDTYRE SERVICE RECEIPT+++++++++" << endl;
                    cout << "Customer name: " << customerName << endl;
                    cout << "Vechile plate no.: " << customerPlate << endl;
                    cout << "Service Description: Balancing" << endl;
                    price = 35 + (345 * tyreQuantity);
                    cout << "Total: RM" << price << endl;
                    cout << "++++++++++++++++++++++++++++++++++++++++++++";
                }else {
                    cout << "\nInvalid code.";
                }
            }else {
                cout << "\nInvalid code.";
            }
        }else {
            cout << "\nInvalid code.";
        }
    }else {
        cout << "\nInvalid code.";
    }

    return 0;
}
