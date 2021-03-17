//#include "heart_calculator.cpp"
#include "heart_calculator.hpp"
#include <string>
#include <stdlib.h>
#include <iostream>

int main()
{
	int day, month, year;
	std::string name = " ";
	std::string lastName = " ";
	int minimumTarget, maximumTarget;
	int age;
	int currentMonth;
	int currentDay;
	int currentYear;

	std::cout << "Please enter your name and date of birth as follows(name lastname mm dd yyyy): " << "\n";
	std::cin >> name >>  lastName >>  month >> day >> year;

	HeartRates user(name, lastName, month, day, year);

	std::cout << "Your first name is: " << user.getName() << "\n";
	std::cout << "Your last name is: " << user.getLastName() << "\n";
	std::cout << "Your birthdate is: " << user.getbirthMonth() << "/" << user.getbirthDay() << "/" << user.getbirthYear() << "\n";

	std::cout << "Enter present date as (mm dd yyyy) : " << "\n";
	std::cin >> currentMonth >> currentDay >> currentYear;

	std::cout << "Your age in years is: " << user.getAge(currentMonth, currentDay, currentYear) << " years"<< "\n";


	std::cout << "Your Maximum Heart Rate according to the American Heart Association is: " << user.getMaximumHeartRate(currentMonth, currentDay, currentYear) << "\n";

	std::cout << "You Target Heart Rate is: " << user.getTargetHeartRate(minimumTarget, maximumTarget, currentMonth, currentDay, currentYear);
	std::cout << minimumTarget << " -- " << maximumTarget << "\n";

	return 0;
}




