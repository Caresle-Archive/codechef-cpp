#include <iostream>
#include <string.h>
#include <stdlib.h>

int main() {
    int n, u;
    char buf[100000];

    std::cin.getline(buf, 100000);

    char * pch;

    pch = strtok(buf, " ");
    int i = 0;
    while (pch != NULL) {
        if (i == 0) {
            n = atoi(pch);
        } else {
            u = atoi(pch);
        }
        pch = strtok(NULL, " ");
        i++;
    }

    std::cout << n - u << "\n";
}