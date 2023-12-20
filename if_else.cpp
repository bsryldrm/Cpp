#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int sicaklik;
	cout<<"sicaklik giriniz: ";
	cin>> sicaklik;
	
	if (sicaklik < 0)
	 cout<<sicaklik<<"cok soguk";
	else if (sicaklik >= 0 and sicaklik <= 15)
		cout<<sicaklik<<"soguk";
	else if (sicaklik >= 16 and sicaklik <= 25)
		cout<<sicaklik<<"ilik";
	else if (sicaklik >= 26 and sicaklik <= 29)
		cout<<sicaklik<<"sicak";
	else
		cout<<sicaklik<<"cok sicak";
	
	return 0;
}
