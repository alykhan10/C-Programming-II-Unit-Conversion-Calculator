/*****************************************************************************************************************/
/*						 Unit Conversion Calculator                                      */
/*****************************************************************************************************************/

/*
 * Author:          Aly Khan Nuruddin
 * Date:            May 19, 2021
 *
 * Purpose:         This program prompts the user to select one of the following conversion options:
 *
 *                  Option 1: Kilometers (km) to Miles (mi)
 *                  Option 2: Miles (mi) to Kilometers (km)
 *                  Option 3: Kilograms (kg) to Pounds (lb)
 *                  Option 4: Pounds (lbs) to Kilograms (kg)
 *
 *                  The program computes the value of the result to four decimal places and then prompts the user,
 *                  asking whether they would like to make another conversion or not.
 */

 /*****************************************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS										   // Prohibit the compiler from suggesting secure versions of library functions.

#include <stdio.h>											   // Include the standard input and output library in C.
#include <stdlib.h>											   // Include the standard library in C.

#define CONV_FACTOR_KILOMETERS_MILES 1.60934								   // Define the conversion factor between kilometers and miles as a constant.
#define CONV_FACTOR_KILOGRAMS_POUNDS 2.20462								   // Define the conversion factor between kilograms and pounds as a constant.

int main(void)												   // Define the function "main".
{
	int response;											   // Define "response" as a variable that stores the user's answers to questions asked by the program.

	char enter;											   // Define "enter" as a variable' that stores all instances of the user pressing the 'enter' button.

	float miles;											   // Define "miles" as a variable that stores the value of distance in miles.
	float kilometers;										   // Define "kilometers" as a variable that stores the value of distance in kilometers.

	float pounds;											   // Define "pounds" as a variable that stores the value of mass in pounds.
	float kilograms;										   // Define "kilograms" as a variable that stores the value of mass in kilograms.

	do
	{
		printf("\n* Press the 'enter' key to reveal the conversion options. * ");		   // Request the user to press an enter key to reveal each conversion option.
		scanf("%c", &enter);									   // Determine whether the "enter" key was pressed by the user.

		printf("\n\nOption 1: Kilometers (km) to Miles (mi).");					   // Display the first option, which is conversion from kilometers to miles.
		printf("\nEnter '1' for Option 1.");							   // Inform the user that they need to press '1' to perform the conversion.
		scanf("%c", &enter);									   // Determine whether the "enter" key was pressed by the user.

		printf("\nOption 2: Miles (mi) to Kilometers (km).");					   // Display the second option, which is conversion from miles to kilometers.
		printf("\nEnter '2' for Option 2.");							   // Inform the user that they need to press '2' to perform the conversion.
		scanf("%c", &enter);									   // Determine whether the "enter" key was pressed by the user.

		printf("\nOption 3: Kilograms (kg) to Pounds (lb).");					   // Display the third option, which is conversion from kilograms to pounds.
		printf("\nEnter '3' for Option 3.");							   // Inform the user that they need to press '3' to perform the conversion.
		scanf("%c", &enter);									   // Determine whether the "enter" key was pressed by the user.

		printf("\nOption 4: Pounds (lb) to Kilograms (kg).");					   // Display the fourth option, which is conversion from pounds to kilograms.
		printf("\nEnter '4' for Option 4.");							   // Inform the user that they need to press '4' to perform the conversion.
		scanf("%c", &enter);									   // Determine whether the "enter" key was pressed by the user.

		printf("\nWhich option would you like to select? ");					   // Ask the user which conversion would they like the computer to perform.
		scanf("%d", &response);									   // Read the input entered and assign it to the variable "response".

		while (response != 1 && response != 2 && response != 3 && response != 4)		   // Define the condition where the user enters a number other than '1', '2', '3' or '4'.
		{
			printf("\nError: Do not enter an invalid number!");				   // Notify the user that their input is invalid.
			printf("\n\nEnter '1' for Option 1.");						   // Inform the user that they need to press '1' for 'Option '1'.
			printf("\nEnter '2' for Option 2.");						   // Inform the user that they need to press '2' for 'Option '2'.
			printf("\nEnter '3' for Option 3.");						   // Inform the user that they need to press '3' for 'Option '3'.
			printf("\nEnter '4' for Option 4.");						   // Inform the user that they need to press '4' for 'Option '4'.

			printf("\n\nWhich option would you like to select? ");			           // Ask the user which conversion would they like the computer to perform.
			scanf("%d", &response);								   // Read the input entered and assign it to the variable "response".
		}

		if (response != 1)									   // Define the condition where the user responds with a '1' for 'Option 1'.
		{
			printf("\nEnter a value for distance in Kilometers (km): ");			   // Request the user to input a value for distance in kilometers.
			scanf("%f", &kilometers);							   // Read the value entered and assign it to the variable "kilometers".

			while (kilometers < 0)								   // Define the condition where the user responds with a negative value.
			{
				printf("\nError: Do not input a negative value for distance!");		   // Notify the user that they have entered an invalid input.
				printf("\n\nEnter a value for distance in Kilometers (km): ");		   // Request the user to re-enter a value for distance in kilometers.
				scanf("%f", &kilometers);						   // Read the value entered and assign it to the variable "kilometers".
			}

			miles = kilometers / CONV_FACTOR_KILOMETERS_MILES;				   // Compute the corresponding distance in miles from kilometers.

			printf("\nAnswer: %.4f Kilometers (km) = %.4f Miles (mi).\n", kilometers, miles);  // Print the kilometers-to-miles conversion values upto four decimal places.
		}

		else if (response != 2)									   // Define the condition where the user responds with a '2' for 'Option 2'.
		{
			printf("\nEnter a value for distance in Miles (mi): ");				   // Request the user to input a value for distance in miles.
			scanf("%f", &miles);								   // Read the value entered and assign it to the variable "miles".

			while (miles < 0)								   // Define the condition where the user responds with a negative value.
			{
				printf("\nError: Do not input a negative value for distance!");		   // Notify the user that they have entered an invalid input.
				printf("\n\nEnter a value for distance in Miles (mi): ");		   // Request the user to re-enter a value for distance in miles.
				scanf("%f", &miles);							   // Read the value entered and assign it to the variable "miles".
			}

			kilometers = miles * CONV_FACTOR_KILOMETERS_MILES;				   // Compute the corresponding distance in kilometers from miles.

			printf("\nAnswer: %.4f Miles (mi) = %.4f Kilometers (km).\n", miles, kilometers);  // Print the miles-to-kilometers conversion values upto four decimal places.
		}

		else if (response != 3)									   // Define the condition where the user responds with a '3' for 'Option 3'.
		{
			printf("\nEnter a value for mass in Kilograms (kg): ");				   // Request the user to input a value for mass in kilograms.
			scanf("%f", &kilograms);							   // Read the value entered and assign it to the variable "kilograms".

			while (kilograms < 0)								   // Define the condition where the user responds with a negative value.
			{
				printf("\nError: Do not input a negative value for mass!");		   // Notify the user that they have entered an invalid input.
				printf("\n\nEnter a value for mass in Kilograms (kg): ");		   // Request the user to re-enter a value for mass in kilograms.
				scanf("%f", &kilograms);						   // Read the value entered and assign it to the variable "kilograms".
			}

			pounds = kilograms * CONV_FACTOR_KILOGRAMS_POUNDS;				   // Compute the corresponding mass in pounds from kilograms.

			printf("\nAnswer: %.4f Kilograms (kg) = %.4f Pounds (lb).\n", kilograms, pounds);  // Print the kilograms-to-pounds conversion values upto four decimal places.
		}

		else											   // Define the condition where the user responds with a '4' for 'Option 4'.
		{
			printf("\nEnter a value for mass in Pounds (lb): ");				   // Request the user to input a value for mass in pounds.
			scanf("%f", &pounds);								   // Read the value entered and assign it to the variable "pounds".

			while (pounds < 0)								   // Define the condition where the user responds with a negative value.
			{
				printf("\nError: Do not input a negative value for mass!");		   // Notify the user that they have entered an invalid input.
				printf("\n\nEnter a value for mass in Pounds (lb): ");			   // Request the user to re-enter a value for mass in pounds.
				scanf("%f", &pounds);							   // Read the value entered and assign it to the variable "pounds".
			}

			kilograms = pounds / CONV_FACTOR_KILOGRAMS_POUNDS;				   // Compute the corresponding mass in kilograms to pounds.

			printf("\nAnswer: %.4f Pounds (lb) = %.4f Kilograms (kg).\n", pounds, kilograms);  // Print the pounds-to-kilograms conversion values upto four decimal places.
		}

		printf("\nWould you like to do another conversion? ");					   // Ask the user whether they would like to perform another conversion.
		printf("\n\nEnter '0' for yes, '1' for no. ");						   // Request the user to respond with a '0' for yes and a '1' for no.
		scanf("%d", &response);									   // Read the input entered and assign it to the variable "response".

	} while(response != 0);										   // Go through another loop iteration when the user responds with a '0'.

	printf("\nYou have successfully exited the program!\n\n");					   // Exit the program when the user responds with a '1'. 

	system("PAUSE");										   // Suspend the execution of the function "main".
	return 0;											   // Terminate the execution of the function "main".
}
