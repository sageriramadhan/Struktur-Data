#include <iostream>
#include "doctor.h"
#include "relasi.h"
#include "pasien.h"

using namespace std;

void MenuDoctor(){
    int menu;
    cout<<"Menu Doctor"<<endl;
    cout<<"1. InsertFirst"<<endl;
    cout<<"2. InsertLast"<<endl;
    cout<<"3. DeleteFirst"<<endl;
    cout<<"4. DeleteLast"<<endl;
    cout<<"0. Kembali ke Main Menu"<<endl;
    cin>>menu;
    switch (menu) {
        case 1:
            cout<<"IF"<<endl;
            break;
        case 2:
            cout<<"IL"<<endl;
            break;
        case 3:
            cout<<"DF"<<endl;
            break;
        case 4:
            cout<<"DL"<<endl;
            break;
        case 0:
            cout<<"kembali"<<endl;
            break;
    }
    cout<<endl;
}

void MenuPasien(){
    int menu;
    cout<<"Menu Pasien"<<endl;
    cout<<"1. InsertFirst"<<endl;
    cout<<"2. InsertLast"<<endl;
    cout<<"3. DeleteFirst"<<endl;
    cout<<"4. DeleteLast"<<endl;
    cout<<"0. Kembali ke Main Menu"<<endl;
    cin>>menu;
    switch (menu) {
        case 1:
            cout<<"IF"<<endl;
            break;
        case 2:
            cout<<"IL"<<endl;
            break;
        case 3:
            cout<<"DF"<<endl;
            break;
        case 4:
            cout<<"DL"<<endl;
            break;
        case 0:
            cout<<"kembali"<<endl;
            break;
    }
    cout<<endl;
}

void MenuRelasi(){
    int menu;
    cout<<"Menu Relasi"<<endl;
    cout<<"1. InsertFirst"<<endl;
    cout<<"2. InsertLast"<<endl;
    cout<<"3. DeleteFirst"<<endl;
    cout<<"4. DeleteLast"<<endl;
    cout<<"0. Kembali ke Main Menu"<<endl;
    cin>>menu;
    switch (menu) {
        case 1:
            cout<<"IF"<<endl;
            break;
        case 2:
            cout<<"IL"<<endl;
            break;
        case 3:
            cout<<"DF"<<endl;
            break;
        case 4:
            cout<<"DL"<<endl;
            break;
        case 0:
            cout<<"kembali"<<endl;
            break;
    }
    cout<<endl;
}

void MainMenu(){
    int menu;
    while (menu!=0){
    cout<<"Main Menu"<<endl;
    cout<<"1. List Dokter"<<endl;
    cout<<"2. List Pasien"<<endl;
    cout<<"3. List Relasi"<<endl;
    cout<<"0. Exit"<<endl;
    cin>>menu;
    switch (menu) {
        case 1:
            MenuDoctor();
            break;
        case 2:
            MenuPasien();
            break;
        case 3:
            MenuRelasi();
            break;
        case 0:
            cout<<"exit"<<endl;
            break;
    }
    }
}

int main()
{
    List_doctor Ld;
    List_pasien Lp;
    List_relasi Lr;
    createListD(Ld);
    createListP(Lp);
    createList(Lr);
    cout << "Hello world!" << endl;
    MainMenu();
    return 0;
}
