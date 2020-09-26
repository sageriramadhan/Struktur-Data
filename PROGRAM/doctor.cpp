#include "doctor.h"

void createListD(List_doctor &L){
    firstD(L) = NULL;
}

void insertFirstD(List_doctor &L, address_doctor P){
    nextD(P) = firstD(L);
    firstD(L) = P;
}

void insertAfterD(List_doctor &L, address_doctor Prec, address_doctor P){
    if (firstD(L)==NULL){
        insertFirstD(L,P);
    }
    else{
        nextD(P) = nextD(Prec);
        nextD(Prec) = P;
    }
}

void insertLastD(List_doctor &L, address_doctor P){
    if (firstD(L)==NULL){
        insertFirstD(L,P);
    }
    else{
        address_doctor last;
        last = firstD(L);
        while (nextD(last)!=NULL){
            last = nextD(last);
        };
        nextD(last) = P;
    }

}

void deleteFirstD(List_doctor &L, address_doctor &P){
    P = firstD(L);
    firstD(L) = nextD(P);
    nextD(P) = NULL;
}

void deleteLastD(List_doctor &L, address_doctor &P){
    address_doctor last;
    address_doctor prec;
    if (nextD(firstD(L))==NULL){
        P = firstD(L);
        deleteFirstD(L,P);
    }
    else{
        last = firstD(L);
        while (nextD(last)!=NULL){
            prec = last;
            last = nextD(last);
        };
        P = last;
        nextD(prec) = NULL;
    }
}

void deleteAfterD(List_doctor &L, address_doctor Prec, address_doctor &P){
    P = nextD(Prec);
    nextD(Prec) = nextD(P);
    nextD(P) = NULL;
}

address_doctor alokasi_dokter(infotype_doctor x){
    address_doctor P;
    P = new elmlist_doctor;
    infoD(P) = x;
    nextD(P) = NULL;
    return P;
}
address_doctor caridoctor(List_doctor L, infotype_doctor x){
    address_doctor P ;
    P = firstD(L);
    do{
        if(infoD(P) == x){
            return P;
        }
        P = nextD(P);
    }
    while(P!=NULL);
    return NULL;
}

void dealokasi_dokter(address_doctor &P){
    delete P;
}

void printInfoD(List_doctor L){
    address_doctor P;
    if (firstD(L)!=NULL){
        P = firstD(L);
        while (P!=NULL){
            cout <<"\t\t\t";cout<<infoD(P)<<endl;
            P = nextD(P);
        };
    }
    else cout<<"\t\t\tlist kosong"<<endl;
}

void deleteD(List_doctor &L, address_doctor &Q){
    if(firstD(L)!=NULL){
        address_doctor P = firstD(L);

        if (infoD(firstD(L))==infoD(Q)){ //delete first
            if (firstD(L)==NULL)
                cout<<"no data"<<endl;
            else{
                Q = firstD(L);
                firstD(L) = nextD(firstD(L));
                nextD(Q) = NULL;
            }
        }
        else{
            while(infoD(P)!=infoD(Q)){
                P = nextD(P);
            }
            if (infoD(P)==infoD(Q)){
                address_doctor prec = firstD(L);
                while (nextD(prec)!=P) prec = nextD(prec);
                if (nextD(P)==NULL){
                        nextD(prec) = NULL;
                        nextD(P) = NULL;
                }
                else{
                    nextD(prec) = nextD(P);
                    P = NULL;
                }
            }
        }

    }
}
