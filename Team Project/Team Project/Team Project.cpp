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
	cout << "Enter the return time (HH.MM) :> ";
	cin >> arrivalTime;

	while (arrivalTime < 0.00 && arrivalTime > 24.00)
	{
		cout << "Enter the return time (HH.MM) :> ";
		cin >> arrivalTime;
	}

	return arrivalTime;
}

double roundTrip()
{

}

double carRentals()
{
	double carCost = -1.0;
	
	while (carCost < 0.0)
	{
		cout << "Enter the amount of car rental fees :> ";
		cin >> carCost;
	}

	return carCost;
}

double milesDriven()
{

}

double parkingFees()
{
	double fees = -1.0;

	while (fees < 0.0)
	{
		cout << "Enter the amount of parking fees :> ";
		cin >> fees;
	}

	return fees;
}

double taxiFees()
{
	
}

double conferenceFees()
{
	double cost = -1;

	while (cost < 0.0)
	{
		cout << "Enter the fees for conference / seminars :> ";
		cin >> cost;
	}

	return cost;
}

double lodgingFees()
{

}

double mealFees(double arrivalTime, double departureTime, int days)
{
	int cost = 0.0, allowableTotal = 0.0, runningTotal = 0.0;

	for (int day = 0; day != days; ++day)
	{
		cout << "Day " << day << ":> ";

		if (day == 1)
		{
			if (departureTime < 7)
			{
				cout << "Enter the amount spent for breakfast: ";
				cin >> cost;
				
				while (cost < 0.0)
				{
					cout << "Enter the amount spent for breakfast: ";
					cin >> cost;
				}
				
				runningTotal + cost;
				allowableTotal + 9
			}
			if (departureTime < 12)
			{
				cout << "Enter the amount spent for lunch: ";
				cin >> cost;

				while (cost < 0.0)
				{
					cout << "Enter the amount spent for lunch: ";
					cin >> cost;
				}

				runningTotal + cost;
				allowableTotal + 12
			}
			if (departureTime < 16)
			{
				cout << "Enter the amount spent for dinner: ";
				cin >> cost;

				while (cost < 0.0)
				{
					cout << "Enter the amount spent for dinner: ";
					cin >> cost;
				}

				runningTotal + cost;
				allowableTotal + 16
			}

		if (day == days)
		{
			if (arrivalTime > 8)
			{
				cout << "Enter the amount spent for breakfast: ";
				cin >> cost;
				
				while (cost < 0.0)
				{
					cout << "Enter the amount spent for breakfast: ";
					cin >> cost;
				}
				
				runningTotal + cost;
				allowableTotal + 9
			}
			if (arrivalTime > 13)
			{
				cout << "Enter the amount spent for lunch: ";
				cin >> cost;

				while (cost < 0.0)
				{
					cout << "Enter the amount spent for lunch: ";
					cin >> cost;
				}

				runningTotal + cost;
				allowableTotal + 12
			}
			if (arrivalTime > 16)
			{
				cout << "Enter the amount spent for dinner: ";
				cin >> cost;

				while (cost < 0.0)
				{
					cout << "Enter the amount spent for dinner: ";
					cin >> cost;
				}

				runningTotal + cost;
				allowableTotal + 16
			}
			if (day == 1)
			{
				if (departureTime < 7)
				{
					cout << "Enter the amount spent for breakfast: ";
					cin >> cost;

					while (cost < 0.0)
					{
						cout << "Enter the amount spent for breakfast: ";
						cin >> cost;
					}

					runningTotal + cost;
					allowableTotal + 9
				}
				if (departureTime < 12)
				{
					cout << "Enter the amount spent for lunch: ";
					cin >> cost;

					while (cost < 0.0)
					{
						cout << "Enter the amount spent for lunch: ";
						cin >> cost;
					}

					runningTotal + cost;
					allowableTotal + 12
				}
				if (departureTime < 16)
				{
					cout << "Enter the amount spent for dinner: ";
					cin >> cost;

					while (cost < 0.0)
					{
						cout << "Enter the amount spent for dinner: ";
						cin >> cost;
					}

					runningTotal + cost;
					allowableTotal + 16
				}
		}
	}

	return runningTotal;
}