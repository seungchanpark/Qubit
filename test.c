#include <stdio.h>
int main(void) {
for(int a= 2;  a <=9; a++) {
   
            printf("%d단 계산\n ", a);
    for (int k = 1; k<=9; k++)
        printf("%d x %d = %d\n", a , k ,a*k);
}

    return 0;

}