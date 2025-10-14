#include <iostream>
#include <iomanip>

using namespace std;

// function prototypes
int main();
void daysOnTrip(int& days);
void departure(double& leave);
void arrival(double& arrivalTime);
void roundTrip(double& cost);
void carRentals(double& carCost);
void milesDriven(double& miles);
void parkingFees(int days, double& allocated, double& parkCost);
void taxiFees(int days, double& taxiCost, double& allocated);
void conferenceFees(double& cost);
void lodgingFees(int days, double& lodgingFees, double& allocated);
void mealFees(double returntime, double departure, int days, double &allocated, double& runningCost);

int main()
{
    double runningTotal = 0.0, runningAllocated = 0.0, allocated = 0, fees = 0, departureTime = 0, returnTime = 0;

    int days = 0;
    daysOnTrip(days);

    departure(departureTime);

    arrival(returnTime);

    roundTrip(fees);
    runningTotal += fees;
    runningAllocated += fees;

    carRentals(fees);
    runningTotal += fees;
    runningAllocated += fees;

    milesDriven(fees);
    runningTotal += fees;
    runningAllocated += fees;

    parkingFees(days, allocated, fees);
    runningTotal += fees;
    runningAllocated += allocated;

    taxiFees(days, fees, allocated);
    runningTotal += fees;
    runningAllocated += allocated;

    conferenceFees(fees);
    runningTotal += fees;
    runningAllocated += fees;

    lodgingFees(days, fees, allocated);
    runningTotal += fees;
    runningAllocated += allocated;

    mealFees(returnTime, departureTime, days, allocated, fees);
    runningTotal += fees;
    runningAllocated += allocated;

    cout << endl << "Total Expenses: $" << runningTotal << endl;
    cout << endl << "Allowable expenses: $" << runningAllocated << endl;

    double reimb = 0;

    reimb = runningAllocated - runningTotal;

    if (reimb < 0)
    {
        cout << "You saved " << reimb * -1;
    }
    else
    {
        cout << "Amount to be reimbursed: $" << reimb;
    }

    return 0;
}

void daysOnTrip(int& days)
{
	cout << "Enter the number of days spent on trip :> ";
	cin >> days;

	while (days <= 0)
	{
		cout << "Enter the number of days spent on the trip :> ";
		cin >> days;
	}
}

void departure(double& leave)
{
	// accept a double like XX.XX
	// and make sure its >=00.00 and <= 24.00
	cout << "enter the time you are leaving in 24-hour format: ";
	cin >> leave;
	if (leave < 0 || leave > 24)
	{
		cout << "invalid input, please enter a time between 00.00 and 24.00" << endl;
		cin >> leave;
	}
}

void arrival(double& arrivalTime)
{
	// accept a double like XX.XX
	// and make sure its >=00.00 and <= 24.00

	cout << "Enter the return time (HH.MM) :> ";
	cin >> arrivalTime;

	while (arrivalTime < 0.00 && arrivalTime > 24.00)
	{
		cout << "Enter the return time (HH.MM) :> ";
		cin >> arrivalTime;
	}
}

void roundTrip(double& cost)
{
	cout << "what is the cost of your round trip airfare? ";
	cin >> cost;
	while (cost < 0)
	{
		cout << "invalid input, please enter a positive number" << endl;
		cin >> cost;
	}
}

void carRentals(double& carCost)
{
    do
    {
        cout << "Enter the amount of car rental fees :> ";
        cin >> carCost;
    } while (carCost < 0.0);
}

void milesDriven(double& miles)
{
	cout << "how many miles did you drive? ";
	cin >> miles;
	while (miles < 0)
	{
		cout << "invalid input, please enter a positive number" << endl;
		cin >> miles;
	}
}

void parkingFees(int days, double& allocated, double& parkCost)
{
    do
    {
        cout << "Enter the amount of parking fees :> ";
        cin >> parkCost;
    } while (parkCost < 0);

    allocated = days * 6;
}

void taxiFees(int days, double& taxiCost, double& allocated)
{
    do
    {
        cout << "Enter the amount of taxi fees :> ";
        cin >> taxiCost;
    } while (taxiCost < 0);

	allocated = days *10;
}

void conferenceFees(double& cost)
{
	do
	{
		cout << "Enter the fees for conference / seminars :> ";
		cin >> cost;
    } while (cost < 0.0);
}

void lodgingFees(int days, double& lodgingFees, double& allocated)
{
    allocated = days * 90;
	cout << "Enter the nightly hotel fees :> ";
	cin >> lodgingFees;
	
	while (lodgingFees <= 0)
	{
        cout << "Enter the nightly hotel fees :> ";
        cin >> lodgingFees;
	}

    lodgingFees *= days;
}

void mealFees(double returntime, double departure, int days, double& allocated, double& runningCost)
{
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
}