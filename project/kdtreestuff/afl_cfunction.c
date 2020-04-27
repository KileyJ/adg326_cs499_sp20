#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "kdtree.h"

int main() {

    for (int i = 0; i < 64; i++) {
        kd_insert(kd_create(i), (double) i, i);
        kh_insertf(kd_create(i), (float) i, i);
        kd_nearest(kd_create(i), (double) i);
        kd_nearestf(kd_create(i), (double) i);
        kd_res_free(kd_nearest3(kd_create(i), (double) i, (double) i, (double) i));
        kd_res_size(kd_nearest3f(kd_create(i), (float) i, (float) i, (float) i));
        kd_res_rewind(kd_nearest_range(kd_create(i), i, i));
        kd_res_end(kd_nearest_rangef(kd_create(i), i, i));
        kd_res_next(kd_nearest_range3(kd_create(i), i, i, i,i));
        kd_res_item(kd_nearest_range3f(kd_create(i), i, i, i,i), i);
        kd_res_itemf(kd_nearest3(kd_create(i), i, i, i), i);
        kd_res_item3(kd_nearest3f(kd_create(i), i, i, i), i, i, i);
        kd_res_item3f(kd_nearest_range(kd_create(i), i, i), i, i, i);
        kd_res_item_data(kd_nearest_rangef(kd_create(i), i, i));
        kd_free(kd_create(i));
        kd_clear(kd_create(i));
    }



}