#include"parking.h"
#include <iostream>
using namespace std;


int ParkedCar::get_parked_minutes(){
	return numberOfMinutesParked;
}

int ParkingMeter::get_mintues_purchased(){
	return MinutesPurchased;
}

int ParkedCar::get_purchased_mintues()
{
	int min;
	min = car1.get_mintues_purchased();

	return  min;
}
double ParkingTicket::calculate_fine(int min)
{
	double fine;
	if (min<60)
	fine = 25;
	if (min > 60){
		min = min - 60;

		fine += 10 * (int (min / 60)+1);
	}
	return fine;
}

void  ParkedCar::show_information()
{
	cout << "Model  : " << model << endl;
	cout << "Color  : " << color << endl;
	cout << " Lisence NO : " << licenseNumber << endl;
	cout << "MintuesParked :  " << numberOfMinutesParked << endl;
	cout << "Minutes Purchased  " << car1.get_mintues_purchased()<<endl;

}
void PoliceOfficer::GenerateTicket(ParkedCar* car)
{
	int i;
	double fine; 
	for (i = 0; i < 4; i++)
	if (car[i].get_parked_minutes() > car[i].get_purchased_mintues())
	{
		ParkingTicket t1;
		int extraTime;
		extraTime = car[i].get_parked_minutes() - car[i].get_purchased_mintues();
		
		car[i].show_information();
		fine = t1.calculate_fine(extraTime);
		cout << " fine " << fine << endl << endl;
	}

}