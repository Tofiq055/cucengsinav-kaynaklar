// ch01_01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;
class myclass {
private:
	int a;
public:
	int b;
	void set_a(int num);
	int get_a();
};

void myclass::set_a(int num)
{
	a = num;
}
int myclass::get_a()
{
	return a;
}

int main()
{
	myclass object_1, object_2;
	object_1.set_a(15); object_2.set_a(22);
	object_2.b=110;
	//object_2.a = 110;
	cout << "The value of a in object_1 : " << object_1.get_a() << endl;
	cout << "The value of a in object_2 : " << object_2.get_a() << endl;
	cout << "The value of b in object_2 : " << object_2.b << endl;
	return 0;
}


