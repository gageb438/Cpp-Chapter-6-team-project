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
	double taxiCost, taxiDays;
	cout << "Enter the number of days a taxi was used :> ";
	cin >> taxiDays;
	cout << endl << "Enter the amount of taxi fees :> ";
	cin >> taxiCost;
	cout << endl;
	taxiCost -= taxiDays *10;
	if (taxiCost <= 0)
	{
		return 0;
	}
	return taxiCost;
}

double conferenceFees()
{
	
}

double lodgingFees(int days)
{
	double lodgingFees;
	cout << "Enter the amount of lodging fees :> ";
	cin >> lodgingFees;
	cout << endl;
	lodgingFees -= days * 90;
	if (lodgingFees <= 0)
	{
		return 0;
	}
	return lodgingFees;
}

double mealFees(double arrivalTime, double departureTime)
{

}