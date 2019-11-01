#include<iostream> //Kamil Surma Patryk Klimek // poprawka w domu Patryk Klimek
using namespace std;

int main ()
{
  cout << "Poda liczbe:";
  int wielkosc;
  cin >> wielkosc;

  int z = 1;
  for (int i = 0; i <= wielkosc; i++){
      for (int j = wielkosc; j > i; j--){
	  cout << " ";	
	}
      cout << "*";	
      if (i > 0){
	    for (int k = 1; k <= z; k++){
	      cout << " ";
	    }
	  z += 2;
	  cout << "*";
	  }
      cout << endl;	
    }

  z -= 4;
  for (int i = 0; i <= wielkosc - 1; i++){
      for (int j = 0; j <= i; j++){
	  cout << " ";
	  }
      cout << "*";
      for (int k = 1; k <= z; k++){
	  cout << " ";
	}
      z -= 2;
      if (i != wielkosc - 1){
	  cout << "*";
	}
      cout << endl;
  }
  return 0;
}