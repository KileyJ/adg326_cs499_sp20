#include <stddef.h>
#include <stdint.h>

#include "cfunction.h"

extern "C" int LLVMFuzzerTestOneInput(const uint8_t * Data, size_t Size) {
    int num1 = rand();
    int num2 = rand();
    int sum = addition(num1, num2);
    if (Size != sum) {
        addition((*Data), (*Data));
    }
    return 0;  // Non-zero return values are reserved for future use.
}