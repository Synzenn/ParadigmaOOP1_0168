#ifndef IBU_H
#define IBU_H

class ibu {
public:
	string nama;
	vektor <anak*> daftar_anak;

	ibu(string pNama) :nama(pNama) {
		cout << "ibu" \"" << nama << "\" tidak ada\n";
	}
	~ibu() {
		cout << "ibu \"" << nama << "\"tidak ada\n";
	}
	void tambahAnak(anak*);
	void cetakAnak();
};

void ibu::tambahanak(anak* pAnak) {
	daftar_anak.push_back(pAnak);
}
