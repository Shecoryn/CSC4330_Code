#include<iostream> 
using namespace std; 
enum Spanish { 
Cero=0, Uno=1, Dos=2, Tres=3, Quatro=4, Cinco=5, Seis=6, Siete=7, Ocho=8, Nueve=9 
};
enum Indonesian { 
Nol=0, Satu=1, Dua=2, Tiga=3, Empat=4, Lima=5, Enam=6, Tujuh=7, Delapan=8, Sembinan=9 
}; 
int main(void){

cout << (Uno + Dua) << endl;
cout << (Empat - Dos) << endl;
cout << (Dos * Delapan) << endl; 
cout << (Delapan / Dos) << endl; 
 
cout << (Satu | Dos) << endl;
cout << (Dos & Empat) << endl;
cout << (Dua ^ Cinco) << endl;
cout << (Empat << 1) << endl;
cout << (Quatro >> 1) << endl;

int arr[Nueve]; 

int newNum = 5 + Tiga;

}