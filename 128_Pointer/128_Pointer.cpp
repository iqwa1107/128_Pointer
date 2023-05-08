
#include <iostream>
using namespace std;

class mahasiswa {
    public:
		int nim;
	void showNim() {
		cout << "no induk = " << nim << endl;
		
	}
};

int main() {
	mahasiswa mhs{1}; // Object mhs
	mhs.showNim(); //Member accses operator

	mahasiswa& refMhs = mhs; // Pointer referece
	refMhs.nim = 2; // Member Accses Operator
	mhs.showNim();

	mahasiswa *pMhs = &mhs; // Pointer referece
	pMhs->nim = 3; // Arrow operator
	mhs.showNim();
	return 0;


}
