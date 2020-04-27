#include <stddef.h>
#include <stdint.h>

#include "kdtree.h"

extern "C" int LLVMFuzzerTestOneInput(const uint8_t * Data, size_t Size) {
    kd_create(Size);
    //kd_data_destructor(Data, (*destr)(void*));
    kd_insert(Data, Size, Size);
    kh_insertf(Data, Size, Size);
    kh_insert3(Data, Size, Size, Size, Data);
    kh_insert3f(Data, Size, Size, Size, Data);
    kd_nearest(Data, Size);
    kd_nearestf(Data, Size);
    kd_nearest3(Data, Size, Size, Size);
    kd_nearest3f(Data, Size, Size, Size);
    kd_nearest_range(Data, Size, Size);
    kd_nearest_rangef(Data, Size, Size);
    kd_nearest_range3(Data, Size, Size, Size,Size);
    kd_nearest_range3f(Data, Size, Size, Size,Size);
    kd_res_free(Data);
    kd_res_size(Data);
    kd_res_rewind(Data);
    kd_res_end(Data);
    kd_res_next(Data);
    kd_res_item(Data, Size);
    kd_res_itemf(Data, Size);
    kd_res_item3(Data, Size, Size, Size);
    kd_res_item3f(Data, Size, Size, Size);
    kd_res_item_data(Data);
    kd_free(Data);
    kd_clear(Data);
    return 0;  // Non-zero return values are reserved for future use.
}