#include <stdio.h>
int a;
void det();
int main(void)
{
    
    printf("정수를 입력하시오 :\n");
    scanf("%d", &a);
    det();
        int res;  
    res = a%2;
    
    printf("%d를 2로 나눈 나머지는 이것입니다 : \n", a);
    printf("%d\n", res);
   
    if (res == 0 )
        printf("이 숫자는 짝수입니다 \n");
    else if(res == 1)  //else를 써도 무방함
        printf("이 숫자는 홀수입니다 \n");

     return 0;

}
void det() {
    if(a<0) {
        printf("음수 말고 양수를 입력하시오 :\n");
        scanf("%d", &a);
        det();
    }
    
}