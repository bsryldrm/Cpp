#include <iostream>
#include <vector>

using namespace std;

struct ogrenci{
	int no;
	string ad;
	string soyad;
	int yas;
};

int main(int argc, char** argv) {
	vector<ogrenci>ogr;
	int i = 0;
	int secim;
	int ogrSayisi;
	
	do{
		cout<<"Ogrenci sistemine hos geldiniz" << endl;
		cout<<"Ogrenci eklemek icin : 1" << endl;
		cout<<"Ogrenci silmek icin : 2" << endl;
		cout<<"Ogrenci gostermek icin : 3" << endl;
		cout<<"Ogrenci sisteminden cikmak icin : 4" << endl;
		cin >> secim;
		
		switch (secim) {
            case 1:
                ogr.push_back(ogrenci());
                cout << "Ogrenci no: ";
                cin >> ogr[ogrSayisi].no;
                cin.ignore();
                cout << "Ogrenci ad: ";
                getline(cin, ogr[ogrSayisi].ad);
                cout << "Ogrenci soyad: ";
                getline(cin, ogr[ogrSayisi].soyad);
                cout << "Ogrenci yas: ";
                cin >> ogr[ogrSayisi].yas;
                ogrSayisi++;
                break;
            case 2:
                if (ogrSayisi > 0) {
                    ogr.pop_back();
                    ogrSayisi--;
                    cout << "Son eklenen ogrenci silindi." << endl;
                } else {
                    cout << "Silinecek ogrenci bulunmamaktadýr." << endl;
                }
                break;
            case 3:
                if (ogrSayisi > 0) {
                    for (int i = 0; i < ogrSayisi; i++) {
                        cout << "Ogrenci No: " << ogr[i].no << endl;
                        cout << "Ogrenci Ad: " << ogr[i].ad << endl;
                        cout << "Ogrenci Soyad: " << ogr[i].soyad << endl;
                        cout << "Ogrenci Yas: " << ogr[i].yas << endl;
                        cout << "--------------------------" << endl;
                    }
                } else {
                    cout << "Gosterilecek ögrenci bulunmamaktadir." << endl;
                }
                break;
            case 4:
                cout << "Ogrenci sisteminden cýkýldý." << endl;
                break;
            default:
                cout << "Gecersiz secim. Lütfen tekrar deneyin." << endl;
        }	
		
	}while(secim != 4);
	

	return 0;
}
