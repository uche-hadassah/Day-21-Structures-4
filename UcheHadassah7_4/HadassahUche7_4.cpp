/*Name:Uche Hadassah
This program receives the Car number, miles driven and gallons used from the user and displays
a report listing each car number and the miles per gallon achieved by the car.*/
#include<iostream>
#include<cstring>
using namespace std;
const int MAX = 5;
struct Car
{
	char carNumber[20];
	double milesDriven;
	int gallonsUsed;
};
int main()
{
	Car carData[MAX];
	int i;
	for (i = 0; i < MAX; i++)
	{
		cout << "\nEnter the details for Car " << i + 1;
		cout << "\nCar Number:";
		//Gets the car number from the user
		int length;
		do
		{
			cin.getline(carData[i].carNumber, 20);
			length = strlen(carData[i].carNumber);
			while(carData[i].carNumber[length] != '\0')
			{
				cout << "Invalid car Number. Please enter the car number:";
				cin.getline(carData[i].carNumber, 20);
			}
		} while (carData[i].carNumber[length] != '\0');
		cout << "Enter the miles driven by car " << i + 1 << ":";
		do
		{
			cin >> carData[i].milesDriven;
			while (carData[i].milesDriven < 0.0)
			{
				cout << "Incorrect data. Please enter the miles driven by car " << i + 1 << ":";
				cin >> carData[i].milesDriven;
			}
		} while (carData[i].milesDriven < 0.0);//Verify user input for miles driven
		cout << "Enter the gallons used:";
		do
		{
			cin >> carData[i].gallonsUsed;
			while (carData[i].gallonsUsed < 0)
			{
				cout << "Incorrect data. Please enter the gallons used by car " << i + 1 << ":";
				cin >> carData[i].gallonsUsed;
			}
		} while (carData[i].gallonsUsed < 0);//Verify user input for gallons used
		cin.ignore();
	}

	cout << "Cars Report";
	cout << "\nCar Number\tMiles/Gallon";
	for (int j = 0; j < MAX; j++)//Outputs the report
	{
		double milesPerGallon = carData[j].milesDriven / carData[j].gallonsUsed;
		cout << "\n" << carData[j].carNumber << "\t\t" << milesPerGallon;
	}
}