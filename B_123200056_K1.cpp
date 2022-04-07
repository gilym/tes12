#include <iostream>
using namespace std;
main()
{
	string nama;
	char status, jabatan,fungsional;

	cout<<"==========================Menentukan Jenis Tunjangan=========================="<<endl;
	
	cout<<"Silahkan Input Data Untuk Melihat Tunjangan "<<endl;
	cout<<"Masukan Nama: "; getline(cin,nama);
	cout<<"Masukan status (Y=Memiliki anak , T=Tidak memiliki anak) : ";cin>>status;
	cout<<"==========================================="<<endl;
	cout<<"****Pilihan Jabatan**** "<<endl;
	cout<<"1.Rektor, Warek, Dekan "<<endl;
	cout<<"2.Wadek,Kajur  "<<endl;
	cout<<"3.Sesjur,KoorProdi,Kalab "<<endl;
	cout<<"4.Tidak menjabat "<<endl;
	cout<<"==========================================="<<endl;
	cout<<"Masukan Pilihan Jabatan : ";cin>>jabatan;
	cout<<"==========================================="<<endl;
	cout<<"****Pilihan Fungsional **** "<<endl;
	cout<<"A.Asisten Ahli "<<endl;
	cout<<"B.Lektor  "<<endl;
	cout<<"C.Lektor Kepala "<<endl;
	cout<<"D.Tidak adaFungsional "<<endl;
	cout<<"==========================================="<<endl;
	cout<<"Masukan Pilihan Fungsional : ";cin>>fungsional;
	cout<<"==========================================="<<endl;
	cout<<"Hallo";
	cout<<"\nNama : "<<nama<<endl;
	cout<<"Tunjangan Yang Diperoeh : "<<endl;
	
	
		if ((status == 'Y' || status == 'T') && (jabatan == '1' || jabatan == '2' || jabatan == '3' || jabatan == '4') && (fungsional == 'A' || fungsional == 'B' || fungsional == 'C' || fungsional == 'D')){
		cout << "-Tunjangan Makan" << endl;
		
		if (status == 'Y' && (jabatan == '1' || jabatan == '2' || jabatan == '3' || jabatan == '4') && (fungsional == 'A' || fungsional == 'B' || fungsional == 'C' || fungsional == 'D')){
		cout << "-Tunjangan Anak"<< endl;
		
		if ((jabatan == '1' || jabatan == '2' || jabatan == '3') && (fungsional == 'A' ||fungsional == 'B' || fungsional == 'C')){
		cout << "-Tunjangan Jabatan"<< endl;
		
		if(fungsional == 'B' || fungsional == 'C'){
		cout << "-Tunjangan Rumah"<< endl;
		
				}
			}
		} 
		else if (status == 'T' && (jabatan == '1' ) && ( fungsional == 'B' || fungsional == 'C')){
		cout << "-Tunjangan Rumah"<< endl;
		
		if((jabatan == '1' || jabatan == '2' || jabatan == '3') && (fungsional == 'A' ||fungsional == 'B' || fungsional == 'C')){
		cout << "-Tunjangan Jabatan"<< endl;
			}
		}
	}
	else{
		cout << "Ada Input Yang Salah Dimasukkan ,Silakan Menginput Ulang Data Anda" << endl;
	} 	
cout<<"==========================================="<<endl;
}
