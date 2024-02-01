// Programmed by : Andrew McGarvie
// Assignment : Lab #1
// Purpose : Run some code
//



#include <iostream>
#include <string>

using namespace std;

int main()
{
	//make variables
	int numberOfDevices;
	double priceOfDevice;
	char desiredGrade;
	string favoriteDrink;
	
	//assign value to variables
	numberOfDevices = 5;
	priceOfDevice = 1699.99;
	desiredGrade = 'A';
	favoriteDrink = "Mountain Dew";
	
	//output results
	std::cout << "My Name is Andrew McGarvie" << endl;
	cout << "I currently have " << numberOfDevices 
	<< " devices." << endl;
	cout << "The most expensive one cost $"
	<< priceOfDevice << endl;
	cout << "I want to get an " << desiredGrade << " in CSIS 2605\n";
	cout << "I really really really really want a " << favoriteDrink << " right now!!!\n";
	
	//return to OS
	//returning success or failure of command
	return 0;
	//return of 0 indicates success
	//return of anthing else, meansing something else
	
} 
