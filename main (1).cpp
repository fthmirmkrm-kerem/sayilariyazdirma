
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream dosya("DENEYAP.txt");
	for(int i=0; i<10; i++)
	{	int sayi;
		cin>>sayi;
		dosya<<sayi<<endl;
	}
	dosya.close();
	return 0;
}