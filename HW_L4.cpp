#include<iostream>
#include<windows.h>
#include"MyLib.h"
#include"Task1.h"
//#include"Task2.h"
#include"Task3.h"

using namespace std;
using namespace myLib;

void Task1()
{
	cout << "Работа с контейнерным классом:" << endl;
	ArrayInt myArr(4);

	for (size_t i = 0; i < myArr.getLength(); i++)
	{
		myArr[i] = i;
	}
	myArr.print();

	myArr.push_back(10);
	myArr.print();
	//myArr.pop_back();
	//myArr.print();
	myArr.insertBefore(-1, 2);
	myArr.print();
	myArr.pop_front();
	myArr.print();
	myArr.insertBefore(-2, 3);
	myArr.print();
	myArr.pop_front();
	myArr.print();
	cout << endl;
}

void Task2()
{
	cout << "Поиск кол-ва различных элементов: " << endl;
	
}


void Task3()
{
	cout << "Работа с классом Колоды карт:" << endl << endl;

	Card card;
	card.setValue(Denomination::J, Suit::diamonds);
	cout << "кол-во очков: " << card.getValue() << endl;
}


int main()
{
	setlocale(LC_ALL, "RU");
	//srand(time(0));

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	unsigned short taskNumber = 0;
	while (true)
	{
		taskNumber = getUserSelectedTask(3);
		switch (taskNumber)
		{
		case 1: Task1();
			break;
		case 2: Task2();
			break;
		case 3: Task3();
			break;
		}
		cout << endl;
	}
}