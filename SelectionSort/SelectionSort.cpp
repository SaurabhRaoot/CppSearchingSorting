// SelectionSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;

const int MAX = 10;

class CSelectionSort
{
	int nList[MAX];
	int nCount;

public:
	CSelectionSort(void);
	~CSelectionSort(void);
	void AddElement(int nItem);
	void Sort();
	void Display();

};

CSelectionSort::CSelectionSort(void)
{
	nCount = 0;
	for (int nI = 0; nI < MAX; nI++)
	{
		nList[nI] = 0;
	}
}

CSelectionSort::~CSelectionSort(void)
{
}

void CSelectionSort::AddElement(int nItem)
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
void CSelectionSort::Display()
{
	std::cout << "List";
	for (int nI = 0; nI < nCount; nI++)
	{
		std::cout << " :: ";
		std::cout << nList[nI];
	}
	std::cout << "\n";
}

void CSelectionSort::Sort()
{
	int nTemp;
	for (int nIteration = 0; nIteration <= nCount - 2; nIteration++)
	{
		for (int nListCounter = nIteration + 1; nListCounter <= nCount - 1; nListCounter++)
		{
			if (nList[nIteration] > nList[nListCounter])
			{
				nTemp = nList[nIteration];
				nList[nIteration] = nList[nListCounter];
				nList[nListCounter] = nTemp;
			}
		}
	}

}

void main()
{
	CSelectionSort objList;

	objList.AddElement(8);
	objList.AddElement(6);
	objList.AddElement(4);
	objList.AddElement(2);
	objList.AddElement(5);
	objList.AddElement(1);

	std::cout << "\===== Selection Sort ===== \n";
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
