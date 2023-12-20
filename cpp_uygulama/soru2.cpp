#include <iostream>

using namespace std;

int main(int argc, char** argv){
	
	int a;
	cout<<"Bir sayi giriniz:";
	cin>>a;
	
	if (a<0)
		cout<<"sayi negatiftir";
	if (a>0)
		cout<<"sayi pozitiftir";
	else
		cout<<"sayi sifirdir.";	
	
	
	return 0;
}
