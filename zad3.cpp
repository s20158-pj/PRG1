#include <iostream> // kamil surma patryk klimek // poprawka w domu Patryk Klimek
using namespace std;
int main (){
	int i, j;
	cout << "Podaj cyfre do zgadni�cia" << endl;
	cin >> i;
	do {
	    cout << "Jak� cyfr� zgadujesz?" << endl;
		cin >> j;
		if(i == j) {
			cout << "Brawo, wygra�e�!";
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
