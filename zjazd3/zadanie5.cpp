#include <iostream>
#include <string>
#include <iterator>
using namespace std;

int main(){

  string word;
  cin >> word;
  char x;
  for(int i=0; word[i] !=0; i++){
    x = word[i];
    x = tolower(x);
    word[i] = x;
  }
  reverse_iterator<string::iterator> r = word.rbegin();
  string reverse(r, word.rend());
  if (word==reverse)
    cout << 1;
  else 
    cout << 0;
return 0;
}
