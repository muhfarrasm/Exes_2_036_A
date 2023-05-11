#include <iostream>
using namespace std;

int farras[37];
int n;
int i;

void input()
{
	while (true)
	{
		cout << "Masukkan Element Array: ";
		cin >> n;

		if ((n > 0) && (n <= 37))
			break;

		else

			cout << "\nArray minimal 1 maksimal 37 : " << endl;

	}

	cout << endl;
	cout << "\n------------------\n" << endl;
	cout << "Entry Array Elements\n" << endl;
	cout << "--------------------\n" << endl;

	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> farras[i];
	}
}

void Binarysearch(int low, int high)
{
	int n, mid, item;
	while(true){
		cout << "\nEnter the element you want to search : ";
		cin >> item;

	}

	low = 0;
	high = n - 1;
	mid = (low + high) / 2;

	while (farras[mid] == item)
	{
		if (farras[mid] == item)
		{
			cout << "\n" << item << "\nfound" << endl;
		}
		else
		{
			cout << "\n Exit" << endl;
		}

	}
	
	while (item < farras[mid])
	{
		high = mid - 1;
	}

	while (item > farras[mid])
	{
		high = mid + 1;
	}


	if (low <= high)
	{
		mid = (low + high) / 2;
	}

	else
	{
		cout << "\n Not Found" << endl;
	}

}

void display()
{
	cout << "\nTampilkan data yang dicari" << endl;
	cout << "\n------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << farras[i] << " ";

	}
}

int main()
{
	input();
	Binarysearch(0, n - 1);
	display();
	return 0;
}


