#include <stdio.h>

//1~10���� �ݺ��ϸ鼭 ¦���� ����ϴ� �ڵ� �ۼ�

// ¦�� ���� : 2�� ������ �������� 0�̸� ¦�� 

int main(void) { 
    int a = 1;
    for(int i=1; i<=10; i++) {
        // if(0) �� false
        // if(1) �� true
        
        if(i % 2 == 0) { //¦�� �Ǻ�
            printf("%d\n", i);
    }
        a = a * 2;
}
}