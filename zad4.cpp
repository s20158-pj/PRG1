#include <iostream> //kamil surma patryk klimek // poprawka w domu Patryk Klimek
using namespace std;
int main(){
    
    cout << "Podaj cyfre" << endl;
    int i;
    int suma;
    suma = 0;
    do{
        cin >> i;
        suma += i;
    }
    while(i!=0);
    
    cout << suma;
    
    return 0;
}