#include <iostream>
using namespace std;

double luas, alas, tinggi;

void procedurinput(){
cout << "masukan nilai alas : ";
cin >> alas;

cout << "masukan nilai tinggi : ";
cin >> tinggi;
}

void procedurHitungluas(){
    luas = 0.5 * alas * tinggi;    
}
void proceduroutput (){
    cout << "luas segitiga = " << luas << endl;
}

int main (){
    procedurinput ();
    procedurHitungluas();
    proceduroutput();
}
