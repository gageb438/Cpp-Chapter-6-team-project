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

	double arrivalTime = -1.00;
	cout << "Enter the arrival time (formatted as XX.XX, 24 hour clock) :> ";
	cin >> arrivalTime;

	while (arrivalTime <= 0.00 && arrivalTime >= 24.00)
	{
		cout << "Enter the arrival time (formatted as XX.XX, 24 hour clock) :> ";
		cin >> arrivalTime;
	}

	return arrivalTime;
}

double roundTrip()
{

}

double carRentals()
{
	string carsUsed = "a";

	cout << "Did you use a rental car on the trip? (y/n) :> ";
	cin >> carsUsed;

	while (carsUsed != "Y" && carsUsed != "y" && carsUsed != "N" && carsUsed != "n")
	{
		cout << "Did you use a rental car on the trip? (y/n) :> ";
		cin >> carsUsed;
	}
}

double milesDriven()
{

}

double parkingFees()
{
	int daysFeed = -1;
	double cost = -1, total;
	const double companyPrice = 6.00;

	while (daysFeed < 0)
	{
		cout << "Enter the number of days there were parking fees for (0 for none) :> ";
		cin >> daysFeed;
	}

	if (daysFeed == 0)
	{
		return 0.0;
	}
	else
	{
		while (cost <= 0)
		{
			cout << "Enter the total cost for the parking fees :> ";
			cin >> cost;
		}

		total = cost - (daysFeed * companyPrice);

		if (total < 0.00)
		{
			return 0.00;
		}
		else
		{
			return total;
		}
	}
}

double taxiFees()
{
	
}

double conferenceFees()
{
	double cost = -1;

	while (cost < 0)
	{
		cout << "Enter the fees for conference / seminars :> ";
		cin >> cost;
	}

	return cost;
}

double lodgingFees()
{

}

double mealFees(double arrivalTime, double departureTime)
{
	double totalCost = -1.00, runningTotal = 0.0;
	const double aBreakfast = 7.00, aLunch = 12.00, aDinner = 19.00, bBreakfast = 8.00, bLunch = 13.00, bDinner = 19.00;
	double aBreakfastCost = -1, aLunchCost = -1, aDinnerCost = -1, bBreakfastCost = -1, bLunchCost = -1, bDinnerCost = -1;

	while (totalCost < 0)
	{
		if (arrivalTime < aBreakfast)
		{
			while (aBreakfastCost < 0)
			{
				cout << "Enter the cost of breakfast on the day of the arrival :> ";
				cin >> aBreakfastCost;
			}

			if (aBreakfastCost > 9)
			{ }
			runningTotal = aBreakfastCost - 9
		}
		if (arrivalTime < aLunch)
		{
			while (aLunchCost < 0)
			{
				cout << "Enter the cost of lunch on the day of the arrival :> ";
				cin >> aLunchCost;
			}
		}
		if (arrivalTime < aDinner)
		{
			while (aDinnerCost < 0)
			{
				cout << "Enter the cost of dinner on the day of the arrival :> ";
				cin >> aDinnerCost;
			}
		}
		if (departureTime < bBreakfast)
		{
			while (bBreakfastCost < 0)
			{
				cout << "Enter the cost of breakfast on the day of departure :> ";
				cin >> bBreakfastCost;
			}
		}
		if (departureTime < bLunch)
		{
			while (bLunchCost < 0)
			{
				cout << "Enter the cost of lunch on the day of departure :> ";
				cin >> bLunchCost;
			}
		}
		if (departureTime < bDinner)
		{
			while (bDinnerCost < 0)
			{
				cout << "Enter the cost of dinner on the day of departure :> ";
				cin >> bDinnerCost;
			}
		}
	}
}