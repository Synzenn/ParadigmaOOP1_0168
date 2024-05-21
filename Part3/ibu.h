#ifndef IBU_H
#define IBU-H

class ibu {
public:
	string nama;
	vektor <anak*> daftar_anak;

	ibu(string pNama) :nama(pNama) {
		cout << "ibu" \"" << nama << "\" tidak ada\n";
	}
	~ibu() {
		
	}
};
