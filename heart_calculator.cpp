#include "heart_calculator.hpp"
#include <stdio.h> 
#include <stdlib.h>
#include <iostream>
#include <string>

std::string _Name;
std::string _LastName;
int _birthMonth;
int _birthYear;
int _birthDay;
	//int _todaysDay;
	//int _todaysMonth;
	//int _todaysYear;

HeartRates::HeartRates(std::string Name, std::string LastName, int birthMonth, int birthDay, int birthYear){
		//std::cout << "Parametrized constructor\n";
		_Name(Name);
		_LastName(LastName);
		_birthDay(birthDay);	
		_birthMonth( birthMonth);
		_birthYear(birthYear);
		}
	//setters and getter methods
	
	//setter for Name
void HeartRates::_Name(std::string Name)
	{
		personName  = Name;
		//void method since we do not have to return anything
	}
	//Getter for Name
std::string HeartRates::getName()
	{
		return personName;
	}

	//setter for last name
void HeartRates::_LastName(std::string LastName)
	{
		personlastName = LastName;
	}
	//getter for last name
std::string HeartRates::getLastName()
	{
		return personlastName;
	}

	//setter for birth month
void HeartRates::_birthMonth(int birthMonth)
	{
		BirthMonth = birthMonth;
	}
	//getter for birth month
int  HeartRates::getbirthMonth()
	{
		return BirthMonth;
		//int method since we have to return an int value
	}

	//setter for birth day
void HeartRates::_birthDay(int birthDay)
	{
		BirthDay = birthDay;
	}
	//getter for birth day
int HeartRates::getbirthDay()
	{
		return BirthDay;
	}

	//setter for birth year
void HeartRates::_birthYear(int birthYear)
	{
		BirthYear = birthYear;
	}
	//getter for birth year 
int HeartRates::getbirthYear()
	{
		return BirthYear;
	}
	
	//getAge function to calculate and return the person's age in years


int HeartRates::getAge(int currentMonth, int currentDay, int currentYear){
		int x;
		x = 0;
		int age;

		if (getbirthMonth() > currentMonth)
		{
			x = -1;
		}
		if ((getbirthMonth() == currentMonth) && (getbirthDay() > currentDay))
		{
			x = -2;
		}

		age = (currentYear - getbirthYear() + x);
		return age;
	}
	

	//function getMaximumHeartRate() to find the persons heartrate
	
int HeartRates::getMaximumHeartRate(int currentMonth, int currentDay, int currentYear)
	{
		//220 - age in years
		int age; 
		age = (220 - getAge(currentMonth, currentDay, currentYear));
		return age;
	}

	//function getTargetHeartRate to calculate and return the person's target heart rate
int HeartRates::getTargetHeartRate(int &minimumTargetRate, int &maximumTargetRate, int currentMonth, int currentDay, int currentYear)
	{
		//target heart rate is 50-85% of max heart rate
		//e.g max hr = 180
		//min target is (180*50)/100

		int i;
		i = getMaximumHeartRate(currentMonth, currentDay, currentYear);
		minimumTargetRate = ((i*50) / 100);
		maximumTargetRate = ((i*85) / 100);

		return 0;
	}


