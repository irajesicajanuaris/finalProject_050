#include <iostream>
using namespace std;

class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;

public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;

	}

	virtual float hitungNilaiAkhir() { return 0; }
	virtual void cekKelulusan() { }
	virtual void input() { }

	void setP(float nilai) {
		this->presensi = nilai;
	}
	float getP() {
		return presensi;
	}
	void setA(float nilai) {
		this->activity = nilai;
	}
	float getA() {
		return activity;
	}
	void setE(float nilai) {
		this->exercise = nilai;
	}
	float getE() {
		return exercise;
	}
	void setUA(float nilai) {
		this->tugasAkhir = nilai;
	}
	float getUA() {
		return tugasAkhir;
	}

};
class Pemrograman : public MataKuliah {
public:
	float hitungNilaiAkhir() {
		return (getP() * 0.1) + (getA() * 0.2) + (getE() * 0.3) + (getUA() * 0.4);
	}
	
	void CekKelulusan() {
		float NA = hitungNilaiAkhir();
		cout << "Nilai Akhir = " << NA << endl;
		if (NA > 75) {
			cout << "Selamat, Anda lulus mata kuliah Pemrograman dengan nilai akhir : " << NA << endl;
		}
		else {
			cout << "Maaf, Anda tidak lulus mata kuliah Pemrograman" << endl;
		}
	}

	void input() {
		cout << "Masukkan Nilai Presensi : ";
		float p = getP();
		cin >> p;
		setP(p);

		cout << "Masukkan Nilai Activity : ";
		float A = getA();
		cin >> A;
		setA(A);

		cout << "Masukkan Nilai Exercise : ";
		float E = getE();
		cin >> E;
		setE(E);

		cout << "Masukkan Nilai Tugas Akhir : ";
		float UA = getUA();
		cin >> UA;
		setUA(UA); 
	}
};

int main() {
	cout << "Program dibuat" << endl;

	char pilihan;
	
		pmgrm;
		pmgrm.input();
		
}
