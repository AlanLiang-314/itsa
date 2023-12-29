// https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6955
// [C_MM39-易] 判斷是何種三角形

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int edge[3];
    for(int i=0;i<3;i++) scanf("%d", &edge[i]);
    qsort(edge, 3, sizeof(int), compare);
    if(edge[0] + edge[1] <= edge[2]) {
        printf("Not Triangle\n");
    } else {
        int sqrt_sum = edge[0] * edge[0] + edge[1] * edge[1];
        if(sqrt_sum > (edge[2] * edge[2])) {
            printf("Acute Triangle\n");
        } else if (sqrt_sum < (edge[2] * edge[2])){
            printf("Obtuse Triangle\n");
        } else {
            printf("Right Triangle\n");
        }
    }
}