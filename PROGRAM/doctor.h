#ifndef PARENT_H_INCLUDED
#define PARENT_H_INCLUDED
#include <iostream>
#define infoD(P) P->info
#define firstD(L) L.first
#define nextD(P) P->next

using namespace std;

typedef string infotype_doctor;
typedef struct elmlist_doctor *address_doctor;

struct elmlist_doctor {
    infotype_doctor info;
    address_doctor next;
};

struct List_doctor {
    address_doctor first;
};

void createListD(List_doctor &L);

void insertFirstD(List_doctor &L, address_doctor P);
void insertAfterD(List_doctor &L, address_doctor Prec, address_doctor P);
void insertLastD(List_doctor &L, address_doctor P);

void deleteFirstD(List_doctor &L, address_doctor &P);
void deleteLastD(List_doctor &L, address_doctor &P);
void deleteAfterD(List_doctor &L, address_doctor Prec, address_doctor &P);

address_doctor alokasi_dokter(infotype_doctor x);
address_doctor caridoctor(List_doctor L, infotype_doctor x);

void dealokasi_dokter(address_doctor &P);
void printInfoD(List_doctor L);

void deleteD(List_doctor &L, address_doctor &Q);


#endif // PARENT_H_INCLUDED
