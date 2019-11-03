#include <iostream> // kamil surma patryk klimek // poprawka w domu Patryk Klimek
using namespace std;
int main (){
	int i, j;
	cout << "Podaj cyfre do zgadniêcia" << endl;
	cin >> i;
	do {
	    cout << "Jak¹ cyfrê zgadujesz?" << endl;
		cin >> j;
		if(i == j) {
			cout << "Brawo, wygra³eœ!";
			}
        else if (i>j){
            cout << "podales za mala" << endl;
            }
        else if (i<j){
            cout <<"podales za duza" << endl;
        }
	}while(i != j);
    
    return 0;
}
