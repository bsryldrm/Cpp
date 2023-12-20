#include <iostream>

using namespace std;

int main(int argc, char** argv){
	
	int a;
	int toplam = 0;
	int sayac=0;
	
	while(sayac<5){
		cout<<sayac +1<<". sayiyi giriniz: ";
		cin>>a;
		cout << endl;
		toplam+=a;
		sayac++;
	}
	
	cout<< "Sayilarin toplami: " << toplam << endl;
	
	
	return 0;
}
