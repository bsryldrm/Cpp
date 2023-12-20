#include <iostream>

using namespace std;
int main(int argc, char** argv){ 
int sayi;
int toplam=0;
float ortalama;

for (int i=0;i<5;i++){
	cout <<i+1<<".sayi= ";
	cin >> sayi;
	toplam+=sayi;
}
	ortalama = toplam /5.0;
	cout << "sayilarin toplami=" <<toplam <<endl;
	cout << "ortalamasi =" <<ortalama <<endl;

	
	
	
	return 0;
}

