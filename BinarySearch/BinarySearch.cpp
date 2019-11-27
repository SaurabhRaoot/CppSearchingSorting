#include <iostream> 
using namespace std;

int BinarySearch(int arrElements[], int firstIndex, int lastIndex, int elementToSearch)
{
	
	if (lastIndex >= firstIndex) 
	{
		int midOfArray = (firstIndex + lastIndex) / 2;

		if (arrElements[midOfArray] == elementToSearch)
		{
			return midOfArray;
		}
		else if (arrElements[midOfArray] > elementToSearch)
		{
			return BinarySearch(arrElements, firstIndex, midOfArray - 1, elementToSearch);
		}
		else
		{
			return BinarySearch(arrElements, midOfArray + 1, lastIndex, elementToSearch);
		}
	}

	return -1;
}

int main(void)
{
	int arrElements[] = { 1, 3, 5, 7, 11, 16, 21, 27, 35, 40 };
	int elementToSearch = 1;
	int sizeOfArray = sizeof(arrElements) / sizeof(arrElements[0]);
	int output = BinarySearch(arrElements, 0, sizeOfArray-1 ,  elementToSearch);

	if (output == -1)
	{
		cout << "Element is not present";
	}
	else
	{
		cout << "Element is present at index " << output;
	}

	int wait;
		cin >> wait;
	return 0;
}