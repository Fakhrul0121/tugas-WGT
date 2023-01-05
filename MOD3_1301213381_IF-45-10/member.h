#ifndef MEMBER_H_INCLUDED
#define MEMBER_H_INCLUDED

#include <iostream>
#include <cstdlib>

const int Max = 6;

struct member{
    std::string IDnumber;
    float poin[Max];
};

void inputData(member *MB);
double ratarata(member MB);
void showData(member MB);

#endif // MEMBER_H_INCLUDED
