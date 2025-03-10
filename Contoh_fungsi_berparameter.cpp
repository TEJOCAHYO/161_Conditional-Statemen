#include <iostream>
using namespace std;


double luas, alas, tinggi;

void procedurInput(){
    cout << "masukan nilai alas : ";
    cin >> alas;

    cout << "masukan nilai tinggi :";
    cin >> tinggi;
}

double HitungLuas(){
    return 0.5 *alas * tinggi;
}
double HitungLuas2( double a, double b){
    return 0.5 * a * b;
}

void procedurOutput(){
    cout << "luas segitiga = " << HitungLuas() << endl;
}
void procedurOutput2(){
     cout << "luas segitiga = " << HitungLuas2(alas, tinggi) << endl;
}
   

int main (){
    procedurInput();
    procedurOutput();
    procedurOutput2();
}