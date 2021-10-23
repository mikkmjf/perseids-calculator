#include "stdafx.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <array>
#include <vector>

using namespace std;

// procedure Welcome
void Welcome()
{
	cout << "=================================" << endl << endl; // styling
	cout << "Welcome to the Perseid Analitycs" << endl << endl; // title of program
	cout << "=================================" << endl << endl; // styling
}

// procedure Menu
void Menu()
{
	// options for user to choose
	cout << "1. Request observer name " << endl; // text information
	cout << "2. Total perseids seen per observer " << endl; // text information
	cout << "3. Total perseids overall " << endl; // text information
	cout << "4. Difference in perseids per hour " << endl; // text information
	cout << "5. Average perseids per hour " << endl; // text information
	cout << "6. Difference of perseids overall " << endl; // text information
	cout << "7. Average of perseids overall " << endl; // text information
	cout << "8. Average of perseids per minute per hour " << endl; // text information
	cout << "9. Average of perseids per minute overall " << endl; // text information
	cout << "10. Largest amount of perseids seen " << endl; // text information
	cout << "11. Range of perseids seen " << endl; // text information
	cout << "12. Mean of perseids seen " << endl; // text information
	cout << "13. Exit the application " << endl; // text information
}

// function Total Perseids per person
int TotalPerPerson(int iPerseidsHour[2][3])
{
	int iResult = 0;

	for (int iCount = 0; iCount < 2; iCount++)
	{
		iResult = iPerseidsHour[iCount][0] + iPerseidsHour[iCount][1] + iPerseidsHour[iCount][2];
	}
	return iResult;
}

// function Total Perseids Overall
int TotalPerseidsOverall(int iPerseidsHour[2][3])
{

	int iResult = 0;

	for (int iCount = 0; iCount < 2; iCount++)
	{
		int iTotal[2];
		int iTotal1 = 0;
		int iTotal2 = 0;
		/*iTotal1 = iPerseidsHour[0][0] + iPerseidsHour[0][1] + iPerseidsHour[0][2];

		iTotal2 = iPerseidsHour[1][0] + iPerseidsHour[1][1] + iPerseidsHour[1][2];

		iResult = iTotal1 + iTotal2;*/

		iTotal[iCount] = iPerseidsHour[iCount][0] + iPerseidsHour[iCount][1] + iPerseidsHour[iCount][2];

		iResult += iTotal[iCount];
		}

	return iResult;
}

int DifferencePerHour(int iPerseidsHour[2][3])
{

	int iResult = 0;
	int iLargest = 0;
	int iSmallest = 0;

	for (int iCount = 0; iCount < 2; iCount++)
	{

		if (iPerseidsHour[iCount][0] > iPerseidsHour[iCount][1] && iPerseidsHour[iCount][0] > iPerseidsHour[iCount][2])
		{
			iLargest = iPerseidsHour[iCount][0];
		}
		else if (iPerseidsHour[iCount][1] > iPerseidsHour[iCount][0] && iPerseidsHour[iCount][1] > iPerseidsHour[iCount][2])
		{
			iLargest = iPerseidsHour[iCount][1];
		}
		else if (iPerseidsHour[iCount][2] > iPerseidsHour[iCount][0] && iPerseidsHour[iCount][2] > iPerseidsHour[iCount][1])
		{
			iLargest = iPerseidsHour[iCount][2];
		}
		else
		{
			cout << "Two or more numbers are the same value.\n\n";
		}

		if (iPerseidsHour[iCount][0] < iPerseidsHour[iCount][1] && iPerseidsHour[iCount][0] < iPerseidsHour[iCount][2])
		{
			iSmallest = iPerseidsHour[iCount][0];
		}
		else if (iPerseidsHour[iCount][1] < iPerseidsHour[iCount][0] && iPerseidsHour[iCount][1] < iPerseidsHour[iCount][2])
		{
			iSmallest = iPerseidsHour[iCount][1];
		}
		else if (iPerseidsHour[iCount][2] < iPerseidsHour[iCount][0] && iPerseidsHour[iCount][2] < iPerseidsHour[iCount][1])
		{
			iSmallest = iPerseidsHour[iCount][2];
		}
		else
		{
			cout << "Two or more numbers are the same value.\n\n";
		}

		iResult = iLargest - iSmallest;

		cout << "The difference is: " << iResult << "\n\n";
	}

	return iResult;

}

