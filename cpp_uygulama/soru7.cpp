/* girilen sayinin faktoriyelini döndüren program */
#include <iostream>

using namespace std;

int main(int argc, char** argv){
	
	int a;
	cout<<"sayiyi giriniz: ";
	cin>>a;
	cout << endl;
		
	int faktoriyel=1;
	if(a<=10 and a>0){
		for (int b=1; b<=a; b++){
			faktoriyel = faktoriyel * b;
			}
		cout <<"faktoriyeli: " << faktoriyel << endl;
		
	}
		

	
	return 0;
}
