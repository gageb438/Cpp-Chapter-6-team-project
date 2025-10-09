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
	
}

double departure()
{
	double leave;
	string ampm;
	// accept a double like XX.XX
	// and make sure its >=00.00 and <= 24.00
	cout << "enter the time you are leaving in 24-hour format: ";
	cin >> leave;
	if (leave < 0 || leave > 24)
	{
		cout << "invalid input, please enter a time between 00.00 and 24.00" << endl;
		cin >> leave;
	}
	return leave;
}

double arrival()
{
	// accept a double like XX.XX
	// and make sure its >=00.00 and <= 24.00
}

double roundTrip()
{
	cout << "what is the cost of your round trip airfare? ";
	double cost;
	cin >> cost;
	if (cost < 0)
	{
		cout << "invalid input, please enter a positive number" << endl;
		cin >> cost;
	}
	return cost;
}

double carRentals()
{
	
}

double milesDriven()
{
	cout << "how many miles did you drive? ";
	double miles;
	cin >> miles;
	if (miles < 0)
	{
		cout << "invalid input, please enter a positive number" << endl;
		cin >> miles;
	}
	return miles * 0.27;
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