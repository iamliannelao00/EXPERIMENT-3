#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main ()
{
	int arr [10], i, j, temp;
	float o, sum;

	cout << "Enter Array Elements: "<< endl;

	for (i = 0; i <	10; i++)
	{
		cin >> arr[i] >> setprecision (2) >> fixed;
	}

	for (i=0; i< 10; i++)
	{
		for (j=i +1; j<10; j++)
		{
			for (i = 1; i < 10; i++)
			{
			if (arr[i] > arr [j])
			{
				temp = arr [i];
				arr[i] = arr[j];
				arr[j] = temp;

			}
			}					
		}
	}
	o = arr [0];
	sum=0;
	for (i=0; i < 10 ; i++)
	{ 
		if (o > arr[i])
			o = arr[i];
			sum += arr[i];

		if (arr[0] < arr[i])
		arr[0] = arr[i];

	}
	
	cout << "The smallest integer is: " << o << setprecision (2) << fixed << endl;
	cout << "The largest integer is: " << temp << setprecision (2) << fixed << endl;
	cout << "The total is: " << sum << setprecision (2) << fixed << endl;
	cout << "The average is: " << sum / 2 << setprecision (2) << fixed << endl;

_getch();
return 0;
}
