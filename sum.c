#include "abs_max.h"
#include <stdlib.h>

int sum(int arr_len, int arr[]){
        int mx = abs_max(arr_len, arr);
        int s = 0;
        for(int i = 0; i < arr_len; i++){
                if (s) s += arr[i];
                else if (abs(arr[i]) == abs(mx)) s += mx;
        }
        return s;
}
