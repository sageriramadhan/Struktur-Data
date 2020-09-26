#include "pasien.h"

void createListP(List_pasien &L){
    firstP(L) = NULL;
}

void insertFirstP(List_pasien &L, address_pasien P){
    nextP(P) = firstP(L);
    firstP(L) = P;
}

void insertAfterP(List_pasien &L, address_pasien Prec, address_pasien P){
    if (firstP(L)==NULL){
        insertFirstP(L,P);
    }
    else{
        nextP(P) = nextP(Prec);
        nextP(Prec) = P;
    }
}

void insertLastP(List_pasien &L, address_pasien P){
    if (firstP(L)==NULL){
        insertFirstP(L,P);
    }
    else{
        address_pasien last;
        last = firstP(L);
        while (nextP(last)!=NULL){
            last = nextP(last);
        };
        nextP(last) = P;
    }
}

void deleteFirstP(List_pasien &L, address_pasien &P){
    P = firstP(L);
    firstP(L) = nextP(P);
    nextP(P) = NULL;
}

void deleteLastP(List_pasien &L, address_pasien &P){
    address_pasien last;
    address_pasien prec;
    if (nextP(firstP(L))==NULL){
        P = firstP(L);
        deleteFirstP(L,P);
    }
    else{
        last = firstP(L);
        while (nextP(last)!=NULL){
            prec = last;
            last = nextP(last);
        };
        P = last;
        nextP(prec) = NULL;
    }
}

void deleteAfterP(List_pasien &L, address_pasien Prec, address_pasien &P){
    P = nextP(Prec);
    nextP(Prec) = nextP(P);
    nextP(P) = NULL;
}

address_pasien alokasi_pasien(infotype_pasien x){
    address_pasien P;
    P = new elmlist_pasien;
    infoP(P) = x;
    nextP(P) = NULL;
    return P;
}
address_pasien caripasien(List_pasien L, infotype_pasien x){
    address_pasien P ;
    P = firstP(L);
    do{
        if(infoP(P) == x){
            return P;
        }
        P = nextP(P);
    }
    while(P!=NULL);
    return NULL;
}

void dealokasi_pasien(address_pasien &P){
    delete P;
}

void printInfoP(List_pasien L){
    address_pasien P;
    if (firstP(L)!=NULL){
        P = firstP(L);
        while (P!=NULL){
            cout <<"\t\t\t";cout<<infoP(P)<<endl;
            P = nextP(P);
        };
    }
    else cout<<"\t\t\tlist kosong"<<endl;
}

void deleteP(List_pasien &L, address_pasien &Q){
    if(firstP(L)!=NULL){
        address_pasien P = firstP(L);

        if (infoP(firstP(L))==infoP(Q)){ //delete first

            if (firstP(L)==NULL)
                cout<<"no data"<<endl;
            else{
                Q = firstP(L);
                firstP(L) = nextP(firstP(L));
                nextP(Q) = NULL;
            }
        }

        else{
            while(infoP(P)!=infoP(Q)){
                P = nextP(P);
            }
            if (infoP(P)==infoP(Q)){
                address_pasien prec = firstP(L);
                while (nextP(prec)!=P) prec = nextP(prec);
                if (nextP(P)==NULL){
                        nextP(prec) = NULL;
                        nextP(P) = NULL;
                }
                else{
                    nextP(prec) = nextP(P);
                    P = NULL;
                }
            }
        }

    }
}


