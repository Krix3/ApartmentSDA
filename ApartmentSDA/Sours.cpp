#include<iostream>
#include<windows.h>
#include"Kvartira.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Kvartira s1(40, 6000000);
	Kvartira s2(50, 7000000);


	s1.show();
	s2.show();

	if (s2 == s1)
	{
		cout << "������� ������� ����������" << endl << endl;
	}
	else
	{
		cout << "������� ������� ������" << endl << endl;
	}


	s1 = s2;

	s1.show();
	s2.show();
	if (s1 == s2)
	{
		cout << "������� ������� ����������" << endl << endl;
	}
	else
	{
		cout << "������� ������� ������" << endl << endl;
	}


	Kvartira s3(60, 8000000);
	s3.show();
	s1.show();

	if (s3 > s1)
	{
		cout << "���� ���� �������� ������" << endl << endl;
	}
	else
	{
		cout << "���� ���� �������� ������" << endl;
	}

}