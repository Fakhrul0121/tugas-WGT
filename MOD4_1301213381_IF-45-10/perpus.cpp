#include "perpus.h"

void createList_1301213381(List &L){
    first(L) = nil;
}

adr newElement_1301213381(infotype x){
    adr P = new element;
    info(P) = x;
    next(P) = nil;
    return P;
}

void insertLast_1301213381(List &L, adr p){
    adr q = first(L);
    if (first(L) == nil){
        first(L) = p;
    }else{
        while (next(q) != nil){
        q = next(q);
        }
        next(q) = p;
    }

}

void show_1301213381(List L){
    if (first(L) != nil){
        adr p = first(L);
        while (p != nil){
            cout << info(p) << " ";
            p = next(p);
        }
        cout << endl;
    }else{
        cout << "List kosong" << endl;
    }
}

adr longestName_1301213381(List L){
    int longest = 0;
    adr addlong = first(L);
    adr p = first(L);
    while (p != nil){
        if (info(p).length() > longest){
            longest = info(p).length();
            addlong = p;
        }
        p = next(p);
    }
    return addlong;
}

adr showFirstKName_1301213381(List L, int k, char c){
    adr p = first(L);
    int i = 1;
    while (p != nil && i < (k+1)){
        if (info(p)[0] == c){
            return p;
        }
        p = next(p);
    }
    return nil;
}
