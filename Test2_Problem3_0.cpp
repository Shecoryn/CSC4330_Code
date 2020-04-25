#include<iostream> 
using namespace std; 
int statically ()
{
  int a[1000];
}
int stackally ()
{
  int b[1000];
  for (int i=0 ; i<1000 ; i++)
        b[i] = i;
}
int heapally ()
{
  int* a[1000];
  for (int i=0 ; i<1000 ; i++)
        a[i] = i;
}

int main ()
{
  double timeItTakes;
  clock_t tStart = clock();
    for (int i=0 ; i<100000 ; i++)
        statically()
    double staticTime = static_cast<double>(clock() - static_cast<double>(tStart)/static_cast<double>(CLOCKS_PER_SEC));
    cout << "Array on the static time is " << staticTime;
    for (int i=0 ; i<100000 ; i++)
        stackally()
    double stackTime = static_cast<double>(clock() - static_cast<double>(tStart)/static_cast<double>(CLOCKS_PER_SEC));
    cout << "Array on the stack time is " << stackTime;
    for (int i=0 ; i<100000 ; i++)
        heapally();
    double heapTime = static_cast<double>(clock() - static_cast<double>(tStart)/static_cast<double>(CLOCKS_PER_SEC));
    cout << "Array on the heap time is " << heapTime;
}