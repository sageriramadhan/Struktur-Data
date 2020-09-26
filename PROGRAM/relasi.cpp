#include "relasi.h"

void createList(List_relasi &L){
    first(L) = NULL;
}

void insertFirst(List_relasi &L, address_relasi P){
    next(P) = first(L);
    first(L) = P;
}

void insertAfter(List_relasi &L, address_relasi Prec, address_relasi P){
    if (first(L)==NULL){
        insertFirst(L,P);
    }
    else{
        next(P) = next(Prec);
        next(Prec) = P;
    }
}

void insertLast(List_relasi &L, address_relasi P){
    if (first(L)==NULL){
        insertFirst(L,P);
    }
    else{
        address_relasi last;
        last = first(L);
        while (next(last)!=NULL){
            last = next(last);
        };
        next(last) = P;
    }
}

void deleteFirst(List_relasi &L, address_relasi &P){
    P = first(L);
    first(L) = next(P);
    next(P) = NULL;
}

void deleteLast(List_relasi &L, address_relasi &P){
    address_relasi last;
    address_relasi prec;
    if (next(first(L))==NULL){
        P = first(L);
        deleteFirst(L,P);
    }
    else{
        last = first(L);
        while (next(last)!=NULL){
            prec = last;
            last = next(last);
        };
        P = last;
        next(prec) = NULL;
    }
}

void deleteAfter(List_relasi &L, address_relasi Prec, address_relasi &P){
    P = next(Prec);
    next(Prec) = next(P);
    next(P) = NULL;
}

address_relasi alokasi_relasi( address_doctor P, address_pasien C){
    address_relasi R;
    R = new elmlist_relasi;
    doctor(R) = P;
    pasien(R) = C;
    next(R) = NULL;
    return R;
}
address_relasi carirelasi(List_relasi L, address_doctor P, address_pasien C){
    address_relasi R;
    R = first(L);
    while (doctor(R)!=P && pasien(R)!=C && P!=NULL){
        R = next(R);
    }

    return R;
}

void dealokasi_relasi(address_relasi &P){
    delete P;
}

void printInfo(List_relasi L){
    address_relasi P;
    if (first(L)!=NULL){
        P = first(L);
        while (P!=NULL){
            if (doctor(P)!=NULL&&pasien(P)!=NULL){
                cout <<"\t\t\t";
                cout<<infoD(doctor(P))<<" - "<<infoP(pasien(P))<<endl;
            }
            P = next(P);
        };
    }
    else cout<<"list kosong"<<endl;
}

void deleterelasi_doctor(List_relasi &L, infotype_doctor S){
    address_relasi Q = first(L);
    while(Q!=NULL){
        if (infoD(doctor(Q))==S){
                doctor(Q)=NULL;
        }
        Q = next(Q);
    }
}

void deleterelasi_pasien(List_relasi &L, infotype_pasien S){
    address_relasi Q = first(L);
    while(Q!=NULL){
        if (infoP(pasien(Q))==S){
                pasien(Q)=NULL;
        }
        Q = next(Q);
    }
}

void searchdoctor_relasi(List_doctor LD, List_relasi LR, infotype_doctor x){
    address_doctor P = caridoctor(LD, x);
    if (P==NULL) cout<<"\t\t\tDoctor tidak ditemukan"<<endl;
    else{
        cout<<"\t\t\t";cout<<x;cout<<"terdapat di List Doctor"<<endl;
        cout<<"\t\t\tList Relasi : "<<endl;
        address_relasi Q = first(LR);
        while (Q!=NULL){
            if (doctor(Q)==P) cout<<infoD(doctor(Q))<<" - "<<infoP(pasien(Q))<<endl;
            Q = next(Q);
        }
    }
}

void searchpasien_relasi(List_pasien LP, List_relasi LR, infotype_pasien x){
    address_pasien P = caripasien(LP, x);
    if (P==NULL) cout<<"\t\t\tDoctor tidak ditemukan"<<endl;
    else{
        cout<<"\t\t\t";cout<<x;cout<<"terdapat di List Pasien"<<endl;
        cout<<"\t\t\tList Relasi : "<<endl;
        address_relasi Q = first(LR);
        while (Q!=NULL){
            if (pasien(Q)==P){
                cout <<"\t\t\t";cout<<infoD(doctor(Q))<<" - "<<infoP(pasien(Q))<<endl;
            }
            Q = next(Q);
        }
    }
}
