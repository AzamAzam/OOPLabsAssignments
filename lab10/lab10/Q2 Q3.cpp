#include <iostream >
#include <string >
#include <fstream>

using namespace std;
int main()
{
	
	string read;
	fstream fileIn, fileout;
	fileIn.open("Original file.txt", ios::in);
	fileout.open("Encrypted file.txt", ios::out);
	while (!fileIn.eof())
	{
		 getline(fileIn,read);
		 cout << read;
		 for (int i = 0; i < read.size(); i++){
			 read[i] += 10;
			 fileout << read[i];
		 }
		 fileout << endl;
	}
	fileout.close();
	fileIn.close();
	fileIn.open("Encrypted file.txt", ios::in);
	fileout.open("decrypted file.txt", ios::out);


	while (!fileIn.eof())
	{
		getline(fileIn, read);
		for (int i = 0; i < read.size(); i++){

			read[i] -= 10;
			fileout << read[i];
							
		}
		cout << read << endl;
		fileout << endl;
	
	}
}