#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

int main()
{
	char string[500];
	int n;

	cout << "Enter characters: " ;
	cin.getline(string, 500);
	n = strlen(string);

	for (int i = n; i >= 0; i--)
	{
		cout << string[i] ;
	}

		cout << "\n\nArray size = " << n+1 << endl;
	
	_getch ();
	return 0;
}