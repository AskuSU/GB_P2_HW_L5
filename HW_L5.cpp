﻿#include<iostream>
#include<windows.h>
#include<vector>
#include<set>
#include"MyLib.h"
//#include"Task1.h"
#include"Task4.h"

using namespace std;
using namespace myLib;

void Task1()
{
	cout << "Работа с контейнерным классом:" << endl;
	
}

void Task2()
{
	cout << "Поиск кол-ва различных элементов: " << endl;
	
}


void Task3()
{
	cout << "\t\tСыграем в Blackjack!\n\n" << endl << endl;
	int numPlayers = 0;
	while (numPlayers < 1 || numPlayers > 7)
	{
		cout << "На сколько игроков раздаем? (1 - 7): ";
		numPlayers = getUserInput<uint16_t>();
	}
	vector<string> names;
	string name;
	for (int i = 0; i < numPlayers; ++i)
	{
		cout << "Введите имя "<< i + 1 << " игрока: ";
		name = getUserInputTxt();
		names.push_back(name);
	}
	cout << endl;
	// игровой цикл
	Game aGame(names);
	char again = 'y';
	while (again != 'n' && again != 'N')
	{
		aGame.Play();
		cout << "\nХотите сыграть заново? (Y/N): ";
		cin >> again;
	}
}

void Task4()
{

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
		taskNumber = getUserSelectedTask(4);
		switch (taskNumber)
		{
		case 1: Task1();
			break;
		case 2: Task2();
			break;
		case 3: Task3();
			break;
		case 4: Task4();
			break;
		}
		cout << endl;
	}
}