//คำสั่ง: เติมโค้ดเพื่อเปลี่ยนค่าของตัวแปร a ผ่าน pointer ให้เป็น 100 แล้วแสดงค่า a ออกมา
//เงื่อนไข : ต้องเปลี่ยนค่าด้วยการ dereference(*p = 100;) เท่านั้น
#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int* p = &a;
    // TODO  
	*p = 100;
    cout << "a = " << a << endl;
    return 0;
}

