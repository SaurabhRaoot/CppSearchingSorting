// LinearSearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;

const int MAX = 10;

class CLinearSearch
{
	int nList[MAX];
	int nCount;
public:
	CLinearSearch(void);
	void AddItemToList(int nItem);
	int SearchItemInList(int nItem);
	~CLinearSearch(void);
};


CLinearSearch::CLinearSearch(void)
{
	nCount = 0;
	for (int i = 0; i < MAX; i++)
	{
		nList[i] = 0;
	}
}

CLinearSearch::~CLinearSearch(void) {}

void CLinearSearch::AddItemToList(int nItem)
{
	if (nCount < MAX)
	{
		nList[nCount] = nItem;
		nCount++;
	}
	else
		cout << "List is Full !!!!! \n";
}

int CLinearSearch::SearchItemInList(int nItem)
{
	int i = 0;
	for (; i < MAX; i++)
	{
		if (nList[i] == nItem)
			break;
	}
	if (nCount == nItem)
		return -1;
	else
		return i;
}

int main()
{
	CLinearSearch objLSList;

	objLSList.AddItemToList(10);
	objLSList.AddItemToList(11);
	objLSList.AddItemToList(12);
	objLSList.AddItemToList(13);
	objLSList.AddItemToList(14);
	objLSList.AddItemToList(15);
	objLSList.AddItemToList(16);
	objLSList.AddItemToList(17);
	objLSList.AddItemToList(18);
	objLSList.AddItemToList(19);
	objLSList.AddItemToList(20);

	int nNumberToSearch;
	cout << "Enter number to Search :: ";
	cin >> nNumberToSearch;

	int nPostion = objLSList.SearchItemInList(nNumberToSearch);

	if (nPostion == -1)
		cout << "\nNumber is not present in List\n";
	else
		cout << "\nNumber is present at " << nPostion << " Location in List ";

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
