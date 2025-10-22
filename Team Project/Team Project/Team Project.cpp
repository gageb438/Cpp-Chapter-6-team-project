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

    fees = 0.0;
    carRentals(fees);
    runningTotal += fees;
    runningAllocated += fees;

    fees = 0.0;
    milesDriven(fees);
    runningTotal += fees;
    runningAllocated += fees;

    fees = 0.0;
    parkingFees(days, allocated, fees);
    runningTotal += fees;
    runningAllocated += allocated;

    fees = 0.0;
    allocated = 0.0;
    taxiFees(days, fees, allocated);
    runningTotal += fees;
    runningAllocated += allocated;

    fees = 0.0;
    allocated = 0.0;
    conferenceFees(fees);
    runningTotal += fees;
    runningAllocated += fees;

    fees = 0.0;
    lodgingFees(days, fees, allocated);
    runningTotal += fees;
    runningAllocated += allocated;

    allocated = 0.0;
    fees = 0.0;
    mealFees(returnTime, departureTime, days, allocated, fees);
    runningTotal += fees;
    runningAllocated += allocated;

    cout << fixed << showpoint << setprecision(2);

    cout << endl << "Total Expenses: $" << runningTotal << endl;
    cout << endl << "Allowable expenses: $" << runningAllocated << endl;

    double reimb = 0;

    reimb = runningAllocated - runningTotal;

    if (reimb < 0)
    {
        cout << "You saved $" << reimb * -1;
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
	while (leave < 0.0 || leave > 24.0)
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

	while (arrivalTime < 0.00 || arrivalTime > 24.00)
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
    double milesD;
	cout << "how many miles did you drive? ";
	cin >> milesD;
	while (milesD < 0)
	{
		cout << "invalid input, please enter a positive number" << endl;
		cin >> milesD;
	}

    miles = milesD * .27;
}

void parkingFees(int days, double& allocated, double& parkCost)
{
    do
    {
        cout << "Enter the amount of parking fees :> ";
        cin >> parkCost;
    } while (parkCost < 0);

    // allowed up to $6 per day; allowable is the lesser of actual fees and the cap
    double cap = days * 6.0;
    allocated = (parkCost < cap) ? parkCost : cap;
}

void taxiFees(int days, double& taxiCost, double& allocated)
{
    do
    {
        cout << "Enter the amount of taxi fees :> ";
        cin >> taxiCost;
    } while (taxiCost < 0);

    // allowed up to $10 per day; allowable is the lesser of actual fees and the cap
	 double cap = days * 10.0;
     if (taxiCost < cap)
     {
         allocated = taxiCost;
     }
     else
     {
		 allocated = cap;
     }
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
    double nightly;
	cout << "Enter the nightly hotel fees :> ";
	cin >> nightly;
	
	while (nightly <= 0)
	{
        cout << "Enter the nightly hotel fees :> ";
        cin >> nightly;
	}

    // actual total lodging cost
    lodgingFees = nightly * (days - 1);

    // company allows up to $90 per night
    double cap = 90.0 * (days - 1);
    if (lodgingFees < cap)
    {
        allocated = lodgingFees;
    }
    else
    {
		allocated = cap;
    }
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
            else
            {
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
            if (returntime > 13.00)
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
            if (returntime > 19.00)
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