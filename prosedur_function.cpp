#include <iostream>
using namespace std;

double alas, tinggi;

void procedurinput(){
cout << "masukan nilai alas : ";
cin >> alas;

cout << "masukan nilai tinggi : ";
cin >> tinggi;
}

double Hitungluas(){
    return 0.5 * alas * tinggi;    
}
void proceduroutput (){
    cout << "luas segitiga = " << Hitungluas() << endl;
}
int main (){
    procedurinput ();
    proceduroutput();
}
