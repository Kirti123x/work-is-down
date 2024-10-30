#include <stdio.h>

void toh(int n, int S, int A, char D){
    if(n == 1) printf(" Disk %d from %c to %c\n",n,S,D);
    else{
        toh(n-1,S,D,A);
        printf(" Disk %d from %c to %c\n",n,S,D);
        toh(n-1,A,S,D);
    }
}

int main(){
    char A,B,C;
    toh(5,'A','B','C');
}