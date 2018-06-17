//#include <iostream>
//using namespace std;
//class FreezingAndBoilingPoints{
//	float temprature;
//public:
//	void setTemprature(float t){
//		temprature = t;
//	}
//	bool isEthylFreezing(){
//		if (temprature <= -173)
//			return true;
//		else
//			return false;
//	}
//
//	bool isEthylBoiling(){
//		if (temprature >=172)
//			return true;
//		else
//			return false;
//	}
//
//	bool isOxygenFreezing(){
//		if (temprature <=-362)
//			return true;
//		else
//			return false;
//	}
//	
//	bool  isOxygenBoiling(){
//		if (temprature >= -306)
//			return true;
//		else
//			return false;
//	}
//
//	bool isWaterFreezing(){
//		if (temprature <=32)
//			return true;
//		else
//			return false;
//	}
//
//	bool isWaterBoiling(){
//		if (temprature >= 212)
//			return true;
//		else
//			return false;
//	}
//};
//int main()
//{
//	bool var;
//
//	float temprature;
//	FreezingAndBoilingPoints test;
//	
//	cout << "Enter temprature in foriegnhieght ";
//	cin >> temprature;
//	test.setTemprature(temprature);
//
//	var = test.isEthylBoiling();
//	if (var)
//		cout << "Ethyle is boiling " << endl;
//
//	var = test.isEthylFreezing();
//	if (var)
//		cout << "Ethyle is freezing " << endl;
//
//	//cout << "And " << endl;
//	
//
//	var = test.isOxygenFreezing();
//	if (var)
//		cout << "Oxygen is freezing " << endl;
//
//	var = test.isOxygenBoiling();
//	if (var)
//		cout << "Oxygen is Boiling " << endl;
//
//	//cout << "And" << endl;
//	
//	
//	var = test.isWaterFreezing();
//	if (var)
//		cout << "Water is Freezing " << endl;
//
//	var = test.isWaterBoiling();
//	if (var)
//		cout << "Water is Boiling " << endl;
//
//
//}