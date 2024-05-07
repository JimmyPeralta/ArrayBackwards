#include <iostream>

using namespace std;

int main()
{
	int x = 0;
	int array[5];

	do
	{
		cout << "Enter Number " << x + 1 << " ==> ";
		cin >> array[x];
		x++;
	} while (x < 5);

	cout << "The Numbers Backward " << endl;
	x = 4;
	do
	{
		cout << "Numbers " << x + 1 << "==> " << array[x] << endl;
		x--;
	} while (x >= 0);
}



