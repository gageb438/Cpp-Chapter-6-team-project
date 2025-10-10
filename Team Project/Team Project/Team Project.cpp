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
double parkingFees(int days);
double taxiFees(int days);
double conferenceFees();
double lodgingFees(int days);
double mealFees(double arrivalTime, double departureTime, int days);

int main()
{
    double runningTotal = 0.0, runningAllocated = 0.0, allocated, fees, departureTime, returnTime;

    int days = daysOnTrip();

    departureTime = departure();
    returnTime = arrival();

    fees = roundTrip();
    runningTotal += fees;
    runningAllocated += fees;

    fees = carRentals();
    runningTotal += fees;
    runningAllocated += fees;

    fees = milesDriven();
    runningTotal += fees;
    runningAllocated += fees;

    fees, allocated = parkingFees(days);
    runningTotal += fees;
    runningAllocated += allocated;

    fees, allocated = taxiFees(days);
    runningTotal += fees;
    runningAllocated += allocated;

    fees = conferenceFees();
    runningTotal += fees;
    runningAllocated += fees;

    fees, allocated = lodgingFees(days);
    runningTotal += fees;
    runningAllocated += allocated;

    fees, allocated = mealFees(returnTime, departureTime, days);
    runningTotal += fees;
    runningAllocated += allocated;

    cout << "Total expenses: " << runningTotal << endl;;
    cout << "Allowable expenses: " << runningAllocated << endl;;
    return 0;
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

double parkingFees(int days)
{
	double parkCost = -1.0, allocated = 0.0;
    while (parkCost < 0)
    {
        cout << "Enter the amount of parking fees :> ";
        cin >> parkCost;
    }
    allocated = days * 6;
    if (parkCost <= 0)
    {
        return 0, allocated;
    }
    return parkCost, allocated;
}

double taxiFees(int days)
{
	double taxiCost = -1.0, allocated = 0;
    while (taxiCost < 0)
    {
        cout << "Enter the amount of taxi fees :> ";
        cin >> taxiCost;
    }
	allocated = days *10;
	if (taxiCost <= 0)
	{
		return 0, allocated;
	}
	return taxiCost, allocated;
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

double lodgingFees(int days)
{
	double lodgingFees;
    double allocated = days * 90;
	cout << "Enter the amount of lodging fees :> ";
	cin >> lodgingFees;
	
	while (lodgingFees <= 0)
	{
        cout << "Enter the amount of lodging fees :> ";
        cin >> lodgingFees;
	}

	return lodgingFees, allocated;
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