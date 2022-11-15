#include <stdio.h>

/**
 * ������ 2��~9�� ���
 *  -> �ݺ��� 2��
 * 1 .2~9 1�� ���� : �ܼ�
 * 2. 1~9 1�� ���� : �ܼ��� �´� ������ ���
 * 
*/
int main(void) {

    // 1. 2~9�� ���� �ܼ� �Է�
    //  j�� �ܼ��� �ǹ�
    // j=2 �� i = 1,2,3, ... , 9
    // j=3 �� i = 1,2,3, ... , 9
    // j=4 �� "
    // ..
    // j=9

    /**
     *  j   i     ���
     *  2   1     2x1=2
     *      2     2x2=4
     *      3     2x3=6 
     *      ~
     *      9     2x9=18
    */
    for(int j=1; j <= 9; j++) {

    
        // 2. �ܼ��� �´� ������ ���
        for(int i=1; i <= 9; i++) {
            printf("%d x %d = %d\n", j, i, j*i);
        }

    }
}