#include <iostream>

using namespace std;

const double pricePerSmallRoom = {25.0};
const double pricePerLargeRoom = {35.0};
const double taxRate = {0.06};
const int daysValid = {30};

/*
    This function calculates the cost of Frank's Cleaning Services based on 4 parameters, as well as outputting optional data.

    Parameters:
    
    numSmallRoom takes in the number of small rooms wanting to be cleaned by the customer.
    numLargeRoom takes in the number of large roooms wanting to be cleaned by the customer.
    returnTaxCost is a boolean that when true returns the cost with taxes, while if false either spits out the total tax or
    returns the coxAmount is an optional boolean that if true will return the amount of tax that is applied to the purchase of Frank's Cleaning Service.
*/
double calculateCost(double numSmallRoom, double numLargeRoom)
{
    


    double totalSmallRoomCost = pricePerSmallRoom * numSmallRoom;
    double totalLargeRoomCost = pricePerLargeRoom * numLargeRoom;
    double totalCostWithoutTax = totalSmallRoomCost + totalLargeRoomCost;

    
    return totalCostWithoutTax;
}

/*
    This function calculates the cost of Frank's Cleaning Services based on 4 parameters, as well as outputting optional data.

    Parameters:
    
    numSmallRoom takes in the number of small rooms wanting to be cleaned by the customer.
    numLargeRoom takes in the number of large roooms wanting to be cleaned by the customer.
    returnTaxCost is an optional boolean that when true returns the cost with taxes, while if false either spits out the total tax or
    returns the cost without taxes depending on the next parameter
    returnTaxAmount is an optional boolean that if true will return the amount of tax that is applied to the purchase of Frank's Cleaning Service.
*/
double calculateCost(double numSmallRoom, double numLargeRoom, bool returnTaxCost)
{
    double totalSmallRoomCost = pricePerSmallRoom * numSmallRoom;
    double totalLargeRoomCost = pricePerLargeRoom * numLargeRoom;
    double totalCostWithoutTax = totalSmallRoomCost + totalLargeRoomCost;

    if(returnTaxCost)
    {
        double taxAmount = totalCostWithoutTax * taxRate;
        double totalCostWithTax = totalCostWithoutTax + taxAmount;
        return totalCostWithTax;
    }
    if(!returnTaxCost)
    {
        return totalCostWithoutTax;
    }
}

/*
    This function calculates the cost of Frank's Cleaning Services based on 4 parameters, as well as outputting optional data.

    Parameters:
    
    numSmallRoom takes in the number of small rooms wanting to be cleaned by the customer.
    numLargeRoom takes in the number of large roooms wanting to be cleaned by the customer.
    returnTaxCost is an optional boolean that when true returns the cost with taxes, while if false either spits out the total tax or
    returns the cost without taxes depending on the next parameter
    returnTaxAmount is an optional boolean that if true will return the amount of tax that is applied to the purchase of Frank's Cleaning Service.
*/
double calculateCost(double numSmallRoom, double numLargeRoom, bool returnTaxCost ,bool returnTaxAmount)
{
    double totalSmallRoomCost = pricePerSmallRoom * numSmallRoom;
    double totalLargeRoomCost = pricePerLargeRoom * numLargeRoom;
    double totalCostWithoutTax = totalSmallRoomCost + totalLargeRoomCost;

    if(returnTaxAmount)
    {
        double taxAmount = totalCostWithoutTax * taxRate;
        return taxAmount;
    }
    if(returnTaxCost)
    {
        double taxAmount = totalCostWithoutTax * taxRate;
        double totalCostWithTax = totalCostWithoutTax + taxAmount;
        return totalCostWithTax;
    }
    else if(!returnTaxAmount && !returnTaxCost)
    {
        return totalCostWithoutTax;
    }
}


int main()
{


    double numSmallRoom;
    double numLargeRoom;

    cout << "Welcome to Frank's Cleaning Service!" << endl;
    cout << "====================================" << endl;
    cout << "\nNumber of Small Rooms: ";
    cin >> numSmallRoom;
    cout << "\n\nNumber of Large Rooms: ";
    cin >> numLargeRoom;
    cout << "Price per small room: $" << pricePerSmallRoom << endl;
    cout << "Price per large room: $" << pricePerLargeRoom << endl;
    cout << "Cost: $" << calculateCost(numSmallRoom, numLargeRoom) << endl;
    cout << "Tax: $" << calculateCost(numSmallRoom, numLargeRoom, false, true) << endl;
    cout << "=========================" << endl;
    cout << "Total Estimate: $" << calculateCost(numSmallRoom, numLargeRoom, true) << endl;
    cout << "This estimate is valid for " << daysValid << " days.";

    return 0;
}


