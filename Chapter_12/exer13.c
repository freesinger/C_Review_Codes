/* Chapter 8.2 */
#define N 10

double indent[N][N];
int row, clo;

for (row = 0; row < N; row++)
    for (clo = 0; clo < N; clo++)
        if (row == clo)
            indent[row][clo] = 1.0;
        else
            indent[row][clo] = 0.0;

/* In pointer version without struct variables */
#define N 10

double indent[N][N], *p;
int flag_num = N;

for (p = &indent[0][0]; p < indent[0][0] + N; p++)
    if (flag_num == N) {
        *p = 1.0;
        flag_num = 0;
    } else {
        *p = 0.0;
        flag_num++;
    }
        