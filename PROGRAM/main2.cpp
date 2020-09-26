#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
#include "doctor.h"
#include "pasien.h"
#include "relasi.h"

void menudoctor(List_doctor &LD, List_relasi &LR){
        cout << endl;
        cout << "\t\t\t======================================================="<<endl<<flush;
        cout << "\t\t\t|\t\tDATA   DOKTER   DHP   CLINIC  \t      |" << endl<<flush;
        cout << "\t\t\t======================================================="<<endl<<flush;
        cout << endl;
        int i;
        address_doctor DX;
        infotype_doctor nama_doctor;
        cout << "\t\t\t1. Insert First"  <<endl;
        cout << "\t\t\t2. Insert Last"   <<endl;
        cout << "\t\t\t3. Delete First"  <<endl;
        cout << "\t\t\t4. Delete Last"   <<endl;
        cout << "\t\t\t5. Tampilkan List"<<endl;
        cout << "\t\t\t6. Cari Doctor"   <<endl;
        cout << "\t\t\t7. Kembali Menu Utama"   <<endl;
        cout<<"\t\t\tPilih Perintah : "; cin>>i;
        switch(i){
        case 1:
                system("CLS");
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << "\t\t\t|\t\tDATA   DOKTER   DHP   CLINIC  \t      |" << endl<<flush;
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << endl;
                cout<<"\t\t\tMasukkan nama :"; cin>> nama_doctor;
                {DX = alokasi_dokter(nama_doctor);}
                insertFirstD(LD, DX);
                cout<<"\t\t\tInsert Berhasil"<<endl;
                cout <<"\t\t\t";system("pause");
                system("CLS");
        break;
        case 2:
                system("CLS");
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << "\t\t\t|\t\tDATA   DOKTER   DHP   CLINIC  \t      |" << endl<<flush;
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << endl;
                cout<<"\t\t\tMasukkan nama :"; cin>> nama_doctor;
                {DX = alokasi_dokter(nama_doctor);}
                insertLastD(LD, DX);
                cout<<"\t\t\tInsert Berhasil"<<endl;
                cout <<"\t\t\t";system("pause");
                system("CLS");
        break;
        case 3:
                system("CLS");
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << "\t\t\t|\t\tDATA   DOKTER   DHP   CLINIC  \t      |" << endl<<flush;
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << endl;
                deleteFirstD(LD, DX);
                deleterelasi_doctor(LR, infoD(DX));
                cout<<"\t\t\Berhasil menghapus"<<endl;
                cout <<"\t\t\t";system("pause");
                system("CLS");
        break;
        case 4:
                system("CLS");
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << "\t\t\t|\t\tDATA   DOKTER   DHP   CLINIC  \t      |" << endl<<flush;
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << endl;
                deleteLastD(LD, DX);
                deleterelasi_doctor(LR, infoD(DX));
                cout<<"\t\t\tBerhasil menghapus"<<endl;
                cout <<"\t\t\t";system("pause");
                system("CLS");
        break;
        case 5:
                system("CLS");
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << "\t\t\t|\t\tDATA   DOKTER   DHP   CLINIC  \t      |" << endl<<flush;
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << endl;
                printInfoD(LD);
                cout <<"\t\t\t";system("pause");
                system("CLS");
        break;
        case 6:
                system("CLS");
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << "\t\t\t|\t\tDATA   DOKTER   DHP   CLINIC  \t      |" << endl<<flush;
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << endl;
                cout<<"\t\t\tMasukkan nama :"; cin>> nama_doctor;
                searchdoctor_relasi(LD, LR, nama_doctor);
                cout <<"\t\t\t";system("pause");
                system("CLS");
        break;
        case 7:
                system("CLS");
                void mainmenu();
        break;
        }
        cout<<endl;
}
void menupasien(List_pasien &LP, List_relasi &LR){
        cout << endl;
        cout << "\t\t\t======================================================="<<endl<<flush;
        cout << "\t\t\t|\t\tDATA   PASIEN   DHP   CLINIC  \t      |" << endl<<flush;
        cout << "\t\t\t======================================================="<<endl<<flush;
        int i;
        address_pasien PX;
        infotype_pasien nama_pasien;
        cout << "\t\t\t1. Insert First"  <<endl;
        cout << "\t\t\t2. Insert Last"   <<endl;
        cout << "\t\t\t3. Delete First"  <<endl;
        cout << "\t\t\t4. Delete Last"   <<endl;
        cout << "\t\t\t5. Tampilkan List"<<endl;
        cout << "\t\t\t6. Cari Pasien"   <<endl;
        cout << "\t\t\t7. Kembali Menu Utama"<<endl;
        cout<<"\t\t\tPiih Perintah : "; cin>>i;
        switch(i){
        case 1:
                system("CLS");
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << "\t\t\t|\t\tDATA   PASIEN   DHP   CLINIC  \t      |" << endl<<flush;
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << endl;
                cout<<"\t\t\tMasukkan nama :"; cin>> nama_pasien;
                {PX = alokasi_pasien(nama_pasien);}
                insertFirstP(LP, PX);
                cout<<"\t\t\tInsert Berhasil"<<endl;
                cout <<"\t\t\t";system("pause");
                system("CLS");
        break;
        case 2:
                system("CLS");
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << "\t\t\t|\t\tDATA   PASIEN   DHP   CLINIC  \t      |" << endl<<flush;
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << endl;
                cout<<"\t\t\tMasukkan nama :"; cin>> nama_pasien;
                {PX = alokasi_pasien(nama_pasien);}
                insertLastP(LP, PX);
                cout<<"\t\t\tInsert Berhasil"<<endl;
                cout <<"\t\t\t";system("pause");
                system("CLS");
        break;
        case 3:
                system("CLS");
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << "\t\t\t|\t\tDATA   PASIEN   DHP   CLINIC  \t      |" << endl<<flush;
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << endl;
                deleteFirstP(LP, PX);
                deleterelasi_pasien(LR, infoP(PX));
                cout<<"\t\t\tDelete Berhasil"<<endl;
                cout <<"\t\t\t";system("pause");
                system("CLS");
        break;
        case 4:
                system("CLS");
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << "\t\t\t|\t\tDATA   PASIEN   DHP   CLINIC  \t      |" << endl<<flush;
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << endl;
                deleteLastP(LP, PX);
                deleterelasi_pasien(LR, infoP(PX));
                cout<<"\t\t\tDelete Berhasil"<<endl;
                cout <<"\t\t\t";system("pause");
                system("CLS");
        break;
        case 5:
                system("CLS");
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << "\t\t\t|\t\tDATA   PASIEN   DHP   CLINIC  \t      |" << endl<<flush;
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << endl;
                printInfoP(LP);
                cout <<"\t\t\t";system("pause");
                system("CLS");
        break;
        case 6:
                system("CLS");
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << "\t\t\t|\t\tDATA   PASIEN   DHP   CLINIC  \t      |" << endl<<flush;
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << endl;
                cout<<"\t\t\tMasukkan nama :"; cin>> nama_pasien;
                searchpasien_relasi(LP, LR, nama_pasien);
                cout <<"\t\t\t";system("pause");
                system("CLS");
        break;
        case 7:
                system("CLS");
                void mainmenu();
        break;
        }
        cout<<endl;
}
void menurelasi(List_doctor &LD, List_pasien &LP, List_relasi &LR){
        cout << endl;
        cout << "\t\t\t======================================================="<<endl<<flush;
        cout << "\t\t\t|\t\tDATA   RELASI   DHP   CLINIC  \t      |" << endl<<flush;
        cout << "\t\t\t======================================================="<<endl<<flush;
        cout << endl;
        int i;
        address_doctor DX;
        address_pasien PX;
        address_relasi RX;
        infotype_doctor nama_doctor;
        infotype_pasien nama_pasien;
        cout << "\t\t\t1. Insert First"  <<endl;
        cout << "\t\t\t2. Insert Last"   <<endl;
        cout << "\t\t\t3. Delete First"  <<endl;
        cout << "\t\t\t4. Delete Last"   <<endl;
        cout << "\t\t\t5. Tampilkan List"<<endl;
        cout << "\t\t\t6. Kembali Menu Utama"<<endl;
        cout<<"\t\t\tPilih Perintah : "; cin>>i;
        switch(i){
        case 1:
                system("CLS");
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << "\t\t\t|\t\tDATA   RELASI   DHP   CLINIC  \t      |" << endl<<flush;
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << endl;
                cout<<"\t\t\tMasukkan nama dokter : "; cin>>nama_doctor;
                {DX = caridoctor(LD,nama_doctor);}
                cout<<"\t\t\tMasukkan nama pasien : "; cin>>nama_pasien;
                {PX = caripasien(LP,nama_pasien);}
                if (DX!=NULL && PX!=NULL){
                    {RX = alokasi_relasi(DX,PX);}
                    insertFirst(LR, RX);
                    cout<<"\t\t\tInsert Berhasil"<<endl;
                }
                else cout<<"\t\t\tInsert Gagal, Dokter/Pasien tidak ditemukan"<<endl;
                cout <<"\t\t\t";system("pause");
                system("CLS");
        break;
        case 2:
                system("CLS");
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << "\t\t\t|\t\tDATA   RELASI   DHP   CLINIC  \t      |" << endl<<flush;
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << endl;
                cout<<"\t\t\tMasukkan nama dokter : "; cin>>nama_doctor;
                {DX = caridoctor(LD,nama_doctor);}
                cout<<"\t\t\tMasukkan nama pasien : "; cin>>nama_pasien;
                {PX = caripasien(LP,nama_pasien);}
                if (DX!=NULL && PX!=NULL){
                    {RX = alokasi_relasi(DX,PX);}
                    insertLast(LR, RX);
                    cout<<"\t\t\tInsert Berhasil"<<endl;
                }
                else cout<<"\t\t\tInsert Gagal, Dokter/Pasien tidak ditemukan"<<endl;
                cout <<"\t\t\t";system("pause");
                system("CLS");
        break;
        case 3:
                system("CLS");
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << "\t\t\t|\t\tDATA   RELASI   DHP   CLINIC  \t      |" << endl<<flush;
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << endl;
                deleteFirst(LR, RX);
                cout<<"\t\t\tBerhasil Menghapus"<<endl;
                cout <<"\t\t\t";system("pause");
                system("CLS");
        break;
        case 4:
                system("CLS");
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << "\t\t\t|\t\tDATA   RELASI   DHP   CLINIC  \t      |" << endl<<flush;
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << endl;
                deleteLast(LR, RX);
                cout<<"\t\t\tDelete Berhasil"<<endl;
                cout <<"\t\t\t";system("pause");
                system("CLS");
        break;
        case 5:
                system("CLS");
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << "\t\t\t|\t\tDATA   RELASI   DHP   CLINIC  \t      |" << endl<<flush;
                cout << "\t\t\t======================================================="<<endl<<flush;
                cout << endl;
                cout<<"\t\t\t";printInfo(LR);
                cout <<"\t\t\t";system("pause");
                system("CLS");
        break;
        case 6:
                system("CLS");
                void mainmenu();
        }
        cout<<endl;
}

