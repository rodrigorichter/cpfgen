#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <time.h>

// code taken from https://www.vivaolinux.com.br/script/Gerador-de-CPF-em-C++/ at 22/08/2020 and modified
std::string cpfgen () {
    int y,i,dv1,dv2,total,cpfnum[10];
    std::string res = "";

    srand(time(NULL));
    for (i = 0; i <= 8; i++) {
        cpfnum[i] = rand() % 9;
        res+='0'+cpfnum[i];
    }

    total = 0;
    y = 10;

    for (i = 0; i <= 8; i++) {
        total = total + (cpfnum[i] * y);
        y--;
    }

    if ((total % 11) < 2) {
        dv1 = 0;
    } else {
        dv1 = 11 - (total % 11);
    }

    y = 11;
    total = 0;

    for (i = 0; i <=8; i++) {
        total = total + (cpfnum[i] * y);
        y--;
    }

    total = total + (dv1 * y);

    if ((total % 11) < 2) {
        dv2 = 0;
    } else {
        dv2 = 11 - (total % 11);
    }

    res+='0'+dv1;
    res+='0'+dv2;
    res+='\n';

    return res;
}

int main() {
    std::cout << cpfgen();
    return 0;
}