//#include <iostream>
//#include <string>
//#include <fstream>
//using namespace std;
//void arrayToFile(string,int [],int );
//void fileToArray(string, int[], int);
//int main()
//{
//	int *arr1,*arr2;
//	int size;
//	string fileName;
//	cout << "Enter size : ";
//	cin >> size;
//	arr1= new int[size];
//	cout << "Enter "<<size << " Numbers  : ";
//	for (int i = 0; i < size; i++){
//		
//		cin >> arr1[i];
//	}
//	cout << "Enter file name : ";
//	cin >> fileName;
//	arrayToFile(fileName, arr1, size);
//	arr2 = new int[size];
//	fileToArray(fileName, arr2, size);
//	cout << "Values are in file : " << endl;
//	for (int i = 0; i < size; i++){
//		cout <<arr2[i]<<" ";
//	}
//	cout << endl;
//}
//void arrayToFile(string name ,int arr[],int size){
//	fstream file;
//	file.open(name, ios::out | ios::binary);
//	if (!file)
//		cout << "File does not exists ";
//	else
//	{
//		for (int i = 0; i < size;i++)
//		file << arr[i] << " ";
//	}
//	file.close();
//}
//void fileToArray(string name, int arr[], int size)
//{
//	fstream file;
//	file.open(name, ios::binary||ios::in);
//	if (!file)
//		cout << "File does not exists ";
//	else
//	{
//		for (int i = 0; i < size; i++)
//			file >> arr[i] ;
//	}
//	file.close();
//}