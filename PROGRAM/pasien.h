#ifndef CHILD_H_INCLUDED
#define CHILD_H_INCLUDED
#include <iostream>
#define firstP(L) L.first
#define infoP(P) P->info
#define nextP(P) P->next

using namespace std;

typedef string infotype_pasien;
typedef struct elmlist_pasien *address_pasien;

struct elmlist_pasien{
    infotype_pasien info;
    address_pasien next;
};

struct List_pasien{
    address_pasien first;
};

void createListP(List_pasien &L);

void insertFirstP(List_pasien &L, address_pasien P);
void insertLastP(List_pasien &L, address_pasien P);
void insertAfterP(List_pasien &L, address_pasien Prec, address_pasien P);

void deleteFirstP(List_pasien &L, address_pasien &P);
void deleteLastP(List_pasien &L, address_pasien &P);
void deleteAfterP(List_pasien &L, address_pasien Prec, address_pasien &P);

address_pasien alokasi_pasien(infotype_pasien x);
address_pasien caripasien(List_pasien L, infotype_pasien x);

void dealokasi_pasien(address_pasien &P);
void printInfoP(List_pasien L);

void deleteP(List_pasien &L, address_pasien &Q);


#endif // CHILD_H_INCLUDED