double AveragePerHour(int iPerseidsHour[2][3])
{
	double dResult = 0;
	int dTotal = 0;

	for (int iCount = 0; iCount < 2; iCount++)
	{
		dTotal = iPerseidsHour[iCount][0] + iPerseidsHour[iCount][1] + iPerseidsHour[iCount][2];

		dResult = dTotal / 3;

		cout << "The average per hour is: " << dResult << "\n\n";
	}

	return dResult;
}

int DifferenceOverall(int iPerseidsHour[2][3])
{
	int iResult = 0;

	for (int iCount = 0; iCount < 2; iCount++)
	{
		int iTotalObserver1 = 0;
		int iTotalObserver2 = 0;
		int iLargest1 = 0;
		int iLargest2 = 0;
		int iSmallest1 = 0;
		int iSmallest2 = 0;

		// observer 1 calculation
		if (iPerseidsHour[0][0] > iPerseidsHour[0][1] && iPerseidsHour[0][0] > iPerseidsHour[0][2])
		{
			iLargest1 = iPerseidsHour[0][0];
		}
		else if (iPerseidsHour[0][1] > iPerseidsHour[0][0] && iPerseidsHour[0][1] > iPerseidsHour[0][2])
		{
			iLargest1 = iPerseidsHour[0][1];
		}
		else if (iPerseidsHour[0][2] > iPerseidsHour[0][0] && iPerseidsHour[0][2] > iPerseidsHour[0][1])
		{
			iLargest1 = iPerseidsHour[0][2];
		}
		else
		{
			cout << "Two or more numbers are the same value.\n\n";
		}

		if (iPerseidsHour[0][0] < iPerseidsHour[0][1] && iPerseidsHour[0][0] < iPerseidsHour[0][2])
		{
			iSmallest1 = iPerseidsHour[0][0];
		}
		else if (iPerseidsHour[0][1] < iPerseidsHour[0][0] && iPerseidsHour[0][1] < iPerseidsHour[0][2])
		{
			iSmallest1 = iPerseidsHour[0][1];
		}
		else if (iPerseidsHour[0][2] < iPerseidsHour[0][0] && iPerseidsHour[0][2] < iPerseidsHour[0][1])
		{
			iSmallest1 = iPerseidsHour[0][2];
		}
		else
		{
			cout << "Two or more numbers are the same value.\n\n";
		}

		// observer 2 calculation
		if (iPerseidsHour[1][0] > iPerseidsHour[1][1] && iPerseidsHour[1][0] > iPerseidsHour[1][2])
		{
			iLargest2 = iPerseidsHour[1][0];
		}
		else if (iPerseidsHour[1][1] > iPerseidsHour[1][0] && iPerseidsHour[1][1] > iPerseidsHour[1][2])
		{
			iLargest2 = iPerseidsHour[1][1];
		}
		else if (iPerseidsHour[1][2] > iPerseidsHour[1][0] && iPerseidsHour[1][2] > iPerseidsHour[1][1])
		{
			iLargest2 = iPerseidsHour[1][2];
		}
		else
		{
			cout << "Two or more numbers are the same value.\n\n";
		}

		if (iPerseidsHour[1][0] < iPerseidsHour[1][1] && iPerseidsHour[1][0] < iPerseidsHour[1][2])
		{
			iSmallest2 = iPerseidsHour[1][0];
		}
		else if (iPerseidsHour[1][1] < iPerseidsHour[1][0] && iPerseidsHour[1][1] < iPerseidsHour[1][2])
		{
			iSmallest2 = iPerseidsHour[1][1];
		}
		else if (iPerseidsHour[1][2] < iPerseidsHour[1][0] && iPerseidsHour[1][2] < iPerseidsHour[1][1])
		{
			iSmallest2 = iPerseidsHour[1][2];
		}
		else
		{
			cout << "Two or more numbers are the same value.\n\n";
		}

		iTotalObserver1 = iLargest1 - iSmallest1;
		iTotalObserver2 = iLargest2 - iSmallest2;

		if (iTotalObserver1 > iTotalObserver2)
		{
			iResult = iTotalObserver1 - iTotalObserver2;
		}
		else if (iTotalObserver2 > iTotalObserver1)
		{
			iResult = iTotalObserver2 - iTotalObserver1;
		}

	}

	return iResult;
}

