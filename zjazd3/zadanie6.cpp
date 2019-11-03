#include <iostream>
using namespace std;

int main(){

  int x[3][3];
  int i = 0;
  int j = 0;
  for(i=0; i<=2; i++){
    for(j=0; j<=2; j++){
      cin >> x[i][j];
    }
  }
  cout << x[i][j];
return 0;
}
