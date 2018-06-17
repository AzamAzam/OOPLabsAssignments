//#include <iostream>
//using namespace std;
//class Home
//{
//	double payment;
//	double loan;
//	double rate;
//	double years;
//	double term;
//	double totalAmount;
//public:
////	void setPayment();
//	void setLoan(double);
//	void setInterestRate(double);
//	void setYears(double);
//	void  calcuTerm(double, double);
//	double getPayment();
//	double TotalAmount();
//
//};
//void Home::setLoan(double amount)
//{
//	loan = amount;
//}
//
//void Home::setInterestRate(double amount)
//{
//	rate = amount;
//}
//
//void Home::setYears(double x)
//{
//	years = x;
//}
//
//void  Home::calcuTerm(double rate, double year)
//{
//	term = pow((1 + rate / 12), 12 * year);
//	
//}
//
//double Home::getPayment()
//{
//	payment = (loan*(rate / 12) * term) / (term - 1);
//	return payment;
//}
//
//double Home::TotalAmount()
//{
//	totalAmount = payment*years * 12;
//	return totalAmount;
//}
//
//
//int main()
//{
//	double amount,loan , rate,years;
//	Home mortage;
//	
//	
//	do {
//		cout << " Enter Loan : ";
//		cin >> amount;
//		if (amount < 0)
//		{
//			cout << " Enter Amount (positive) : \n";
//		}
//	} while (amount < 0);
//	mortage.setLoan(amount);
//
//	do {
//		cout << " Enter interest RAte : ";
//		cin >> rate;
//		if (rate < 0)
//		{
//			cout << " Enter Rate (positive) : \n";
//		}
//	} while (rate < 0);
//	mortage.setInterestRate(rate);
//
//	do {
//		cout << " Enter Years : ";
//		cin >> years;
//		if (years < 0)
//		{
//			cout << " Enter Years (positive) : \n";
//		}
//	} while (years < 0);
//	mortage.setYears(years);
//
//
//	cout << "Monthly Payment = " << mortage.getPayment() << endl;
//	cout << "Total Amount = " << mortage.TotalAmount() << endl;
//
//}