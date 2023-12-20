/* girilen sayinin faktoriyelini fonksiyon kullanarak döndüren program */
#include <iostream>

using namespace std;

int faktoriyel(int a);

int main(int argc, char** argv){
	
	int a;
	
	cout<<"sayiyi giriniz: ";
	cin>>a;
	cout << endl;
	cout<<faktoriyel(a);
	
	return 0;
}

int faktoriyel(int a){
	int faktoriyel=1;
		
	for (int b=1; b<=a; b++){
		faktoriyel = faktoriyel * b;
	}
	return faktoriyel;
	
}
