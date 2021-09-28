#include <iostream>
//Question 1
//11641584
using namespace std;
//functions to calculate dog age in human years
//d=d*16+31
//h=(d-31)/16
    int d=1;
    float g=1;
int calcDogsAge(float g)
{   g= g*7;
    cout<<g<<endl;
}
int calcDogsAge(int d)
{
    d=(d*16)+31;
    cout<<d<<endl;
}


int main()
{
    cout << "Hello User welcome to the dog years program, see ages for dogs" << endl;
    calcDogsAge(d);
    calcDogsAge(g);

    return 0;
}
