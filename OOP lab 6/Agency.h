#pragma once
#include <string>
#include "Admin.h"
#include "Tour.h"
#include "Tourist.h"

using namespace std;

class Agency{
public:
	string agency_name;
	string e_mail;
	int phone;
	Agency(Admin *admins, Tourist *tourists, Tour *tours, string agency_name, string e_mail, int phone, string owner, int numbers_of_employers, int numbers_of_customers, int level, float years_of_works){
		this->admins = admins;
		this->tourists = tourists;
		this->tours = tours;
		this->agency_name = agency_name;
		this->e_mail = e_mail;
		this->phone = phone;
		this->owner = owner;
		this->numbers_of_employers = numbers_of_employers;
		this->numbers_of_customers = numbers_of_customers;
		this->level = level;
		this->years_of_works = years_of_works;
	};
	Agency(){}
	~Agency(){
	};
	Agency Agency:: operator++(){// 1 �������������� ++
		years_of_works++;
		level++;
		return *this;
	}
	Agency Agency:: operator--(){// 1 �������������� --
		numbers_of_customers--;
		numbers_of_employers--;
		return *this;
	}
	int Agency::operator+(Agency op){// 2 �������������� +
		int temp = op.numbers_of_employers + numbers_of_employers;
		return temp;
	}
	int operator-(Agency op){// 2 �������������� -
		
		int temp =  numbers_of_employers - op.numbers_of_employers;
		return temp;
	}
	Agency operator*(Agency op){// 3 �������������� *
		Agency temp;
		temp.level = op.level*level;
		return temp;
	}
	Agency operator=(Agency op){// 3 �������������� =
		owner = op.owner;
		return *this;
	}
	Agency operator+=(Agency op){// 3 �������������� +=
		numbers_of_employers+=op.numbers_of_employers;
		return *this;
	}
	Agency operator-=(Agency op){// 3 �������������� -=
		numbers_of_employers -= op.numbers_of_employers;
		return *this;
	}
	Agency operator*=(Agency op){// 3 �������������� *=
		level *= op.level;
		return *this;
	}
	void operator[](int i){// 3 �������������� []
		if (numbers_of_customers > i) {
			level++;
		}
	}
	template<class T>// 4 ������ ��� ���� ��������
	const T& Max(const T& a, const T& b){
		return a > b ? a : b;
	}
	int getLevel(){
		return level;
	}
private:
	string owner;
	int numbers_of_employers;
	int numbers_of_customers;
	int level;
	float years_of_works;
	Admin *admins;
	Tourist *tourists;
	Tour *tours;
	
};