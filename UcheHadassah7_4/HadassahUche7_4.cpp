/*a) Define a single structure data type suitable for a Car structure to hold the following 
information: Car number, miles driven and gallons used.
b) Using the data type declared above, write program that interactively accepts these 
data into an array of 5 structures. Once the data have been entered, the program 
should create a report listing each car number and the miles per gallon achieved by 
the car.*/
#include<iostream>
#include<cstring>
using namespace std;
struct Car
{
	char carNumber[20];
	double milesDriven;
	int gallonsUsed;
};
int main()
{
	const int MAX_CARS = 5;
	Car carData[MAX_CARS];
	int i;
	for (i = 0; i < MAX_CARS; i++)
	{
		cout << "\nEnter the details for Car " << i +1;
		cout << "\nCar Number:";
		cin.getline(carData[i].carNumber, 20);
		cout << "Enter the miles driven by car " << i +1<<":";
		cin >> carData[i].milesDriven;
		cout << "Enter the gallons used by car " << i+1<<":";
		cin >> carData[i].gallonsUsed;
		cin.ignore();
	}
	
	cout << "Cars Report";
	cout << "\nCar Number\tMiles/Gallon";
	for (int j = 0; j < MAX_CARS; j++)
	{
		double milesPerGallon = carData[j].milesDriven / carData[j].gallonsUsed;
		cout <<"\n"<< carData[j].carNumber<<"\t\t"<< milesPerGallon;
	}
}