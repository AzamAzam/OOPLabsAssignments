//#include <iostream>
//int getProdNUm();
//
//void displayProd(int[],char[][30],char[][10],double[],int);
//void calcSales(int[], double[], double[]);
//
//using namespace std;
//int main()
//{
//	int prodNUM,index;
//	int const NUM_PRODS = 9;
//	int const TITLE_SIZE = 30;
//	int const DESC_SIZE = 10;
//	int const MIN_PRODNUM = 914;
//	int const MAX_PRODNUM = 922;
//	int i;
//	int id[NUM_PRODS] = {914,915,916,917,918,919,920,921,922};
//	char tiltle[NUM_PRODS][TITLE_SIZE] = { "Six steps to leadership", "Six steps to leadership ", "the Road tp excellence ", "Seven Lessons of Quality", "Seven Lessons of Quality", "Seven Lessons of Quality","Teams Are made, not Born ","Leadership for future","Leadership for future" };
//	char description[NUM_PRODS][DESC_SIZE] = { "BOOK", "Audio CD", "DVD", "BOOK", "Audio CD", "DVD", "BOOK", "BOOK","Audio CD" };
//	double prices[NUM_PRODS] = {12.95,14.95,18.95,16.95,21.95,31.95,14.95,14.95,16.95};
//	int units[NUM_PRODS];
//	double sales[NUM_PRODS];
//	prodNUM=getProdNUm();
//
//	
//
//	cout << "Enter sales :" << endl;
//	for (i = 0; i < NUM_PRODS; i++)
//	{
//		cout << id[i] << "\t\t ";
//		cin >> units[i];
//	}
//	for (i = 0; i < NUM_PRODS; i++)
//	{
//		cout << id[i] << "\t\t ";
//		cout << units[i]*prices[i]<<endl;
//	}
//
//}
//int getProdNUm()
//{
//	int n;
//	cout << "Enter product Number : ";
//	do {
//
//		cin >> n;
//		if (n >= 922 || n <= 914)
//		
//		
//			cout << "YOU enterd a wrong ProdNumb \n Enter between 914 to 922 :";
//	} while ((n >= 922 || n <= 914));
//	return n;
//}
//
//void displayProd(int prodN[], char titl[][30], char des[][10], double p[],int index)
//{
//	cout << "ProdNumber : " << prodN[index]<<endl;
//	cout << "Title of Product : " << titl[index] << endl;
//	cout << "description of Product : " << des[index]<<endl;
//	cout << "Price of this  product : $" << p[index]<<endl;
//	
//}
//void calcSales(int units[], double prices[], double sales[])
//{
//
//}