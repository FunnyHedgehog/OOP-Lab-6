#pragma once
#include <string>
#include <iostream>
using namespace std;
class Tour{
public:
	string country;
	int lenght;
	int rate;
	static int ObjectCount(){//8
		return object_count;
	}
	static int object_count;//8
	Tour(string, int, int, string, string, string, int, int);
	explicit Tour(){};//16 //створення об'єкта тільки через (), явный крнструктор
	~Tour(){
		if (object_count > 0){
			object_count--;
		}
	}
	string getHotel();
	string getRoomType();
	string getTransport();
	int getPrice();
	int getDepartureDate();

	void setPrice(int);

	class TourDeleting{};
	void Service_Dinamic(Tour *array, int &lenAr, int number){//6
		try{
			if (number > lenAr || number < 1)
			{
				throw(TourDeleting());
			}

			for (int ix = number - 1; ix < lenAr - 1; ix++)
			{
				array[ix] = array[ix + 1];
			}
			delete[lenAr] array;
			lenAr--;
		}
		catch (TourDeleting){
			cout << "Wrong number of element" << endl;
		}
	}
	void Service_Static(Tour *array, int &lenAr, int number){//6
		try{
			if (number > lenAr || number < 1)
			{
				throw(TourDeleting());
			}

			for (int ix = number - 1; ix < lenAr - 1; ix++)
			{
				array[ix] = array[ix + 1];
			}
			lenAr--;
		}
		catch (TourDeleting){
			cout << "Wrong number of element" << endl;
		}

	}
private:
	string hotel;
	string room_type;
	string transport;
	int departure_date;
	int price;
};