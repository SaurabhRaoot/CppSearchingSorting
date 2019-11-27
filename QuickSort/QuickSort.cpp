// QuickSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;

const int MAX = 10;

class CQuickSort
{
	int nList[MAX];
	int nCount;

public:
	CQuickSort(void);
	~CQuickSort(void);
	void AddElement(int nItem);
	int GetCount();
	static int Split(int*, int, int);
	void QuickSort(int nLower, int nUpper);
	void Display();

};

CQuickSort::CQuickSort(void)
{
	nCount = 0;
	for (int nI = 0; nI < MAX; nI++)
	{
		nList[nI] = 0;
	}
}
CQuickSort::~CQuickSort(void)
{
}
void CQuickSort::AddElement(int nItem)
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
void CQuickSort::Display()
{
	std::cout << "List";
	for (int nI = 0; nI < nCount; nI++)
	{
		std::cout << " :: ";
		std::cout << nList[nI];
	}
	std::cout << "\n";
}
int CQuickSort::GetCount()
{
	return nCount;
}
void CQuickSort::QuickSort(int nLower, int nUpper)
{
	if (nUpper > nLower)
	{
		int nI = Split(nList, nLower, nUpper);
		QuickSort(nLower, nI - 1);
		QuickSort(nI + 1, nUpper);
	}
}
int CQuickSort::Split(int* ptrList, int nLower, int nUpper)
{
	int i, p, q, t;

	p = nLower + 1;
	q = nUpper;
	i = ptrList[nLower];

	while (q >= p)
	{
		while (ptrList[p] < i)
			p++;
		while (ptrList[q] > i)
			q--;
		if (q > p)
		{
			t = ptrList[p];
			ptrList[p] = ptrList[q];
			ptrList[q] = t;

		}
	}
	t = ptrList[nLower];
	ptrList[nLower] = ptrList[q];
	ptrList[q] = t;

	return q;
}
void main()
{
	CQuickSort objList;

	objList.AddElement(11);
	objList.AddElement(2);
	objList.AddElement(9);
	objList.AddElement(13);
	objList.AddElement(57);
	objList.AddElement(25);
	objList.AddElement(17);
	objList.AddElement(1);
	objList.AddElement(90);
	objList.AddElement(3);


	std::cout << "\===== Quick Sort ===== \n";
	std::cout << "\nBefore Sorting ";
	objList.Display();

	int nCount = objList.GetCount();

	objList.QuickSort(0, nCount - 1);
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
