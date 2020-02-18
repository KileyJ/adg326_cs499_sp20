#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "cfunction.h"

int main() {

    for (int i = 0; i < 64; i++) {
        int num1 = rand();
        int num2 = rand();
        addition(num1, num2);
    }

}