//#include <iostream >
//#include <fstream>
//void exitIt();
//using namespace std;
//int main(){
//	double anual_interest_rate,deposite,t_deposite=0,withdraw,t_withdraw=0,  total_interst = 0,balance ;
//		int i, months;
//		cout << "Enter Months : ";
//		cin >> months;
//		cout << "Enter Starting Balance RS. ";
//		cin >> balance;
//
//		cout << "Enter Annual interest Rate %: ";
//		do {
//			cin >> anual_interest_rate;
//			if (anual_interest_rate < 0)
//				cout << "ReEnter : ";
//		} while (anual_interest_rate < 0);
//		for(i = 0; i < months; i++){
//			cout << "Enter Deposit Balance for month  "<<i+1<<" Rs. ";
//			do {
//				cin >> deposite;
//				if (deposite < 0)
//					cout << "ReEnter : ";
//			} while (deposite < 0);
//
//			balance = balance + deposite;
//			t_deposite += deposite;
//
//			cout << "Enter Withdraw Balance for Month  " << i + 1<<" Rs. ";
//			do {
//				cin >> withdraw;
//				if (withdraw < 0)
//					cout << "ReEnter : ";
//			} while (withdraw < 0);
//			
//			balance = balance - withdraw;
//			t_withdraw += withdraw;
//			if (balance < 0)
//				exitIt();
//
//
//			balance += balance*(anual_interest_rate / 12) ;
//			total_interst += balance*(anual_interest_rate / 12);
//
//		}
//		cout << endl;
//		cout << "Balance = Rs. " << balance << endl;
//		cout << "Total Deposite =  Rs. " << t_deposite << endl;
//		cout << "Total Withdraw = Rs. " << t_withdraw << endl;
//		cout << "Total interest = Rs. " << total_interst << endl;
//
//		fstream file;
//		file.open("Info.txt",ios::out );
//		file  << "Months =  " << months << endl;
//		file  << "Balance = Rs. " << balance << endl;
//		file  << "Total Deposite =  Rs. " << t_deposite << endl;
//		file  << "Total Withdraw = Rs. " << t_withdraw << endl;
//		file  << "Total interest = Rs. " << total_interst << endl;
//		file.close();
//}
//void exitIt(){
//	cout << "Account has been closed  ";
//	exit(1);
//}