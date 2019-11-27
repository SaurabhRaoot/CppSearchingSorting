#include<iostream>
using namespace std;
const int MAX = 10;

class CBinarySearch
{
	int nList[MAX];
	int nCount;
public:
	CBinarySearch(void);
	void AddItemToList(int nItem);
	void SearchItemInList(int nItem);
	void PrintList();
	~CBinarySearch(void);
};

CBinarySearch::CBinarySearch(void)
{
	nCount = 0;
	for (int i = 0; i < MAX; i++)
	{
		nList[i] = 0;
	}
}

CBinarySearch::~CBinarySearch(void) {}

void CBinarySearch::AddItemToList(int nItem)
{
	if (nCount < MAX)
	{
		nList[nCount] = nItem;
		nCount++;
	}
	else
		cout << "List is Full !!!!! \n";
}



void CBinarySearch::SearchItemInList(int nItem)
{
	int nMid, nLower = 0, nUpper = nCount - 1, flag = 1;
	for (; nLower <= nUpper;)
	{
		nMid = (nLower + nUpper) / 2;
		if (nList[nMid] == nItem)
		{
			cout << "\nNumber is present at " << nMid << " Location in List ";
			flag = 0;
			break;
		}
		if (nList[nMid] > nItem)
			nUpper = nMid - 1;
		else
			nLower = nMid + 1;
	}
	if (flag)
		cout << "\nNumber is not present in List\n";
}
void CBinarySearch::PrintList()
{
	cout << "\nPrinting List ";
	for (int nListCounter = 0; nListCounter < MAX; nListCounter++)
	{
		cout << " :: " << nList[nListCounter];
	}

}

int main()
{
	CBinarySearch objBSList;

	objBSList.AddItemToList(10);
	objBSList.AddItemToList(21);
	objBSList.AddItemToList(32);
	objBSList.AddItemToList(43);
	objBSList.AddItemToList(54);
	objBSList.AddItemToList(65);
	objBSList.AddItemToList(76);
	objBSList.AddItemToList(87);
	objBSList.AddItemToList(98);
	objBSList.AddItemToList(109);
	objBSList.AddItemToList(120);

	objBSList.PrintList();
	int nNumberToSearch;
	cout << "Enter number to Search :: ";
	cin >> nNumberToSearch;
	objBSList.SearchItemInList(nNumberToSearch);
	return 1;
}
