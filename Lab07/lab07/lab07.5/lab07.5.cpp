//คำสั่ง: เขียน Bubble Sort เพื่อเรียงข้อมูลจากมากไปน้อย โดยใช้ pointer ทั้งหมด
//เงื่อนไข : ห้ามใช้ arr[i] ให้ใช้* (p + j) เปรียบเทียบ และ swap ด้วย pointer


#include <iostream>
using namespace std;

void printArray(int* p, int size)
{
    for (int i = 0; i < size; i++)  
    {
        cout << *(p + i) << " ";
	}
	cout << endl;
}


void swapValue(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sortDescending(int* p, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (*(p + j) < *(p + j + 1))
            {
                swapValue((p + j), (p + j + 1));
            }
        }
	}
}


int main()
{
    int arr[] = { 5, 2, 9, 1, 3 };
    int size = 5;
	cout << "Before : ";
    printArray(arr, size);
    cout <<  "After  : ";
    sortDescending(arr, size);
    printArray(arr, size);
    return 0;
}