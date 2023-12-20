#include <iostream>
using namespace std;

void yildiz(int x, char y);

int main(int argc, char** argv){
	cout<<"yildiz fonksiyonu cagirilacak" << endl;
	yildiz(20, '?');
	cout<<"yildiz fonksiyonu cagirildi." << endl;
	return 0;
}

void yildiz(int x, char y){
	for(int i=0; i<x; i++)
		cout<< y << " ";
		cout<<endl;
}
