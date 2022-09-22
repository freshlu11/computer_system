#include <stdio.h>
#define N 16
typedef int fix_matrix[N][N];


/* Set all diagonal elements to val */
void fix_set_diag(fix_matrix A, int val){
    int *line_head = &A[0][0];  // Points to elements in row i of A
    int col_offset = 0;
    do {
        *line_head = val;
        line_head += (N+1);
        col_offset ++;
    } while (col_offset != N);
}

void main(){
    fix_matrix A;
    fix_set_diag(A, 9);
    printf("end");
}