int AverageOverall(int iPerseidsHour[2][3])
{
	double dResult = 0;
	int dTotal = 0;
	double dOverall = 0;

	for (int iCount = 0; iCount < 2; iCount++)
	{
		/*double dTotal1 = 0;
		double dTotal2 = 0;
		dTotal1 = iPerseidsHour[0][0] + iPerseidsHour[0][1] + iPerseidsHour[0][2];
		dTotal2 = iPerseidsHour[1][0] + iPerseidsHour[1][1] + iPerseidsHour[1][2];
		dOverall = dTotal1 + dTotal2;*/

		dTotal = iPerseidsHour[iCount][0] + iPerseidsHour[iCount][1] + iPerseidsHour[iCount][2];

		dOverall += dTotal;
	}

	dResult = dTotal / 6;

	cout << "The average overall is: " << dResult << "\n\n";

	return dResult;
}

int AveragePerMinuteHour(int iPerseidsHour[2][3])
{
	double dResult = 0;

	for (int iCount = 0; iCount < 2; iCount++)
	{
		int dTotal = 0;
		
		dTotal = iPerseidsHour[iCount][0] + iPerseidsHour[iCount][1] + iPerseidsHour[iCount][2];

		dResult = dTotal / 60;

		cout << "The average per minute per hour is: " << dResult << "\n\n";
	}
	return dResult;
}

int AveragePerMinuteOverall(int iPerseidsHour[2][3])
{
	double dResult = 0;
	int iTotal = 0;
	double dOverall = 0;

	for (int iCount = 0; iCount < 2; iCount++)
	{
		int iTotal1 = 0;
		int iTotal2 = 0;
		/*iTotal1 = iPerseidsHour[0][0] + iPerseidsHour[0][1] + iPerseidsHour[0][2];
		iTotal2 = iPerseidsHour[1][0] + iPerseidsHour[1][1] + iPerseidsHour[1][2];

		dOverall = (iTotal1 / 3) + (iTotal2 / 3);*/

		iTotal = iPerseidsHour[iCount][0] + iPerseidsHour[iCount][1] + iPerseidsHour[iCount][2];

		dOverall += iTotal;

	}

	dOverall = iTotal / 6;

	dResult = dOverall / 60;

	cout << "The average per minute per hour is: " << dResult << "\n\n";

	return dResult;
}

int LargestAmountPerseidsSeen(int iPerseidsHour[2][3])
{
	int iResult = 0;

	for (int iCount = 0; iCount < 2; iCount++)
	{
		int iLargest1 = 0;
		int iLargest2 = 0;
		int iSmallest1 = 0;
		int iSmallest2 = 0;
		int iTotal = 0;

		// observer 1 calculation
		if (iPerseidsHour[0][0] > iPerseidsHour[0][1] && iPerseidsHour[0][0] > iPerseidsHour[0][2])
		{
			iLargest1 = iPerseidsHour[0][0];
		}
		else if (iPerseidsHour[0][1] > iPerseidsHour[0][0] && iPerseidsHour[0][1] > iPerseidsHour[0][2])
		{
			iLargest1 = iPerseidsHour[0][1];
		}
		else if (iPerseidsHour[0][2] > iPerseidsHour[0][0] && iPerseidsHour[0][2] > iPerseidsHour[0][1])
		{
			iLargest1 = iPerseidsHour[0][2];
		}
		else
		{
			cout << "Two or more numbers are the same value.\n\n";
		}

		// observer 2 calculation
		if (iPerseidsHour[1][0] > iPerseidsHour[1][1] && iPerseidsHour[1][0] > iPerseidsHour[1][2])
		{
			iLargest2 = iPerseidsHour[1][0];
		}
		else if (iPerseidsHour[1][1] > iPerseidsHour[1][0] && iPerseidsHour[1][1] > iPerseidsHour[1][2])
		{
			iLargest2 = iPerseidsHour[1][1];
		}
		else if (iPerseidsHour[1][2] > iPerseidsHour[1][0] && iPerseidsHour[1][2] > iPerseidsHour[1][1])
		{
			iLargest2 = iPerseidsHour[1][2];
		}
		else
		{
			cout << "Two or more numbers are the same value.\n\n";
		}

		if (iLargest1 > iLargest2)
		{
			iTotal = iLargest1;
		}
		else if (iLargest2 > iLargest1)
		{
			iTotal = iLargest2;
		}
		else
		{
			cout << "Two or more numbers are the same value.\n\n";
		}

		iResult = iTotal;
	}
	return iResult;
}

