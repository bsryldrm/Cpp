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
		system("CLS");
		cout<<"Ogrenci sistemine hos geldiniz" << endl;
		cout<<"Ogrenci eklemek icin : 1" << endl;
		cout<<"Ogrenci silmek icin : 2" << endl;
		cout<<"Ogrenci gostermek icin : 3" << endl;
		cout<<"Ogrenci sisteminden cikmak icin : 4" << endl;
		cout<<"Ogrenci bilgilerini düzenlemek icin : 5" << endl;	
		cin >> secim;
		
		switch (secim) {
			case 1:
				int sil;
                ogr.push_back(ogrenci());
                cout << "Ogrenci no: ";
                cin >> ogr[ogrSayisi].no;

                for (int j = 0; j < ogrSayisi; j++) {
                    if (ogr[j].no == ogr[ogrSayisi].no) {
                    	sil = ogr[j].no;
                        cout << "Ayni numaraya sahip ogrenci bulunmamali." << endl;
                        ogr.pop_back(); 
                        cin.ignore();cin.get();
                        break;
                    }
                }

                if (ogr[ogrSayisi].no != sil) {
                    cin.ignore();
                    cout << "Ogrenci ad: ";
                    getline(cin, ogr[ogrSayisi].ad);
                    cout << "Ogrenci soyad: ";
                    getline(cin, ogr[ogrSayisi].soyad);
                    cout << "Ogrenci yas: ";
                    cin >> ogr[ogrSayisi].yas;
                    ogrSayisi++;
                }
                break;
       
            case 2:
            	if (ogrSayisi > 0) {
                    int numara;
                    cout << "Sistemden silmek istediginiz ogrencinin numarasini giriniz: ";
                    cin >> numara;

                    for (int d = 0; d < ogrSayisi; d++) {
                        if (ogr[d].no == numara) {
                            ogr.erase(ogr.begin() + d);  // Silme iþlemi
                            ogrSayisi--;
                            cout << "Ogrenci silindi." << endl;
                            cin.ignore();cin.get();
                            break; 
                        }
                    }
                } else {
                    cout << "Silinecek ogrenci bulunmamaktadir." << endl;
                    cin.ignore();cin.get();
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
                        cin.ignore(); cin.get();
                    }
                } else {
                    cout << "Gosterilecek ögrenci bulunmamaktadir." << endl;
                    cin.ignore();cin.get();
                }
                break;
            case 4:
                cout << "Ogrenci sisteminden cykyldy." << endl;
                cin.ignore();cin.get();
                break;
                
            case 5:
            	cout << "Ogrenci no: ";
                cin >> ogr[ogrSayisi].no;

                for (int j = 0; j < ogrSayisi; j++) {
                    if (ogr[j].no == ogr[ogrSayisi].no) {
                    cin.ignore();
                    cout << "Ogrenci ad: ";
                    getline(cin, ogr[j].ad);
                    cout << "Ogrenci soyad: ";
                    getline(cin, ogr[j].soyad);
                    cout << "Ogrenci yas: ";
                    cin >> ogr[j].yas;
                    ogrSayisi++;
                    }
                }
                break;
            default:
                cout << "Gecersiz secim. Lütfen tekrar deneyin." << endl;
                cin.ignore();cin.get();
        }	
		
	}while(secim != 4);
	

	return 0;
}