void mainmenu(List_doctor &LD, List_pasien &LP, List_relasi &LR){
    int i;
    bool exit = false;
    while (exit!=true) {
        cout << endl;
        cout << "\t\t\t======================================================="<<endl<<flush;
        cout << "\t\t\t|\t\tDHP CLINIC CABANG KAB.BANDUNG \t      |" << endl<<flush;
        cout << "\t\t\t======================================================="<<endl<<flush;
        cout << endl;
        cout << "\t\t\t1. Data Dokter" <<endl;
        cout << "\t\t\t2. Data Pasien" <<endl;
        cout << "\t\t\t3. Data Relasi" <<endl;
        cout << "\t\t\t4. Lihat Data " <<endl;
        cout << "\t\t\t5. Petunjuk   " <<endl;
        cout << "\t\t\t0. Keluar Aplikasi"        <<endl;
        cout << endl;
        cout<<"\t\t\tPilih Perintah : "; cin>>i;
        switch(i){
        case 1:
            system("CLS");
            menudoctor(LD,LR);
        break;
        case 2:
            system("CLS");
            menupasien(LP,LR);
        break;
        case 3:
            system("CLS");
            menurelasi(LD,LP,LR);
        break;
        case 4:
            system("CLS");
            cout << "\t\t\t======================================================="<<endl<<flush;
            cout << "\t\t\t|\t\tDATA DOKTER DHP CLINIC  \t      |" << endl<<flush;
            cout << "\t\t\t======================================================="<<endl<<flush;
            cout << endl;
            printInfoD(LD);
            cout << endl;
            cout << "\t\t\t======================================================="<<endl<<flush;
            cout << "\t\t\t|\t\tDATA PASIEN DHP CLINIC  \t      |" << endl<<flush;
            cout << "\t\t\t======================================================="<<endl<<flush;
            cout << endl;
            printInfoP(LP);
            cout << endl;
            cout << "\t\t\t======================================================="<<endl<<flush;
            cout << "\t\t\t|\t\tDATA RELASI DHP CLINIC  \t      |" << endl<<flush;
            cout << "\t\t\t======================================================="<<endl<<flush;
            cout << endl;
            printInfo(LR);
            system("\t\t\tpause");
            cout<<"\t\t\t";system("CLS");
            mainmenu(LD,LP,LR);
        break;
        case 5:
            system("CLS");
            cout << "\t\t\t======================================================="<<endl<<flush;
            cout << "\t\t\t|\t\tPETUNJUK APP DHP CLINIC \t      |" << endl<<flush;
            cout << "\t\t\t======================================================="<<endl<<flush;
            cout << endl;
            cout << "\t\t\t 1. Menu dokter, pasien, dan relasi  difungsikan   untuk"<<endl;
            cout << "\t\t\t    Memanajemen informasi tentang korelasi dokter pasien"<<endl;
            cout << "\t\t\t 2. Gunakan  Menu Lihat Data  untuk  menampilkan rincian"<<endl;
            cout << "\t\t\t    sederhana tentang dokter,pasien dan korelasinya"<<endl;
            cout << endl;
            cout << "\t\t\t";system("PAUSE");
            system("CLS");
            mainmenu(LD,LP,LR);
        break;
        case 0:
            system("CLS");
            cout << "\t\t\t======================================================="<<endl<<flush;
            cout << "\t\t\t|\tDHP  CLINIC  MANAGED BY  SAFIRA  HOLDING      |" << endl<<flush;
            cout << "\t\t\t======================================================="<<endl<<flush;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "\t\t\t\t\t Program Selesai :)"<<endl;
            cout << endl; cout << endl;cout << endl;
            cout << "\t\t\t\t\tProgram Dirancang Oleh :"<<endl;
            cout << "\t\t\t\tSageri Fikri Ramadhan  |  1301164341"<<endl;
            cout << "\t\t\t\tDanit Hafiz Pamungkas  |  1301160205"<<endl;
            cout << endl; cout << endl;cout << endl;
            cout << "\t\t   S1 Teknik Informatika, Fakultas Informatika, Universitas Telkom"<<endl;
            cout << endl; cout << endl;cout << endl;
            cout << "\t\t\t\t\t---Copyright2017---"<<endl;
            exit = true;
        break;
        default:
            cout<<"Input tidak valid"<<endl;
        }
    }
    cout<<endl;
}

int main()
{
    cout << endl;
    cout << "\t\t\t======================================================="<<endl<<flush;
    cout << "\t\t\t|\tDHP  CLINIC  MANAGED BY  SAFIRA  HOLDING      |" << endl<<flush;
    cout << "\t\t\t======================================================="<<endl<<flush;
    cout << endl;
    cout << endl;
    cout << "\t\t\tSelamat Datang  di Pusat Info Relasi Dokter dan Pasien"<<endl<<flush;
    cout << "\t\t\tProgram ini digunakan  oleh  Pihak  Administrasi untuk"<<endl<<flush;
    cout << "\t\t\tmendata  korelasi  antar  dokter dengan pasien  sebagai"<<endl<<flush;
    cout << "\t\t\tmedia  informasi dasar pasien sebelum mendaftar berobat"<<endl<<flush;
    List_doctor LD;
    List_pasien LP;
    List_relasi LR;
    address_pasien P;
    address_doctor D;
    address_relasi R;

    createListD(LD);
    createListP(LP);
    createList(LR);
    cout << ""<<endl;
    cout << ""<<endl;
    cout <<"\t\t\t"; system("Pause");
    cout << ""<<endl;
    system("CLS");

    mainmenu(LD,LP,LR);
    return 0;
}
