//Kenneth M. Self
//CS 300 Project Two

#include <iostream>
#include<string>
#include <algorithm>

using namespace std;

int main()
{
	cout << "Welcome to the Course Planner\n";

	while (true)
	{
		int flag;
		string flag2;
		flag = 0;
		cout << "\t 1.Load Data Structure.\n";
		cout << "\t 2.Print Course List.\n";
		cout << "\t 3.Print Course.\n";
		cout << "\t 9.Exit.\n";
		cout << "Please choose your selection!";
		cin >> flag;
		cout << "\n";
		if (flag == 9)
		{
			break;
		}
		else if (flag == 1)
		{
			
			
		}
		else if (flag == 2)
		{
			cout << "Here is sample schedule:\n\n";
			cout << "CSCI100, Introduction to Computer Science\n";
			cout << "CSCI101, Introduction to Programming in C++\n";
			cout << "CSCI200, Data Structures\n";
			cout << "CSCI301, Advance Programming in C++\n";
			cout << "CSCI300, Introduction to Algorithms\n";
			cout << "CSCI350, Operating Systems\n";
			cout << "CSCI400, Large Software Development\n";
			cout << "MATH201, Discrete Mathematics\n\n";
		}
		else if (flag == 3)
		{
			cout << "Please enter the course of your selection";
			cin >> flag2;
			cout << "\n";
			transform(flag2.begin(), flag2.end(), flag2.begin(), ::tolower);
			if (flag2 == "csci400")
			{
				cout << "CSCI400,Large Software Development\nPrerequisites:CSCI301, CSCI350\n\n";
			}
			//Write for other Courses using Else If statement
		}
		else
		{
			cout << flag;
			cout << " This selection is not a valid option\n";
		}
	}

	return 0;
}


