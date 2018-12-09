#pragma once
#include "string"
#include "Tour.h"
#include"Tourist.h"
#include "CEO.h"
#include "Man.h"

using namespace std;
class Admin :public CEO{
public:
	void English();
	Admin(string, string, string, int, string, string, string, int, int);
	Admin(){}
	Admin(const Admin &obj) :CEO(obj.name, obj.surname, obj.english_level, obj.age, obj.sex, obj.position, obj.education, obj.work_experience)//конструктор копіювання
	{}
	~Admin(){
		cout << "Object Admin was destructed" << endl;
	}

	void AddTour(string, int, int, string, string, string, int, int);
	void WriteTourToFile(Tour);
	void ReadTourFromFile(Tour *, int);
	void PlaceOrder(Tour, Tourist);

	friend void ChangePosition(Admin &);//10

	void setTourist(Tourist *tourist)
	{
		tourists = tourist;
	}
	static int getSalary(){//12
		return salary;
	}
	void setSalary(int salary){//12
		this->salary = salary;
	}


	Admin func(){//15
		Admin admin;
		admin.setSalary(800);
		return admin;
	}
private:
	Tourist *tourists;
	string position;
	static int salary;//12

};
