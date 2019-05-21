#include <iostream>
#include <conio.h>

using namespace std;

const int day = 7;

int main () 
{
	int temp[day];

	cout << "Enter all temperature for a week of Province A, Province B, and Province C for a week. \n";

	
		for (int j = 0; j < day; ++j)
		{
			cout << "Province A, Day " << j + 1 << " : " ;
			cin >> temp[j];
		}
		for (int j = 0; j < day; ++j)
		{
			cout << "Province B, Day " << j + 1 << " : " ;
			cin >> temp[j];
		}

		for (int j = 0; j < day; ++j)
		{
			cout << "Province C, Day " << j + 1 << " : " ;
			cin >> temp[j];
		}

	cout << "\nDisplaying Values: \n";
	
		for(int j = 0; j < day; ++j)
		{
			cout << "Province A, Day " << j + 1 << " = " << temp[j] << endl;
		}
		
		for(int j = 0; j < day; ++j)
		{
			cout << "Province B, Day " << j + 1 << " = " << temp[j] << endl;
		}
			
		for(int j = 0; j < day; ++j)
		{
			cout << "Province C, Day " << j + 1 << " = " << temp[j] << endl;
		}
	
_getch();
return 0;
}
	