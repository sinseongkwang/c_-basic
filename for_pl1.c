#include <stdio.h>

//1~3의 값의 총합 계산
int main(void) {
    int sum = 0; // 총합 누적

    // 작성해보세요. (for문 활용)
    
    for(int i=1; i<=3; i++) {
        sum = sum + 1;
        // sum += i;

        /**
         *  sum     i
         *   0      1
         *   1      2
         *   3      3
         *   6      4
        */
    }
        


    printf("누적 총합: %d\n", sum)
}