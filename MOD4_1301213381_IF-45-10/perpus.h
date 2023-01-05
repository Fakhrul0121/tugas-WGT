#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(M) ((M).first)
#define nil NULL

typedef string nama;

typedef nama infotype;
typedef struct element *adr;

struct element {
    infotype info;
    adr next;
};

struct List{
    adr first;
};

void createList_1301213381(List &L);
adr newElement_1301213381(infotype x);
void insertLast_1301213381(List &L,adr p);
void show_1301213381(List L);
adr longestName_1301213381(List L);
adr showFirstKName_1301213381(List L, int k, char c);

#endif // SLL_H_INCLUDED

