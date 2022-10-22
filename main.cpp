#include <iostream>
using namespace std;


int main() {
	int slices = 0;
	int ppl = 0;
	int rest = 0;
	int pplSlices = 0;
	cout << "Podaj liczbe kawalkow pizzy: " << endl;
	cin >> slices;
	cout << "Podaj liczbe gosci: " << endl;
	cin >> ppl;


	while (slices >= ppl) {
        slices -=ppl;
        pplSlices +=1;
	}
    rest += slices;
	cout << "Kazdy z gosci dostanie kawalkow: " << pplSlices << " a organizator dostanie: " << rest;
	return 0;
}