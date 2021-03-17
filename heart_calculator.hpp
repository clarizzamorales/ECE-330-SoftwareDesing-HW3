/* File: heart_calculator.h */

#include <stdio.h>
#include <stdlib.h>
#include <string>

class HeartRates{
	private:
		std::string personName;
		std::string personlastName;
		int BirthMonth;
		int BirthDay;
		int BirthYear;

	public:

		HeartRates(std::string Name, std::string  LastName, int birthMonth, int  birthDay, int  birthYear);
		//setters and getter functions
		void _Name(std::string Name);
		std::string getName();
		void _LastName(std::string LastName);
		std::string getLastName();
		void _birthMonth(int birthMonth);
		int getbirthMonth();
		void _birthDay(int birthDay);
		int getbirthDay();
		void _birthYear(int birthYear);
		int getbirthYear();
		int getAge(int currentMonth, int currrentDay, int currentYear);
		int getMaximumHeartRate(int currentMonth, int currentDay, int currentYear);
		int getTargetHeartRate(int &, int &, int currentMonth, int currentDay, int currentYear);
};





