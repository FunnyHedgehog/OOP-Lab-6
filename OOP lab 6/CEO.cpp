#include "CEO.h"
using namespace std;
CEO::CEO(string name, string surname, string english_level, int age, string sex, string position, string education, int business_trip, int number_of_subordinates, int work_experience, int salary) : Man(name, surname, english_level, sex, age), adr(salary){
	this->position = position;
	this->salary = salary;
	this->education = education;
	this->business_trip = business_trip;
	this->work_experience = work_experience;
	this->number_of_subordinates = number_of_subordinates;
}
CEO::CEO(string name, string surname, string english_level, int age, string sex, string position, string education, int work_experience) :Man(name, surname, english_level, sex, age), adr(salary){
	this->position = position;
	this->education = education;
	this->work_experience = work_experience;
}

int CEO::getWorkExperience(){
	return work_experience;
}
int CEO::getSalary(){
	return salary;
}
void CEO::setSalary(int salary){
	this->salary = salary;
}
void CEO::English(){
	if (english_level == "C"){
		setSalary(getSalary() + 100);
	}
	cout << "Virtual metod of CEO" << endl;
}