int Range(int iPerseidsHour[2][3])
{
	int iResult = 0;
	for (int iCount = 0; iCount < 2; iCount++)
	{
		int iRange1 = 0;
		int iRange2 = 0;
		int iLargest1 = 0;
		int iLargest2 = 0;
		int iSmallest1 = 0;
		int iSmallest2 = 0;
		int iTotal1 = 0;
		int iTotal2 = 0;

		// observer 1 calculation
		if (iPerseidsHour[0][0] > iPerseidsHour[0][1] && iPerseidsHour[0][0] > iPerseidsHour[0][2])
		{
			iLargest1 = iPerseidsHour[0][0];
		}
		else if (iPerseidsHour[0][1] > iPerseidsHour[0][0] && iPerseidsHour[0][1] > iPerseidsHour[0][2])
		{
			iLargest1 = iPerseidsHour[0][1];
		}
		else if (iPerseidsHour[0][2] > iPerseidsHour[0][0] && iPerseidsHour[0][2] > iPerseidsHour[0][1])
		{
			iLargest1 = iPerseidsHour[0][2];
		}
		else
		{
			cout << "Two or more numbers are the same value.\n\n";
		}

		if (iPerseidsHour[0][0] < iPerseidsHour[0][1] && iPerseidsHour[0][0] < iPerseidsHour[0][2])
		{
			iSmallest1 = iPerseidsHour[0][0];
		}
		else if (iPerseidsHour[0][1] < iPerseidsHour[0][0] && iPerseidsHour[0][1] < iPerseidsHour[0][2])
		{
			iSmallest1 = iPerseidsHour[0][1];
		}
		else if (iPerseidsHour[0][2] < iPerseidsHour[0][0] && iPerseidsHour[0][2] < iPerseidsHour[0][1])
		{
			iSmallest1 = iPerseidsHour[0][2];
		}
		else
		{
			cout << "Two or more numbers are the same value.\n\n";
		}

		// observer 2 calculation
		if (iPerseidsHour[1][0] > iPerseidsHour[1][1] && iPerseidsHour[1][0] > iPerseidsHour[1][2])
		{
			iLargest2 = iPerseidsHour[1][0];
		}
		else if (iPerseidsHour[1][1] > iPerseidsHour[1][0] && iPerseidsHour[1][1] > iPerseidsHour[1][2])
		{
			iLargest2 = iPerseidsHour[1][1];
		}
		else if (iPerseidsHour[1][2] > iPerseidsHour[1][0] && iPerseidsHour[1][2] > iPerseidsHour[1][1])
		{
			iLargest2 = iPerseidsHour[1][2];
		}
		else
		{
			cout << "Two or more numbers are the same value.\n\n";
		}

		if (iPerseidsHour[1][0] < iPerseidsHour[1][1] && iPerseidsHour[1][0] < iPerseidsHour[1][2])
		{
			iSmallest2 = iPerseidsHour[1][0];
		}
		else if (iPerseidsHour[1][1] < iPerseidsHour[1][0] && iPerseidsHour[1][1] < iPerseidsHour[1][2])
		{
			iSmallest2 = iPerseidsHour[1][1];
		}
		else if (iPerseidsHour[1][2] < iPerseidsHour[1][0] && iPerseidsHour[1][2] < iPerseidsHour[1][1])
		{
			iSmallest2 = iPerseidsHour[1][2];
		}
		else
		{
			cout << "Two or more numbers are the same value.\n\n";
		}

		/* iRange1 = iLargest1 - iSmallest1;
		iRange2 = iLargest2 - iSmallest2;

		if (iRange1 > iRange2)
		{
			iResult = iRange1 - iRange2;
		}
		else if (iRange2 > iRange1)
		{
			iResult = iRange2 - iRange1;
		} */

		if (iLargest1 > iLargest2)
		{
			iTotal1 = iLargest1;
		}
		else if (iLargest2 > iLargest1)
		{
			iTotal1 = iLargest2;
		}

		if (iSmallest1 < iSmallest2)
		{
			iTotal2 = iSmallest1;
		}
		else if (iSmallest2 < iSmallest1)
		{
			iTotal2 = iSmallest2;
		}

		iResult = iTotal1 - iTotal2;

	}
	return iResult;
}

