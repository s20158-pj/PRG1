#include <iostream>
#include <vector>
using namespace std;
int main(){

  vector <string> tab;
  vector <string> tabTwo;
  int number;
  int numberTwo;
  int i;
  string name;
  string class_name;

  cin >> number;
  cin >> numberTwo;

  for(i=0; i<number; i++){
  cin >> class_name;
  tab.push_back(class_name);
  }

  for(i=0; i<numberTwo; i++){
  cin >> name;
  tabTwo.push_back(name);
  }

  for(i=0; i<tabTwo.size(); i++){
  unsigned int tmp=0;
  tmp=rand()%tab.size();
  cout << tabTwo[i] << "-" << tab[tmp] <<  endl;
  tab.erase(tab.begin()+tmp);
  }
return 0;
}
