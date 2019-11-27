// InsertionSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;

const int MAX = 10;

class CInsertionSort
{
	int nList[MAX];
	int nCount;

public:
	CInsertionSort(void);
	~CInsertionSort(void);
	void AddElement(int nItem);
	void Sort();
	void Display();

};

CInsertionSort::CInsertionSort(void)
{
	nCount = 0;
	for (int nI = 0; nI < MAX; nI++)
	{
		nList[nI] = 0;
	}

}

CInsertionSort::~CInsertionSort(void)
{
}

void CInsertionSort::AddElement(int nItem)
{
	if (nCount < MAX)
	{
		nList[nCount] = nItem;
		nCount++;
	}
	else
	{
		std::cout << "List is Full !!!";
	}
}
void CInsertionSort::Display()
{
	std::cout << "List";
	for (int nI = 0; nI < nCount; nI++)
	{
		std::cout << " :: ";
		std::cout << nList[nI];
	}
	std::cout << "\n";
}

void CInsertionSort::Sort()
{
	int nTemp;
	for (int nIteration = 1; nIteration <= nCount - 1; nIteration++)
	{
		for (int nListCounter = 0; nListCounter < nIteration; nListCounter++)
		{
			if (nList[nListCounter] > nList[nIteration])
			{
				nTemp = nList[nListCounter];
				nList[nListCounter] = nList[nIteration];

				//shift element between nListCounter and nIteration
				int nShiftCounter;
				for (nShiftCounter = nIteration; nShiftCounter > nListCounter; nShiftCounter--)
				{
					nList[nShiftCounter] = nList[nShiftCounter - 1];
				}
				nList[nShiftCounter + 1] = nTemp;
			}
		}
	}
}
void main()
{
	CInsertionSort objList;

	objList.AddElement(25);
	objList.AddElement(17);
	objList.AddElement(31);
	objList.AddElement(13);
	objList.AddElement(2);

	std::cout << "\===== Insertion Sort ===== \n";
	std::cout << "\nBefore Sorting ";
	objList.Display();
	objList.Sort();
	std::cout << "\nAfter Sorting  ";
	objList.Display();

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
