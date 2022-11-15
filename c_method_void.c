#include <stdio.h>

int main() {
    print_line();
    printf("학번    이름    전공    학점\n");
    print_line();
}
//입력값 반환값 필요없을 떄 void 씀
void print_line(void) {
    for(int i=0; i<50; i++) {
        printf("-");
    }
    printf("\n");
}