//#include <iostream >
//void selectionSort(int[],int );
//void bubbleSort(int [],int );
//using namespace std;
//int main()
//{
//	int i, j;
//	int arr1[8], arr2[8];
//	cout << "Enter 8 valus to sort :"<<endl;
//	for (i = 0; i < 8; i++)
//	{
//		cin >> arr1[i];
//
//	}
//	cout << "Enter another 8 value to sort :"<<endl;
//	for (i = 0; i < 8; i++)
//	{
//		cin >> arr2[i];
//
//	}
//	selectionSort(arr1,8);
//	cout << "1st Sorted Array is :" << endl;
//	for (i = 0; i < 8; i++)
//	{
//		cout << arr1[i] << ", ";
//	}
//	bubbleSort(arr2, 8);
//	cout <<endl<< "2nd Sorted Array is :" << endl;
//	for (i = 0; i < 8; i++)
//	{
//		cout << arr2[i] << ", ";
//	}
//}
//void selectionSort(int arr1[],int size)
//{
//	int i, j,min,temp,index;
//	for (i = 0; i < size; i++)
//	{
//		min = arr1[i];
//		index = i;
//		for (j = i+1; j < size; j++)
//		{
//			if (arr1[j] < min)
//			{
//				min = arr1[j];
//				index = j;
//			}
//		}
//
//		temp = arr1[i];
//		arr1[i] = arr1[index];
//		arr1[index] = temp;
//	}
//}
//void bubbleSort(int arr1[], int size)
//{
//	int i, j, min, temp, index;
//	for (i = 0; i < size; i++)
//	{
//		
//		for (j = 0 ; j < size-1-i; j++)
//		{
//			if (arr1[j] > arr1[j+1])
//			{
//				temp = arr1[j];
//				arr1[j] = arr1[j+1];
//				arr1[j+1] = temp;
//			}
//		}
//
//		
//	}
//}