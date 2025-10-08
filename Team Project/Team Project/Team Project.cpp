#include <iostream>
#include <iomanip>

using namespace std;

// function prototypes
int main();
int daysOnTrip();
double departure();
double arrival();
double roundTrip();
double carRentals();
double milesDriven();
double parkingFees();
double taxiFees();
double conferenceFees();
double lodgingFees();
double mealFees(double arrivalTime, double departureTime);

int main()
{

}

int daysOnTrip()
{
	int days;
	
	cout << "Enter the number of days spent on trip :> ";
	cin >> days;

	while (days <= 0)
	{
		cout << "Enter the number of days spent on the trip :> ";
		cin >> days;
	}

	return days;
}

double departure()
{
	// accept a double like XX.XX
	// and make sure its >=00.00 and <= 24.00
}

double arrival()
{
	// accept a double like XX.XX
	// and make sure its >=00.00 and <= 24.00
}

double roundTrip()
{

}

double carRentals()
{
	
}

double milesDriven()
{

}

double parkingFees()
{

}

double taxiFees()
{
	
}

double conferenceFees()
{
	
}

double lodgingFees()
{

}

double mealFees(double arrivalTime, double departureTime)
{

}