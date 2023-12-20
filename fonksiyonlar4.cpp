#include <iostream>
using namespace std;

void kareYap(int kare, char sekil);

int main(int argc, char** argv){
	int kare;
	char sekil;
	cout<<"kaça kaç boyutlu kare istersiniz" << endl;
	cin >> kare;
	cout<<"hangi şekilde olsun istersiniz." << endl;
	cin >> sekil;
	cout <<endl<<"--------------------------"<<endl;
	
	kareYap(kare, sekil);
	
	return 0;
}

void kareYap(int kare, char sekil){
	int adim;
	for (adim=0; adim<kare; adim++){
		for(int i=0; i<kare; i++)
		cout<<sekil << " ";
		cout<<endl;
	}
	
}
