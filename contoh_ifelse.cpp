#include <iostream>
using namespace std;


double luas, alas, tinggi;

void procedurInput(){
    cout << "masukan nilai alas : ";
    cin >> alas;

    cout << "masukan nilai tinggi :";
    cin >> tinggi;
}

double HitungLuas2( double a, double b){
    return 0.5 * a * b;
}

string ukuranSegitiga (double l){
    //jika luas > 60
    if (l > 60){
        return "besar";
    }
    else{
        return "kecil";
    }
}
void procedurOutput2(){
    cout << "luas segitiga = " << ukuranSegitiga(HitungLuas2 (alas, tinggi)) << endl;
}

   

int main (){
    procedurInput();
    procedurOutput2();
}