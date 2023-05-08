
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
}
