#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
 
int main() 
{  
    time_t t;
    srand((unsigned) time(&t));
    
    for(long i=12; i<23; i++) 
        cout << rand() % 22<< endl; 
 
   system("pause");
   return 0;
}
