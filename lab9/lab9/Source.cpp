//#include <iostream>
//#include <fstream >
//using namespace std;
//int main()
//{
//	int num ,sum=0,count=0 ,i;
//	fstream file;
//	file.open("Random.txt", ios::out);
//	for ( i = 0; i < 1000; i++){
//		num = rand() % 10000 + 1;
//		file  << num<<" ";
//	//	cout << num << " ";
//	}
//	//cout << i;
//	file.close();
//	file.open("Random.txt", ios::in);
//	while (file >> num){
//		
//		sum += num;
//		count++;
//
//	}
//
//	cout << "Number of Numbers = " << count << endl;
//	cout << "SUM = " << sum<<endl;
//	cout << "Average = " << sum / float(count) << endl;
//
//}