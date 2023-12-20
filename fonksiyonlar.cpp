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
	for(int i=0; i<20; i++)
		cout<<"* ";
		cout<<endl;
}
