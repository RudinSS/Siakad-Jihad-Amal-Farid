#include <iostream>
#include <vector>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main()
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;

	while(1) {
		cout << "Selamat datang di Universitas ITS" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " Mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " Dosen" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " Tenaga Kependidikan" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:
			{
				string id,nama,nrp,departemen;
				int dd,mm,yy,tahunmasuk, semesterke, skslulus;
				cout << "Masukkan ID : " << endl;
				cin >> id;
				cout << "Masukkan Nama : " << endl;
				cin.ignore();
				getline (cin,nama);
				cout << "Masukkan Tanggal Lahir (Angka) : " << endl;
				cin >> dd;
				cout << "Masukkan Bulan Lahir (Angka) : " << endl;
				cin >> mm;
				cout << "Masukkan Tahun Lahir (Angka) : " << endl;
				cin >> yy;
				cout << "Masukkan NRP : " << endl;
				cin >> nrp;
				cout << "Masukkan Departemen : " << endl;
				cin.ignore();
				getline (cin,departemen);
				cout << "Masukkan Tahun Masuk : " << endl;
				cin >> tahunmasuk;
				cout << "Semester Saat Ini : " << endl;
				cin >> semesterke;
				cout << "Jumlah SKS yang Diselesaikan : " << endl;
				cin >> skslulus;

				mahasiswa MHS (id, nama, dd, mm, yy, nrp, departemen, tahunmasuk, semesterke, skslulus);
				recMhs.push_back(MHS);
			}
				break;
			case 2:
			{
				string id,nama,npp,departemen;
				int dd,mm,yy,pendidikan;
				cout << "Masukkan ID : " << endl;
				cin >> id;
				cout << "Masukkan Nama : " << endl;
				cin.ignore();
				getline (cin,nama);
				cout << "Masukkan Tanggal Lahir (Angka)" << endl;
				cin >> dd;
				cout << "Masukkan Bulan Lahir (Angka)" << endl;
				cin >> mm;
				cout << "Masukkan Tahun Lahir (Angka)" << endl;
				cin >> yy;
				cout << "Masukkan NPP" << endl;
				cin >> npp;
				cout << "Masukkan Pendidikan" << endl;
				cin >> pendidikan;
				cout << "Masukkan Departemen" << endl;
				cin.ignore();
				getline (cin,departemen);

				dosen DSN(id, nama, dd, mm, yy, npp, departemen, pendidikan);
				recDosen.push_back(DSN);
			}
				break;
			case 3:
			{
				string id,nama,npp,unit;
				int dd,mm,yy;
				cout << "Masukkan ID : " << endl;
				cin >> id;
				cout << "Masukkan Nama : " << endl;
				cin.ignore();
				getline (cin,nama);
				cout << "Masukkan Tanggal Lahir (Angka)" << endl;
				cin >> dd;
				cout << "Masukkan Bulan Lahir (Angka)" << endl;
				cin >> mm;
				cout << "Masukkan Tahun Lahir (Angka)" << endl;
				cin >> yy;
				cout << "Masukkan NPP" << endl;
				cin >> npp;
				cout << "Masukkan unit" << endl;
				cin.ignore();
				getline (cin,unit);

				tendik TK (id, nama, dd, mm, yy, npp, unit);
				recTendik.push_back(TK);
			}
				break;
			case 4:
			{
				for(unsigned int i=0; i<recMhs.size();i++){
					cout << "Nama Mahasiswa: " << recMhs[i].getNama() << endl;
					cout << "Semester Mahasiswa: " << recMhs[i].getSemester() << endl;
					cout << "Jumlah SKS Mahasiswa: " << recMhs[i].getSKSLulus() << endl;
					cout << "Tanggal Lahir: " << recMhs[i].getTglLahir() << "/";
					cout << recMhs[i].getBulanLahir() << "/";
					cout << recMhs[i].getTahunLahir() <<  endl;
					cout << endl;
				}
			}
				break;
			case 5:
			{
				for(unsigned int i=0; i<recDosen.size();i++){
					cout << "Nama Dosen: " << recDosen[i].getNama() << endl;
					cout << "Pendidikan Dosen: " << recDosen[i].getPendidikan() << endl;
					cout << "Tanggal Lahir: " << recDosen[i].getTglLahir() << "/";
					cout << recDosen[i].getBulanLahir() << "/";
					cout << recDosen[i].getTahunLahir() <<  endl;
					cout << endl;
				}
			}
				break;
			case 6:
			{
				for(unsigned int i=0; i<recTendik.size();i++){
					cout << "Nama Tenaga Kependidikan: " << recTendik[i].getNama() << endl;
					cout << "NPP Tenaga Kependidikan: " << recTendik[i].getNPP() << endl;
					cout << "Tanggal Lahir: " << recTendik[i].getTglLahir() << "/";
					cout << recTendik[i].getBulanLahir() << "/";
					cout << recTendik[i].getTahunLahir() <<  endl;
					cout << endl;
				}
			}
				break;
		}
	}

	return 0;
}
