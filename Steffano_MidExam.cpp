#include <iostream>
#include <string.h>
using namespace std;

//STEFFANO RONDONUWU
//MID EXAM
//OOP

struct student {
    string nama, nim, indeks;
    double tugas, kuis, uts, uas, hasil;
};


double nilaiakhir(int i, student siswa[]) { 
    return (siswa[i].tugas  * 0.2) + (siswa[i].kuis * 0.1) + (siswa[i].uts * 0.3) + (siswa[i].uas * 0.4);
}

string nilaitertinggi(student siswa[], int jml) {
    string ket;
    int max = 0;
    for (int i = 0; i < jml; i++) {
        if (max < siswa[i].hasil) {
            max = siswa[i].hasil;
            ket = siswa[i].nim;
        }
    }
    return ket;
}

int main(){
    const int jumlah_siswa = 10;
    student siswa[jumlah_siswa];
    int i;
    double hasil;

    cout << "---------------------------------------------------------------------" << endl;
    cout << "\t WELCOME \t\t\t" << endl;
    cout << "\t\t FINAL GRADE \t\t" << endl;
    cout << "\t STUDENT OF TI FIK UNKLAB \t" << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout << endl;

  
    i = 0;
    do {
    
        cout << "=====================================" << endl;
        cout << "\tENTER GRADE FOR STUDENT\t " << i+1 << endl;
        cout << "=====================================" << endl;

       

        cout << "ENTER STUDENT NAME-" << i+1 << endl;
        cin >> siswa[i].nama;

        \
        cout << "ATTENDANCE " << siswa[i].nama << ": ";
        cin >> siswa[i].nim;
        cout << endl;

        cout << "ASSIGNMENT " << siswa[i].nama << ": ";
        cin >> siswa[i].tugas;
        cout << endl;

        cout << "QUIZ " << siswa[i].nama << ": ";
        cin >> siswa[i].kuis;
        cout << endl;

        cout << "MID EXAM " << siswa[i].nama << ": ";
        cin >> siswa[i].uts;
        cout << endl;

        cout << "FINAL EXAM " << siswa[i].nama << ": ";
        cin >> siswa[i].uas;
        cout << endl;

        cout << "----------------------------------------------------------------------------------------------------" << endl;
        cout << "NAMA" << "\t" << "\t" <<"ATTENDANCE" << "\t" << "ASSIGNMENT" << "\t" << "QUIZ" << "\t" << "MID EXAM" << "\t" << "FINAL EXAM" << "\t" << "FINAL GRADE" << endl;
        cout << "----------------------------------------------------------------------------------------------------" << endl;

        
        siswa[i].hasil = nilaiakhir(i, siswa);
     

        cout << siswa[i].nama << "\t" << "\t" << siswa[i].tugas  << "\t" <<"\t" << siswa[i].kuis << "\t" << "\t" << siswa[i].uts <<"\t" << siswa[i].uas << "\t" << "\t";
        printf("%.2f ", siswa[i].hasil);

        if(siswa[i].hasil >= 80){
            cout << " (A) " << endl;
        } else if(siswa[i].hasil >= 70){
            cout << " (B) " << endl;
        } else if(siswa[i].hasil >= 55){
            cout << " (C) " << endl;
        } else if(siswa[i].hasil >= 40){
            cout << " (D) " << endl;
        } else {
            cout << " (E) " << endl;
        }
        
        cout << endl;

        i = i + 1;
    } while (i < jumlah_siswa);
 

   

    cout << endl;
}