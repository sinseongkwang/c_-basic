#include <stdio.h>

int main(void) {
    int result;
    result = f(123);
    printf("%d\n", result);
}
int f(int n){
    if(n>0)
        return n % 10 + f(n / 10);
    else
        return 0;
}

// result = f(123) -> 6
// 3+f(12)
// 2+f(1)
// 1+f(0)
// f(0) = 0  �Ųٷ� �ö󰡸� 1 , 2 + 1 = 3 , 3 + 3 = 6 