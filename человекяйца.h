#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>

using namespace std;

class Яйца {
public:
	int человек = _getch();
};

class Человек {
public:

	//первый чар
	char яйца;
	//стринг
	string человек;
	//инт
	int Человек;
	//дабл 1
	double ЧЕловек;
	//дабл 2
	double челОвек;

	//ввод char
	void ЧеловеК(char &яйца) {
		SetConsoleCP(1251);
		cin >> яйца;
	}
	//ввод int
	void ЧЕЛОВЕК(int& яйца) {
		cin >> яйца;
	}
	//вывод int
	void чЕЛОВЕК(int яйца) {
		cout << яйца;
	}
	//вывод string
	void ЧЕЛовек(string яйца) {
		SetConsoleOutputCP(1251);
		cout << яйца;
	}
	//вывод double
	void ЧЕЛОвек(double яйца) {
		cout << яйца;
	}
	//вывод перехода строки
	void чЕЛовек() {
		cout << endl;
	}
	//ввод double
	void человЕК(double &человек) {
		cin >> человек;
	}
	//ввод string
	void челОВек(string& яйца) {
		SetConsoleCP(1251);
		getline(cin, яйца);
	}

	//проверка char
	void яЙца(char то_что_мы_сравниваем, char то_с_чем_мы_сравниваем, void(*function)(double, double, const std::string&), double a, double b, const std::string& c) {
		if (то_что_мы_сравниваем == то_с_чем_мы_сравниваем) {
			function(a, b, c);
		}
	}
	//проверка string
	void яЙцА(string то_что_мы_сравниваем, string то_с_чем_мы_сравниваем, void(*function)(double, double, const std::string&), double a, double b, const std::string& c) {
		if (то_что_мы_сравниваем == то_с_чем_мы_сравниваем) {
			function(a, b, c);
		}
	}
	//цикл
	void ЯЙца(int повторения, void(*яйца)(double, double, const std::string&), double первый_параметр, double второй_параметр, const std::string& третий_параметр) {
		for (int i = 0; i < повторения; i++) {
			яйца(первый_параметр, второй_параметр, третий_параметр);
		}
	}
	//задержка
	void чеЛовек(int ms) {
		Sleep(ms);
	}

};
