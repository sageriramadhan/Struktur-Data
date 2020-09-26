#ifndef RELASI_H_INCLUDED
#define RELASI_H_INCLUDED
#include <iostream>
#define pasien(P) P->pasien
#define doctor(P) P->doctor
#define first(L) L.first
#define doctor(P) P->doctor
#define pasien(P) P->pasien
#define next(P) P->next

#include"doctor.h"
#include"pasien.h"
using namespace std;

typedef struct elmlist_relasi *address_relasi;

struct elmlist_relasi{
    address_relasi next;
    address_doctor doctor;
    address_pasien pasien;
};

struct List_relasi{
    address_relasi first;
};

void createList(List_relasi &L);
void insertFirst(List_relasi &L, address_relasi P);
void insertLast(List_relasi &L, address_relasi P);
void insertAfter(List_relasi &L, address_relasi Prec, address_relasi P);
void deleteFirst(List_relasi &L, address_relasi &P);
void deleteLast(List_relasi &L, address_relasi &P);
void deleteAfter(List_relasi &L, address_relasi Prec, address_relasi &P);

address_relasi alokasi_relasi(address_doctor P, address_pasien C);
address_relasi carirelasi(List_relasi L, address_doctor P, address_pasien C);

void dealokasi_relasi(address_relasi &P);
void printInfo(List_relasi L);

void deleterelasi_doctor(List_relasi &L, infotype_doctor S);
void deleterelasi_pasien(List_relasi &L, infotype_pasien S);
void searchdoctor_relasi(List_doctor LD, List_relasi LR, infotype_doctor x);
void searchpasien_relasi(List_pasien LP, List_relasi LR, infotype_pasien x);

#endif // RELASI_H_INCLUDED