int Mean(int iPerseidsHour[2][3])
{
	double dResult = 0;
	int dTotal = 0;
	double dOverall = 0;

	for (int iCount = 0; iCount < 2; iCount++)
	{
		dTotal = iPerseidsHour[iCount][0] + iPerseidsHour[iCount][1] + iPerseidsHour[iCount][2];

		dOverall += dTotal;
	}

	dResult = dTotal / 6;

	cout << "The mean is: " << dResult << "\n\n";

	return dResult;
}

int main()
{
	Welcome();

	// int iObserverAmount;
	// cout << "Please enter number of Observers" << endl;
	// cin >> iObserverAmount;
	// string sObserverName[iObserverAmount];

	string sObserverName[2];
	string sLocation[2];
	int iCount = 0;
	int iPerseidsHour[2][3];
	int iChoice = 0;
	bool bChoice = false;

	for (int iCount = 0; iCount < 2; iCount++)
	{
		cout << "Please enter the name of Observer " << iCount + 1 << endl;
		cin >> sObserverName[iCount];
	}

	for (int iCount = 0; iCount < 2; iCount++)
	{
		cout << "Please enter the location of Observer " << iCount + 1 << endl;
		cin >> sLocation[iCount];

	}

	for (int iCount = 0; iCount < 2; iCount++)
	{
		cout << "Please enter amount of Perseids for Observer " << iCount + 1 << endl << endl;

		cout << "Perseids seen in hour 1 " << endl;
		cin >> iPerseidsHour[iCount][0];

		cout << "Perseids seen in hour 2 " << endl;
		cin >> iPerseidsHour[iCount][1];

		cout << "Perseids seen in hour 3 " << endl;
		cin >> iPerseidsHour[iCount][2];
	}

	do
	{
		Menu();

		cin >> iChoice; // opens input for user to enter a number 1, 2, 3 or 4 of the options.

		switch (iChoice) // open to case statement, defines which input we are using.
		{
		case 1: // if user enters 1, this option will be calculated.
			cout << "Observer name: " << sObserverName[iCount] << endl << endl;
			break; // stops the program from going ahead if result has been reached.
		case 2:
			cout << "Total perseids seen per observer: " << TotalPerPerson(iPerseidsHour) << endl << endl;
			break;
		case 3:
			cout << "Total perseids overall: " << TotalPerseidsOverall(iPerseidsHour) << endl << endl;
			break;
		case 4:
			DifferencePerHour(iPerseidsHour);
			break;
		case 5:
			AveragePerHour(iPerseidsHour);
			break;
		case 6:
			cout << "Difference of perseids overall: " << DifferenceOverall(iPerseidsHour) << endl << endl;
			break;
		case 7:
			cout << "Average of perseids overall: " << AverageOverall(iPerseidsHour) << endl << endl;
			break;
		case 8:
			cout << "Average of perseids per minute per hour: " << AveragePerMinuteHour(iPerseidsHour) << endl << endl;
			break;
		case 9:
			AveragePerMinuteOverall(iPerseidsHour);
			break;
		case 10:
			cout << "Largest amount of perseids seen: " << LargestAmountPerseidsSeen(iPerseidsHour) << endl << endl;
			break;
		case 11:
			cout << "Range of perseids seen: " << Range(iPerseidsHour) << endl << endl;
			break;
		case 12:
			Mean(iPerseidsHour);
			break;
		case 13:
			bChoice = true; // when 13 is entered closes the program because the choice is set to true.
			break;
		default:
			cout << "Input not recognised";
			break;
		}

	} while (bChoice == false); // does not shut down the program whilst 13 is not entered.

	cout << " " << endl;

	_getch();

	return 0;
}