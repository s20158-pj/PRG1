#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){

  string tab[10][10];
  int numberOfPoints = 0;

    cin >> numberOfPoints;
    for(int i =0; i<10; i++)
    {
        for(int j =0; j<10; j++)
        {
            tab[i][j]=" ";
        }
    }
    int num1=0;
    int num2=0;
    for(int i =0; i<numberOfPoints; i++)
    {
        cin >> num1;
        cin >> num2;
        tab[num1][num2]="*";
    }
    for(int i =9; i>=0; i--)
    {
        for(int j =0; j<10; j++)
        {
            cout <<tab[i][j];
        }
        cout << endl;
    }
return 0;
}
