#include <stdio.h>

//1~3�� ���� ���� ���
int main(void) {
    int sum = 0; // ���� ����

    // �ۼ��غ�����. (for�� Ȱ��)
    
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
        


    printf("���� ����: %d\n", sum)
}