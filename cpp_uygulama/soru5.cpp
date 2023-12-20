/*  girilen 5 sayinin sadece tek olanlarýný topla */
#include <iostream>

using namespace std;

int main(int argc, char** argv){
	
	int a;
	int toplam = 0;
	
	for (int i=1; i<=5; i++){
		cout<<i<<". sayiyi giriniz: ";
		cin>>a;
		cout << endl;
		if (a%2==1)
			toplam+=a;
	}
	
	
	cout<< "Sayilarin toplami: " << toplam << endl;
	
	
	return 0;
}
