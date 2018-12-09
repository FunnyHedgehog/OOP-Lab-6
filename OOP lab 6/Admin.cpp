#include <fstream>
#include"Admin.h"
#include"Tour.h"

Admin::Admin(string name, string surname, string english_level, int age, string sex, string position, string education, int work_experience, int salary) :CEO(name, surname, english_level, age, sex, position, education, work_experience){
	this->salary = salary;
}

void Admin::AddTour(string country, int lenght, int rate, string hotel, string room_type, string transport, int price, int departure_date){
	Tour tour(country, lenght, rate, hotel, room_type, transport, price, departure_date);
	WriteTourToFile(tour);
}
void Admin::WriteTourToFile(Tour tour){
	ofstream file("Tours.data", ios::app);
	file.write((char *)&tour, sizeof(Tour));
	file.close();
}
void Admin::ReadTourFromFile(Tour *tour, int n){
	ifstream file("Tours.data");
	for (int i = 0; i < n; i++){
		file.read((char *)&tour[i], sizeof(Tour));
	}
	file.close();
}
void Admin::English(){
	if (english_level == "B"){
		setSalary(getSalary() + 100);
	}
	cout << "Virtual metod of Admin" << endl;
}