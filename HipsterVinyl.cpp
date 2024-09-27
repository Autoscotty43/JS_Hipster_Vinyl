#include <iostream>
#include <iomanip>

using namespace std;

// Main Configuration
int main() {
    string customerName;
    double distance, recordCost, deliveryCost, recordCostWithTax, totalCost;
    const double TAX_RATE = 0.14;
    const double DELIVERY_RATE_PER_KM = 15.0;

    // Output Main Title
    cout << "Hipster's Local Vinyl Records - Customer Order Details\n\n";

    // Participant Input
    cout << "Enter the customer's name: ";
    getline(cin, customerName);

    cout << "Enter the distance in kilometers for delivery: ";
    cin >> distance;

    cout << "Enter the cost of records purchased: ";
    cin >> recordCost;

    // Calculations
    deliveryCost = distance * DELIVERY_RATE_PER_KM;
    recordCostWithTax = recordCost + (recordCost * TAX_RATE);
    totalCost = deliveryCost + recordCostWithTax;

    // Output Calculations
    cout << fixed << setprecision(2);
    cout << "\nPurchase summary for " << customerName << endl; // Purchase Summary
    cout << "Delivery Cost  : $" << setw(8) << deliveryCost << endl; // Delivery Cost
    cout << "Purchase Cost  : $" << setw(8) << recordCostWithTax << endl; // Purchase Cost
    cout << "Total Cost     : $" << setw(8) << totalCost << endl; // Total Cost

    return 0;
}

