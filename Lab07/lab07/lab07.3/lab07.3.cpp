#include <iostream>
using namespace std;
int main()
{
	int arr[] = { 10, 20, 30, 40 };
	int* p = arr;
	/*cout << "arr[0] = " << arr[0] << endl;
	cout << "*(ptr + 0) = " << *p << endl;

	cout << "arr[1] = " << arr[1] << endl;
	cout << "*(ptr + 1) = " << *(p + 1) << endl;

	cout << "arr[2] = " << arr[2] << endl;
	cout << "*(ptr + 2) = " << *(p + 2) << endl;

	cout << "arr[2] = " << arr[3] << endl;
	cout << "*(ptr + 2) = " << *(p + 3) << endl;*/

	for (int i = 0; i < 4; i++)
	{
		cout << *(p+i) << "\t";
	}
	return 0;
}