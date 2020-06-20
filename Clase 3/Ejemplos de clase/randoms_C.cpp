#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main()
{
    srand(time(NULL));

    cout<< "Tiro un dado "<<rand() % 6 + 1<<endl;

    return 0; 
}