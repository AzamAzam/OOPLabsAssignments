//#include <iostream>
//using namespace std;
//class Population {
//	int people;
//	int numberOFBirths;
//	int numberOfDeaths;
//public:
//	void setpeople(int n){
//		people = n;
//	}
//
//	void setNumberOfBirths(int n){
//		numberOFBirths = n;
//	}
//
//	void setNumberOfDeaths(int n){
//		numberOfDeaths = n;
//	}
//
//	double getDeathRate(){
//		return(float(numberOfDeaths)/people);
//	}
//
//	double getBirthRate(){
//		return (float(numberOFBirths)/people);
//	}
//
//};
//int main()
//{
//	Population popul;
//	int n;
//	
//	do{
//		cout << "Enter Population (number of poeple is alwalys greater than 0): ";
//		cin >> n;
//	} while (n < 1);
//
//	popul.setpeople(n);
//	
//	do{
//		cout << "Enter Number of Births (number of poeple is alwalys greater than orequla to  0): ";
//		cin >> n;
//	} while (n < 0);
//
//	popul.setNumberOfBirths(n);
//	
//	do{
//		cout << "Enter Number of Deaths (number of poeple is alwalys greater than orequla to  0): ";
//		cin >> n;
//	} while (n < 0);
//
//	popul.setNumberOfDeaths(n);
//
//	cout << "Birth Rate =  " << popul.getBirthRate() << endl;
//
//	cout << "Death Rate =  " << popul.getDeathRate() << endl;
//}