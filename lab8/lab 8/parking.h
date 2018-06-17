#ifndef PARKING_H
#define PARKIN_H
#include <string>
using namespace std;
class ParkingMeter
{
	int MinutesPurchased;

public:

	int get_mintues_purchased();
	ParkingMeter(int x = 0){
		MinutesPurchased = x;
	}
	//	~ParkingMeter();



};
class ParkedCar
{
	ParkingMeter car1;
	int  model;
	string color; 
	string licenseNumber;
	int numberOfMinutesParked;
	
	
public:
	ParkedCar():car1(0){
		model = 0;
		color = " ";
		licenseNumber = " ";
		numberOfMinutesParked = 0;


	}


	ParkedCar(int modl, string col, string lic, int minP, int purM) :car1(purM)
	{
		model = modl;
		color = col;
		licenseNumber=lic;
		numberOfMinutesParked = minP;

	}
	void show_information();
	int get_parked_minutes();
	int get_purchased_mintues();

//	~ParkedCar();


};


class ParkingTicket
{
public:
	double calculate_fine(int);
};


class PoliceOfficer
{
	string name;
	string badge;
public:
	void GenerateTicket(ParkedCar* );

};
#endif