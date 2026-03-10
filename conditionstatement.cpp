#include <iostream>
using namespace std;

float bmi(float bb, float tb){
    return bb/(tb*tb);
}

string kondisi(float nilai){
    if(nilai < 18.5)
        return "Berat Badan Kurang";
    else if(nilai < 25)
        return "Berat Badan Normal";
    else if(nilai < 30)
        return "Berat Badan Kelebihan";
    else
        return "Obesitas";
}

int main(){

    cout<<"--- Selamat Datang Mahasiswa Kelas A 2025 ---"<<endl;

    return 0;
}