#include <iostream>
using namespace std;

void yildiz();

int main(int argc, char** argv){
	cout<<"yildiz fonksiyonu cagirilacak" << endl;
	yildiz();
	cout<<"yildiz fonksiyonu cagirildi." << endl;
	return 0;
}

void yildiz(){
	int adim;
	for (adim=0; adim<7; adim++){
		for(int i=0; i<7; i++)
		cout<<"* ";
		cout<<endl;
	}
	
}
