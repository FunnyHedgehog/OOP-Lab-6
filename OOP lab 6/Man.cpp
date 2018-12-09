#include "Man.h"
Man::Man(string name, string surname, string english_level, string sex, int age){
	this->name = name;
	this->surname = surname;
	this->english_level = english_level;
	this->sex = sex;
	this->age = age;
}
Man::Man(string, string, int){
	this->name = name;
	this->surname = surname;
	this->age = age;
};
int Man::getAge(){
	return age;
}