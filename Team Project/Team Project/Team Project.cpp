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
double mealFees(double arrivalTime, double departureTime, int days);

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

double mealFees(double returntime, double departure, int days)
{
    double allocated = 0.0;
    double runningCost = 0.0;
    double currentCost = 0.0;

    for (int day = 1; day <= days; day++)
    {
        cout << "Day " << day << ": " << endl;

        if (day == 1)
        {
            if (departure > 18.00)
            {
                cout << "No meals allowed due to departure after 6 pm.";
            }
            if (departure < 7.00)
            {
                cout << "Enter the amount spent for breakfast: ";
                cin >> currentCost;

                while (currentCost < 0)
                {
                    cout << "Enter the amount spent for breakfast: ";
                    cin >> currentCost;
                }

                runningCost += currentCost;
                allocated += 9;
            }
            if (departure < 12.00)
            {
                cout << "Enter the amount spent for lunch: ";
                cin >> currentCost;

                while (currentCost < 0)
                {
                    cout << "Enter the amount spent for lunch: ";
                    cin >> currentCost;
                }

                runningCost += currentCost;
                allocated += 12;
            }
            if (departure < 18.00)
            {
                cout << "Enter the amount spent for dinner: ";
                cin >> currentCost;

                while (currentCost < 0)
                {
                    cout << "Enter the amount spent for dinner: ";
                    cin >> currentCost;
                }

                runningCost += currentCost;
                allocated += 16;
            }
        }
        else if (day == days)
        {
            if (returntime < 8.00)
            {
                cout << "No meals allowed due to arrival before 8 am.";
            }
            if (returntime > 8.00)
            {
                cout << "Enter the amount spent for breakfast: ";
                cin >> currentCost;

                while (currentCost < 0)
                {
                    cout << "Enter the amount spent for breakfast: ";
                    cin >> currentCost;
                }

                runningCost += currentCost;
                allocated += 9;
            }
            if (departure > 13.00)
            {
                cout << "Enter the amount spent for lunch: ";
                cin >> currentCost;

                while (currentCost < 0)
                {
                    cout << "Enter the amount spent for lunch: ";
                    cin >> currentCost;
                }

                runningCost += currentCost;
                allocated += 12;
            }
            if (departure > 19.00)
            {
                cout << "Enter the amount spent for dinner: ";
                cin >> currentCost;

                while (currentCost < 0)
                {
                    cout << "Enter the amount spent for dinner: ";
                    cin >> currentCost;
                }

                runningCost += currentCost;
                allocated += 16;
            }
        }
        else
        {
            cout << "Enter the amount spent for breakfast: ";
            cin >> currentCost;

            while (currentCost < 0)
            {
                cout << "Enter the amount spent for breakfast: ";
                cin >> currentCost;
            }

            runningCost += currentCost;
            allocated += 9;

            cout << "Enter the amount spent for lunch: ";
            cin >> currentCost;

            while (currentCost < 0)
            {
                cout << "Enter the amount spent for lunch: ";
                cin >> currentCost;
            }

            runningCost += currentCost;
            allocated += 12;

            cout << "Enter the amount spent for dinner: ";
            cin >> currentCost;

            while (currentCost < 0)
            {
                cout << "Enter the amount spent for dinner: ";
                cin >> currentCost;
            }

            runningCost += currentCost;
            allocated += 16;
        }
    }

    return runningCost, allocated;

}