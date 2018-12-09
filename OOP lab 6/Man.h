#pragma once
#include<iostream>
#include "string"
using namespace std;
class Man{
public:
	string name;
	string surname;
	Man(string, string, string, string, int);
	Man(string, string, int);
	Man(){};
	int getAge();
	virtual ~Man(){//3
		cout << "Man Virtual destructor" << endl;
	};

	virtual void English() = 0;//чисто віртуальна ф-ія
	string english_level;
protected:
	int age;
	string sex;
private:

};