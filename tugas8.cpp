#include <iostream>
#include <math.h>

using namespace std;


int main(){

    cout<< "============== Selamat Datang ==============" << endl;
    cout<< "========= Yofhi Fauda Pradana (1A) =========" << endl;
    cout<< "============== Tugas Algoritma =============" << endl;
    cout<< "================= 21533425 ================="<< endl;
    cout<< endl;

cout<< "------------------------------------------------------------" << endl;
    cout << "\t\tProgram Dengan Menggunakan C++" << endl;
    cout<< "------------------------------------------------------------" << endl;
    cout << endl;
    
    cout << "1. (2x + 3y) (3z - 4y) " << endl;
    cout << "2. (3 + a/b)^m-1 " << endl;
    cout << "3. a/b + 6 / x - y/z " << endl;
    cout << "4. X^7 / a + b " << endl;
    cout << "5. Akar 5x^3 - 4y^7 " << endl;
    cout << "6. log (a - b) " << endl;
    cout << "7. e^xy - |x^2 - y^2| " << endl;
    cout << "8. Keluar Dari Program " << endl;
	double pilihan;
    for (double pilihan= 1; pilihan<=INFINITY; pilihan++){
    cout << "Masukan pilihan sesuai nomer : ";
    cin >> pilihan;
    if (pilihan == 1){
    	double nomer1;
        nomer1();
    }else if (pilihan == 2){
        double nomer2;
       nomer2(); 
    }else if (pilihan == 3){
        double nomer3;
        nomer3();
    }else if (pilihan == 4){
        double nomer4;
        nomer4();
    }else if (pilihan == 5){
        double nomer5;
        nomer5();
    }else if (pilihan == 6){
        double nomer6;
        nomer6();
    }else if (pilihan == 7){
        double nomer7;
        nomer7();
    }else if(pilihan == 8) {
        double keluar;
        keluar();
        break;
    }else {
        cout << "Nomer Yang Anda Masukan Salah ";
        cout<< "------------------------------------------------------------" << endl;
    }
    


    }
    return 0;
}

void nomer1(void){
     double nilai, x, y1, z, y2;

    cout << "Masukan Nilai X : ";
    cin >> x;
    cout << "Masukan Nilai Y1 : ";
    cin >> y1;
    cout << "Masukan Nilai Z : ";
    cin >> z;
    cout << "Masukan Nilai Y2 : ";
    cin >> y2;
    nilai = (2 * x + 3 * y1) * (3 * z + 4 * y2);
   cout << "Hasil dari (2x + 3y) (3z - 4y) Adalah : " << nilai << endl;
   
}

void nomer2(void){
    double nilai, hasil, a, b, m;

    cout << "Masukan Nilai A : ";
    cin >> a;
    cout << "Masukan Nilai B : ";
    cin >> b;
    cout << "Masukan Nilai M : ";
    cin >> m;
    nilai = 3 + a / b;
    m = m - 1;
    hasil = pow (nilai, m);
   cout << "Hasil dari (3 + a/b)^m-1 Adalah : " << hasil << endl;
       
}

void nomer3(void){
     double a, b, x, y, z;
    double nilai1, nilai2, hasil;

    cout << "Masukan Nilai A : ";
    cin >> a;
    cout << "Masukan Nilai B : ";
    cin >> b;
    nilai1 = a / b + 6;
    cout << "Masukan Nilai X : ";
    cin >> x;
    cout << "Masukan Nilai Y : ";
    cin >> y;
    cout << "Masukan Nilai Z : ";
    cin  >> z;
    nilai2 = x - y / z;
    hasil = nilai1 / nilai2;
    cout << "Hasil dari a/b + 6/ x - y/z Adalah : " << hasil << endl;
    
}

void nomer4(void){
     double a, b, x, nilai, hasil;

    cout << "Masukan Nilai X : ";
    cin >> x;
    cout << "Masukan Nilai A : ";
    cin >> a;
    cout << "Masukan Nilai b : ";
    cin >> b;
    nilai = pow(x, 7) / (a + b);
    cout << "Hasil dari X^7/ a + b Adalah : " << nilai<< endl;
    
}

void nomer5(void){
     double x, y, nilai1, nilai2, nilai3, hasil;

    cout << "Masukan Nilai X : ";
    cin >> x;
    cout << "Masukan Nilai Y : ";
    cin >> y;
    nilai1 = pow(x, 3) * 5;
    nilai2 = pow(y, 7) * 4;
    nilai3 = nilai1 - nilai2;
    hasil = sqrt(nilai3);
    cout << "Hasil dari Akar 5x^3 - 4y^7 Adalah : " << hasil << endl;
    
}

void nomer6(void){
    double a, b, nilai1, hasil;

    cout << "Masukan Nilai A : ";
    cin >> a;
    cout << "Masukan Nilai B : ";
    cin >> b;
    nilai1 = log(a-b);
    hasil = pow (nilai1, 2);
    cout << "Hasil dari log(a-b)^2 adalah : "<< hasil << endl;
    
}

void nomer7(void){
    double e, xy, x1, y1, nilai1, nilai2, nilai3, hasil;
    
    cout << "Masukan Nlai E :  ";
    cin >> e;
    cout << "Masukan NIlai XY : ";
    cin >> xy;
    nilai1 = pow(e,  xy);
    cout << "Masukan Nilai X1 : ";
    cin >> x1;
    cout << "Masukan Nilai Y1 : ";
    cin >> y1;
    nilai2 = pow(x1, 2) - (y1, 2);
    nilai3 = nilai1 - nilai2;
    hasil = abs(nilai3);
     cout << "Hasil dari e^xy - |x^2 - y^2| Adalah : " << hasil << endl;

}

void keluar(void){
    cout << " Terima Kasih Telah Menggunakan Program Ini ";
        cout<< "------------------------------------------------------------" << endl;
}
