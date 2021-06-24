// ------------------------------------------------------------------------------------------
// Name: Neina Cichon
// Abstract: Small Calculation Apps
// Date: 9/7/2020
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Includes
// ------------------------------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>


// ------------------------------------------------------------------------------------------
// Constants
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Prototypes
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Name: main
// Abstract: This is where the program starts
// ------------------------------------------------------------------------------------------
void main()
{
	//Problem 1
	float sngUserValue = 0;

	//Problem 2
	float sngSecondsPerYear = (365 * 24 * 60 * 60);
	float sngAgeInYears = 0;
	float sngAgeInSeconds = 0;

	//Problem 3
	float sngGramsInQuart = 950;
	float sngSingleMolecule = 3.0e-23;
	float sngInputOfQuarts = 0;
	float sngGramsInInput = 0;
	float sngMoleculesInInput = 0;

	//Problem 4
	int intNumber1 = 0;
	int intNumber2 = 0;
	int intNumber3 = 0;
	int intNumber4 = 0;
	int intLargestNumber = 0;

	// Problem 5
	int intYearInput = 0;

	//Problem 6
	float sngHourlyRate = 0;
	float sngHoursWorked = 0;
	float sngNetPay = 0;
	float sngGrossPay = 0;
	float sngTax = 0;
	float sngTax300 = .15;
	float sngTax450 = .20;
	float sngTaxRest = .25;



	// ------------------------------------------------------------------------------------------
	// Problem #1 –	Print number in decimal and exponential notation.
	// ------------------------------------------------------------------------------------------
	//Get User Input for decimal
	printf("Problem #1 - Enter a decimal number\n");
	scanf_s("%f", &sngUserValue);

	//Display in decimal and exponential format
	printf("The number in decimal format is %f\n", sngUserValue);
	printf("The number in exponential formal is %e\n\n\n", sngUserValue);



	// ------------------------------------------------------------------------------------------
	// Problem #2 –	Print age in seconds
	// ------------------------------------------------------------------------------------------
	// 365 days /year * 24 hours/day * 60 minutes/hour * 60 seconds per minute
	// Get User input for age
	printf("Please enter age in years (e.g. 4.5): ");
	scanf_s("%f", &sngAgeInYears);

	//Calculate seconds from input
	sngAgeInSeconds = sngAgeInYears * sngSecondsPerYear;

	//Display result
	printf("Your age in seconds is %f\n\n\n", sngAgeInSeconds);


	// ------------------------------------------------------------------------------------------
	// Problem #3 –	Print number of molecules from input in quarts
	// ------------------------------------------------------------------------------------------
	//Get user input for quarts
	printf("Please enter amount of water in quarts: ");
	scanf_s("%f", &sngInputOfQuarts);

	//Calculate Grams and molecules
	sngGramsInInput = sngInputOfQuarts * sngGramsInQuart;
	sngMoleculesInInput = (sngGramsInInput / sngSingleMolecule);

	//Display result
	printf("The number of water molecules in %f quarts of water is %e\n\n\n", sngInputOfQuarts, sngMoleculesInInput);


	// ------------------------------------------------------------------------------------------
	// Problem #4 –	Print the Largest of four inputted numbers
	// ------------------------------------------------------------------------------------------
	//Get user input for numbers
	printf("Please enter first number: ");
	scanf_s("%d", &intNumber1);

	printf("Please enter second number: ");
	scanf_s("%d", &intNumber2);

	printf("Please enter third number: ");
	scanf_s("%d", &intNumber3);

	printf("Please enter fourth number: ");
	scanf_s("%d", &intNumber4);

	//Calculate largest number
	if (intNumber1 >= intNumber2 && intNumber1 >= intNumber3 && intNumber1 >= intNumber4)
	{
		intLargestNumber = intNumber1;
	}
	else if (intNumber2 >= intNumber1 && intNumber2 >= intNumber3 && intNumber2 >= intNumber4)
	{
		intLargestNumber = intNumber2;
	}
	else if (intNumber3 >= intNumber1 && intNumber3 >= intNumber2 && intNumber3 >= intNumber4)
	{
		intLargestNumber = intNumber3;
	}
	else
	{
		intLargestNumber = intNumber4;
	}

	//Display result
	printf("The largest number is %d.\n\n\n", intLargestNumber);



	// ------------------------------------------------------------------------------------------
	// Problem #5 –	Determine if inputted year is a leap year or not.
	// ------------------------------------------------------------------------------------------

	// Ask user for input
	printf("Please enter a year: ");
	scanf_s("%d", &intYearInput);

	// Make sure year entered are between 1500 and 2200
	if (intYearInput > 1500 && intYearInput < 2200)
	{
		if (intYearInput % 4 == 0) // Check if Year is evenly divisible by 4
		{
			if (intYearInput % 100 == 0) // Check if Year is evenly divisible by 100
			{
				if (intYearInput % 400 == 0) // Check if Year is evenly divisible by 400
				{
					printf("YES! %d is a leap year!\n\n\n", intYearInput);
				}
				else
				{
					printf("No, %d is not a leap year.\n\n\n", intYearInput);
				}
			}
			else
			{
				printf("No, %d is not a leap year.\n\n\n", intYearInput);
			}
		}
		else
		{
			printf("No, %d is not a leap year.\n\n\n", intYearInput);
		}
	}
	else
	{
		printf("Invalid Year. Year must be between 1500 and 2200.\n\n\n");
	}

	// ------------------------------------------------------------------------------------------
	// Problem #6 –	Print the net pay from input
	// ------------------------------------------------------------------------------------------
	//Get user input for rate and hours
	printf("Please enter hourly pay rate: ");
	scanf_s("%f", &sngHourlyRate);

	printf("Please enter hours worked: ");
	scanf_s("%f", &sngHoursWorked);

	// Make sure both pay rate and hours worked are not negative
	if (sngHourlyRate > 0)
	{
		if (sngHoursWorked > 0)
		{
			sngGrossPay = sngHourlyRate * sngHoursWorked;

			if (sngGrossPay <= 300) //check if pay is less than $300and calc taxes
			{
				sngTax = sngGrossPay * sngTax300;
			}
			else if (sngGrossPay <= 450) //check if pay is less than $450and calc taxes
			{
				sngTax = ((sngGrossPay - 300) * sngTax450) + 45;
			}
			else
			{
				sngTax = ((sngGrossPay - 450) * sngTaxRest) + 75; // Calc taxes for pay above $450
			}
		}
		else
		{
			printf("Invalid input for Hours Worked. Must be a positive number.");
		}
	}
	else
	{
		printf("Invalid input for Hourly Rate. Must be a positive number.");
	}

		sngNetPay = sngGrossPay - sngTax; //Calculates net pay
	
	//	Print Results
		printf("\tPay Rate:\t $ %.02f\n", sngHourlyRate);
		printf("\tHours Worked:\t %.02f\n", sngHoursWorked);
		printf("\tGross Pay:\t $ %.02f\n", sngGrossPay);
		printf("\tTaxes:\t\t $ %.02f\n", sngTax);
		printf("\tNet Pay:\t $ %.02f\n\n\n", sngNetPay);

	system("pause");
}

