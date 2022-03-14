#include <stdio.h>
#define NBITS  4 
#define NCODES 4 

void print_code(int codec[NCODES][NBITS]) {
    int i=0, j=0, c, s=0;
    for(i=0;i<NCODES;i++)
    {
        c=codec[NBITS][NCODES];
        for(j=0;j<NBITS;j++)
        {
            if(i != 0 && j != 0 && c!=codec[i][j])
            {
                s++;
            }
        }
    }
    printf("DIstanza Hamming: %d", s);
}

void main() {
    int codec[NCODES][NBITS] = {{1, 0, 1, 1}, {0, 1, 1, 0}, {1, 0, 0, 1}, {0, 1, 0, 1}};
    print_code(codec);
}