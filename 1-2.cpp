#include <iostream>
using namespace std;

int main ()
{
	int a, b, c;
	
	cout <<"Ievadiet 1.malu:" << endl;
	cin >> a;
	cout <<"Ievadiet 2.malu:" << endl;
	cin >> b;
	cout <<"Ievadiet 3.malu:" << endl;
	cin >> c;
   
   if ( (a<b+c) || (b>a+c) || (c>a+b) )
        cout << "neeksiste" << endl;
        else
        cout << "eksiste" << endl;
	
	system ("pause");
	return 0;
}
