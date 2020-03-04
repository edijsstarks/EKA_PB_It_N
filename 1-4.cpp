#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	int x1, y1, x2, y2;
	
	cout <<"Ievadiet torna X kordinates:" << endl;
	cin >> x1;
	
	cout <<"Ievadiet torna Y kordinates:" << endl;
	cin >> y1;
	
	cout <<"Ievadiet jaunas pozicijas X kordinates:" << endl;
	cin >> x2;
	
	cout <<"Ievadiet jaunas pozicijas Y kordinates:" << endl;
	cin >> y2;
	
	if ( (x1==x2) || (y1==y2) )
	    cout << "Var" << endl;
	else
	    cout << "Nevar" << endl;
	
	system ("pause");
	return 0;
}
