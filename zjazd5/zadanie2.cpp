#include <iostream>
#include <vector>
using namespace std;
int main(){

  vector <int> tab;
  double srednia;
  int x;
  do{
    cin >> x;
    tab.push_back(x);
  } while(x!=0);

  for(int i=0;i<tab.size()-1;i++){
 srednia+=tab[i];
 
  }
srednia=srednia/(tab.size()-1);
cout << srednia;
return 0;
}
