// #include <stdio.h>  
// #include <stdlib.h>
// #include "characters_to_base.h"
// #include "Needleman-Wunsch-iterative.h"

// static int kronecker(char* A, int i, char* B, int j)
// {
//     if (isSameBase(A[i], B[j])) {
//         return 1;
//     }
//     return 0;
// }

// long EditDistance_NW_iterative(char* A, size_t lengthA, char* B, size_t lengthB)
// {
//     long **tableau = (long **) malloc((lengthA + 1) * sizeof(long *));
//     for (int i = 0; i <= lengthA; i++) {
//         tableau[i] = (long *) malloc((lengthB + 1) * sizeof(long));
//     }
//     tableau[0][0] = 0;
//     for (int i = 0; i <= lengthA; i++) {
//         tableau[i][0] = 2;
//     }
//     for (int j = 0; j <= lengthB; j++) {
//         tableau[0][j] = 2;
//     }
//     for (int i = 1; i <= lengthA; i++) {
//         for (int j = 1; j <= lengthB; j++) {
//             long align = tableau[i-1][j-1] + kronecker(A, i, B, j);
//             long delete = 2 + tableau[i-1][j];
//             long insert = 2 + tableau[i][j-1];
//             long min = align;
//             if (delete < min) {
//                 min = delete;
//             }
//             if (insert < min) {
//                 min = insert;
//             }
//             tableau[i][j] = min;
//         }
//     }
//     return tableau[lengthA][lengthB];
// }
