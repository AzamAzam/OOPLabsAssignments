//#include <iostream>
//#include<string>
//#include <fstream>
//using namespace std;
//
//struct Division
//{
//	string name;
//	double sales[4];
//};
//
//
//
//int main(){
//	Division d[4];
//	fstream file;
//	int i = 0;
//	double totalQuarterSales[4] = { 0 };
//	double totalDivisionSales[4] = { 0 };
//	double totalSale=0;
//	double avgSaleForDivision[4] = { 0 };
//	int highQuarter, lowQuarter;
//	
//	file.open("Sales.txt", ios::in);
//	while (i<4)
//	{
//		
//		file >> d[i].name;
//	//	cout << d[i].name << endl;
//		for (int j = 0; j < 4; j++){
//			file >> d[i].sales[j];
//			totalDivisionSales[i] += d[i].sales[j];
//	//		cout << d[i].sales[j]<<" ";
//
//
//
//
//
//		}
//			avgSaleForDivision[i] = totalDivisionSales[i] / 4;
//		i++;
//		cout << endl;
//
//	}
////	calculet total quarteer sales high and low 
//
//	highQuarter = 0;
//	lowQuarter = 0;
//	for (int i = 0; i < 4; i++){
//		for (int j = 0; j < 4; j++){
//			totalQuarterSales[i] += d[j].sales[i];
//			}
//
//
//		totalSale += totalQuarterSales[i];
//		if (totalQuarterSales[i] < totalQuarterSales[lowQuarter])
//			lowQuarter = i;
//		if (totalQuarterSales[i]>totalQuarterSales[highQuarter])
//			highQuarter = i;
//			}
//
//	//cout << highQuarter+1 << " " << lowQuarter+1;
//
//	for (int i = 0; i < 4; i++){
//		cout << "Total Corporate sale for Quarter  " << i + 1 << " : " << totalQuarterSales[i] << endl;
//	}for (int i = 0; i < 4; i++){
//		cout << "total sale for Division " << d[i].name << " : " << totalDivisionSales[i] << endl;
//	}for (int i = 0; i < 4; i++){
//	cout << "Average sale for Division " << d[i].name << " : " << totalDivisionSales[i] / 4 << endl;
//		
//
//
//	}
//	cout << "Highest Quarter " << highQuarter+1 << endl;
//	cout << "Lowest Quarter " << lowQuarter + 1 << endl;
//
//
//}
//
