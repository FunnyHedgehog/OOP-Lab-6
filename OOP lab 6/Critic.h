#pragma once
#include <string>
#include "Man.h"
#include "Tourist.h"

class Critic : public Tour, protected Man{//10
private:
	int mark;
public:
	Critic(Tour tour, string name, string surname, string english_level, string sex, int age, int mark) :Tour(tour.country, tour.lenght, tour.rate, tour.getHotel(), tour.getRoomType(), tour.getTransport(), tour.getPrice(), tour.getDepartureDate()), Man(name, surname, english_level, sex, age){
	}
	Critic(){};
	void setMark(Tour tour, int mark){
		cout << "Mark of tour to " << tour.country << " is " << mark << endl;
	}
	void English(){
		if (english_level == "C"){
			setPrice(getPrice() - 50);
		}
	}
	~Critic(){
		cout << "Critic destructor" << endl;
	}
};