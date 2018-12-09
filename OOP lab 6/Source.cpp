#include <iostream>
#include <string>
#include "Tour.h"
#include "Tourist.h"
#include "Admin.h"
#include "Man.h"
#include "CEO.h"
#include "Agency.h"
#include<vector>

using namespace std;
int Admin::salary;
int Tour::object_count;
class AdminAdding{};
class TouristAdding{};
class TourAdding{};
void main(){
	CEO ceo("Katya", "Petrova", "B", 30, "W", "CEO", "high", 10);
	ceo.personal_data.setCryptoMoney(2000.00);
	ceo.personal_data.setStatus(ceo);
	cout << ceo.personal_data.status << endl;
	
	try{
		vector<Tour> tour_mass(4);

		CEO *a = new Admin;//3
		if (a == NULL){
			throw(AdminAdding());
		}
		delete a;
		Admin *admin = new Admin("Petro", "Petrov", "B", 25, "man", "manager", "High", 4, 1000);
		if (admin == NULL){
			throw(AdminAdding());
		}
		admin->AddTour("Ukraine", 10, 4, "HUkraine", "a", "bus", 11, 200);
		admin->AddTour("France", 11, 5, "HFrance", "b", "plane", 15, 1000);
		cout << "Hello! The rules of the program. If you want to say yes, press 1, if no - press 0" << endl;
		Tourist *tourist = new Tourist("Ivan", "Ivanov", "C", "man", 25, 2010, 65442, 63592565, 63474, 10000);
		if (tourist == NULL){
			throw(TouristAdding());
		}
		admin->setTourist(tourist);
		cout << "Count of added tours " << Tour::ObjectCount() << endl;//8
		cout << "Enter price?" << endl;
		Tour *tour_mass = new Tour[4];//це не працює без Tour(){},динамічна пам'ять,масив об'єктів
		
		if (tour_mass == NULL){
			throw(TourAdding());
		}
		admin->CEO::English();//11 обхід віртуальної ф-ії
		Agency agency(admin, tourist, tour_mass, "Around the world", "Email", 123456, "Owner", 2, 2, 1, 2);
		Agency agency1(admin, tourist, tour_mass, "Around the world1", "Email1", 654321, "Owner1", 3, 4, 5, 3);
		agency++;
		agency1--;
		int add = agency + agency1;
		int subtraction = agency - agency1;
		int multiply = agency - agency1;
		agency = agency1;
		agency += agency1;
		agency -= agency1;
		agency[1];
		cout << agency.Max(agency.getLevel(), agency1.getLevel()) << endl;
		admin->ReadTourFromFile(tour_mass, 4);
		int count_orders = 0;
		string country_tour;
		int price;
		cin >> price;
		count_orders++;
		tourist->ChooseTourForMoney(tour_mass, price, 4, *admin);
		bool yes_no = 0;
		cout << "Do you need other or one more tour?" << endl;
		cin >> yes_no;
		if (yes_no == 1){
			cout << "Enter country:" << endl;
			cin >> country_tour;
		}
		if (yes_no == 1){
			count_orders++;
			tourist->ChooseTour(tour_mass, country_tour, 2, *admin);
		}
		cout << "Do you want pay for order(s)" << endl;
		cin >> yes_no;

		if (yes_no == 1){
			cout << "Last price your orders is " << tourist->GetOrdersPrice(count_orders) << ". Do you want pay by card: " << tourist->getCardNumber() << " ?" << endl;
		}
		cin >> yes_no;
		if (yes_no == 1){
			tourist->PayForTour(tourist->GetOrdersPrice(count_orders));
		}
		else{

			cout << "Please, enter new cardnumber" << endl;
			int cardnumber;
			cin >> cardnumber;
			tourist->setCardNumber(cardnumber);
			if (tourist->getCardNumber() % 2 == 0){
				tourist->PayForTour();
			}
			else{
				tourist->PayForTour(tourist->GetOrdersPrice(count_orders));
			}

		}

	}
	catch (AdminAdding()){
		cout << "Object Admin was not created" << endl;
	}
	catch (TouristAdding()){
		cout << "Object Tourist was not created" << endl;
	}
	catch (TourAdding()){
		cout << "Objects Tour was not created" << endl;
	}

	cin.get();
	cin.get();
}