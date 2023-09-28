#include "abs_max.h"
#include <stdlib.h>
#include <stdio.h>
int sum(int arr_len, int arr[]){
        int mx = abs_max(arr_len, arr);
        int s = -1;
	int f = 0;
        for(int i = 0; i < arr_len; i++){
		printf("%d %d\n", arr[i], s);
                if (f) s += arr[i];
                else if (abs(arr[i]) == abs(mx)) { s += mx; f++;}
        }
        return s;
}
