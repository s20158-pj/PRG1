#include <iostream>
#include <vector>
using namespace std;
int main(){

  vector <int> tab;
  int x;
  do{
    cin >> x;
    tab.push_back(x);
  } while(x!=0);

  for(int i=0;i<tab.size()-1;i++){
    cout << tab[i] << " ";
  }
return 0;
}
