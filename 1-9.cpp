#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    const int N = 20;
    double a[N];
    time_t t;
    srand((unsigned) time(&t));
    
    for(int i=0;i<N;++i)
        a[i] = rand()/(double)RAND_MAX - 100;
        
    for(int i=0;i<N;++i)
        cout << i << �: " << a[i] << endl;
        
    system("pause");
    return 0;
}

