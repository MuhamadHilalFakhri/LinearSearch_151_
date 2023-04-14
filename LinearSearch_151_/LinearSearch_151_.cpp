#include <iostream>
using namespace std;


int arr[20];	// Array to be searched
int n;	// Number of elements in the array
int i;	// Index of array element 



void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 element.\n\n";
	}
	// Accept array element
	cout << "\n-------------------\n";
	cout << " Enter array element \n";
	cout << "\n-------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> arr[i];
	}
}

void LinearSearch()
{
	char ch;
	int comparison;		// Number of comparisons

	do
	{
		
		// Accept the number to be started
		cout << "\nEnter the element you want to search: ";	// Langkah 1
		int item;
		cin >> item;

		comparison = 0;
		for (i = 0; i < n; i++)								// Langkah 2,3, dan 4
		{
			comparison++;									// Langkah 5 a found
			if (arr[i] == item)
			{
				cout << "\n" << item << " found at position " << (i + 1) << endl;
				break;
			}

		}


	}
}