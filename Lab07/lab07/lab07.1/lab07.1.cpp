// TODO: แสดงค่า score, address และ pointer
//โปรแกรมเพื่อแสดงค่า score, address ของ score (&score) และค่าที่เก็บใน pointer (ptr)
//เงื่อนไข: ต้องแสดงผลอย่างน้อย 3 บรรทัด ได้แก่ score, &score, ptr
#include <iostream>
using namespace std;
int main()
{
	int score = 50;
	int* ptr = &score;    // TODO    
	cout << "score         : " << score << endl;
	cout << "value   ptr   : " << *ptr << endl;
	cout << "address score : " << &score << endl;
	cout << "address ptr   : " << &ptr << endl;
	return 0;
}