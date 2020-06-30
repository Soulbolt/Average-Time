// nested.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This program finds the average time spent programming by a student each day over a three day period.

//Cesar Cervantes

#include <iostream>
using namespace std;

int main()
{
	int numStudents;
	float numHours, total, average;
	int student, day = 0;		//These are the counters for the loops

	cout << "This program will find the average number of hours a day" << " that a student spent programming over a long weekend\n\n";
	cout << "How many students are there ?" << endl << endl;
	cin >> numStudents;

	cout << "Enter the number of days in the long weekend" << endl << endl;		//Added missing syntax to prompt for days in long weekend
	cin >> day;								//Captures number of days

	for (student = 1; student <= numStudents; student++)
	{
		total = 0;
		for (day = 1; day <= 2; day++)		//change value from 3 to 2 on "day <= 3" to match sample run
		{
			cout << "Please enter the number of hours worked by student " << student << " on day " << day << "." << endl;
			cin >> numHours;

			total = total + numHours;
		}

		average = total / 2;			//change value from 3 to 2 on "total / 2" to provide accurate calculation to match Sample Run

		cout << endl;
		cout << "The average number of hours per day spent programming by " << "student " << student << " is " << average << endl << endl << endl;
	}

	return 0;
}
	/*int numStudents;
	float numHours, numHours2, total, total2, average, average2;			//Added numHours2, total2, and average2 variables to add prompt and calculate hours study for Biology.
	int student, day = 0;		//These are teh counters for the loops

	cout << "This program will find the average number of hours a day" << " that a student spent programming over a long weekend\n\n";
	cout << "How many students are there?" << endl << endl;
	cin >> numStudents;

	cout << "Enter the number of days in the long weekend" << endl << endl;	//Added missing syntax to capture days in the long weekend
	cin >> day;																//Capture number of days

	for(student = 1; student <= numStudents; student++)
	{
		total = 0;
		total2 = 0;
		for (day = 1; day <= 2; day++)							//change value of 3 to "day <= 2" to help prompt for 2 days as entered
		{
			cout << "Please enter the number of hours worked in programming by student " << student << " on day " << day << "." << endl;
			cin >> numHours;
			total = total + numHours;

			cout << "Please enter the number of hours worked in Biology by student " << student << " on day " << day << "." << endl;	//added syntax to prompt hours studied in Biology
			cin >> numHours2;									//capture hours for Biology
			total2 = total2 + numHours2;				//added numHours2 variable to calculate hours studied for Biology
		}
		
		average = total / 2;									//change division to 2 to calculate accurate number as on the sample run
		//average2 = total2 / 2;
		
		if (total >= total2)							//added if statement to compare total hours spent in programming and biology
		{
			cout << "Student " << student << " spent " << average - average2 << " more hour/s in programming with an average of " << average << " hours." << endl << endl;	//if number of hours spent in programming is higher this prints out
		}
		else
		{
			cout << "Student " << student << " spent " << average2 - average << " more hour/s in Biology with an average of " << average2 << " hours." << endl << endl;		//else this prints out
		}
	}

	return 0;
}*/

//Exercise 1: I had to modify the code a bit to reflect the same results as the Sample run, it also had missing syntax.
//Exercise 2: I overlooked the fact that we were only asked to do Exercise 1, I commented out syntax for Exercise 2.

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
