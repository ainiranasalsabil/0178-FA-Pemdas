#include <iostream>
#include <string>
using namespace std;

class MasukUniversitas {
private:
	int uangPendaftaran;
	int uangSemesterPertama;
	int uangBangunan;
	int totalBiaya;
	string namaJalurMasuk;
	// isi daftar variable yang dibutuhkan di bawah ini
public:
	MasukUniversitas() {
		uangPendaftaran = 0;
	}
	virtual void namaJalurMasuk() {
		cout << "nama Jalur masuk : " << endl;
	}
	virtual float hitungTotalBiaya() { return; }
	// isi disini dengan fungsi virtual yang dibutuhkan
	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = nilai;
	}
	float getUangPendaftaran() {
		return uangPendaftaran;
	}
	// isi setter dan getter variable yang dibutuhkan di bawah ini
	void setuangSemesterPertama(int nilai) {
		this->uangSemesterPertama = nilai;
	}
	float getUangSemesterPertama() {
		return uangSemesterPertama;
	}
	void setuangBangunan(int nilai) {
		this->uangBangunan = nilai;
	}
	float getUangBangunan() {
		return uangBangunan;
	}
	virtual void tampilkanTotalBiaya() { return; }
	void settotalBiaya(int nilai) {
		this->totalBiaya = nilai;
	}
	float gettotalBiaya() {
		return totalBiaya;
	}
	virtual void input() {

		cout << "Masukan Uang pendaftaran =";
		cin >> uangPendaftaran;
		cout << "Masukan Semester pertama  =";
		cin >> uangSemesterPertama;
		cout << "Masukan uang bangunan = ";
		cin >> uangBangunan;
	}

};
class SNBT : public MasukUniversitas {
public:
	void input() {

		cout << "Masukan Uang pendaftaran =" << endl;
		cout << "Masukan Semester pertama  =" << endl;
		cout << "Masukan uang bangunan = " << endl;
	}

	float  hitungTotalBiaya()
	{
		return uangPendaftaran + uangsemesterPertama + uangBangunan;
	}
	void display() {
		cout << " totalnya :" << hitungTotalBiaya() << endl;
	}
};
class SNBP : public MasukUniversitas {
	// isi disini untuk melengkapi class SNBP
};
int main() {
	// isi disini untuk fungsi main
}
//Logika perhitungannya adalah total biaya = uang pendaftaran + uang
//semester pertama + uang bangunan.Kelas ini juga memiliki metode tampilkanTotalBiaya yang
//menampilkan total biaya dan memberikan rekomendasi berdasarkan kategori biaya(mahal,
//	sedang, atau murah).
//  metode hitungTotalBiaya dengan logika total biaya = uang pendaftaran + uang
//semester pertama.Kelas ini juga memiliki metode tampilkanTotalBiaya yang menampilkan total
//biaya dan memberikan rekomendasi berdasarkan kategori biaya(mahal, sedang, atau murah).
//Terakhir silahkan buat sebuh menu untuk memilih akan SNBP atau SNBT.