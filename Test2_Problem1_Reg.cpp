#include<iostream> 
using namespace std; 
enum Rainbow { 
Red, Orange, Yellow, Green, Blue, Indigo, Violet
};
enum Week { 
Mon, Tue, Wed, Thu, Fri, Sat, Sun
}; 
int main(void){

cout << (Red + Yellow) << endl;
cout << (Sat - Mon) << endl;
cout << (Yellow * Violet) << endl; 
cout << (Green / Tue) << endl; 
 
cout << (Red | Mon) << endl;
cout << (Indigo & Violet) << endl;
cout << (Wed ^ Sat) << endl;
cout << (Green << 1) << endl;
cout << (Thu >> 1) << endl;

int arr[Violet]; 

int newThing = Fri + Sun;

}