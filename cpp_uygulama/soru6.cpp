/* kullanýcýdan tek sayi girene kadar devam eden ve 
girilen sayilarin toplamini isteyen program yaziniz.
*/

#include <iostream>

using namespace std;

int main(int argc, char** argv){
	
	int a= 0;
	int toplam = 0;
	
	while(a%2 !=1){
		cout<<"sayiyi giriniz: ";
		cin>>a;
		cout << endl;
		
		if (a%2==0)
			toplam+=a;
				
	}
			
	cout<< "sayilarin toplami: " << toplam << endl;
		
	return 0;
}
