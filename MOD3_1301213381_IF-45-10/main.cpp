#include <iostream>
#include "member.h"

using namespace std;

int main()
{
    member M;
    inputData(&M);
    showData(M);

    cout<<"Dengan rata-rata poin: "<<ratarata(M)<<endl;
}

