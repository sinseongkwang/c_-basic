//c_if_pl2�� �ߴ� �ڵ带 ȿ�������� �����丵 �ϴ°���

#include <stdio.h>

//���� ���� - �����丵
//   - ����ڷκ��� ����(0~100��)
//   - 91~100 : A
//   - 81~90  : B
//   - 71~80  : C
//   - 61~70  : D
//   - ~60    : F

int main(void) {
    // 1�� : ����ڷκ��� ���� �Է�
    int score;
    char grade;

    printf("���� : ");
    scanf("%d", &score);

    if(score >=0 && score <= 100) {
        // 2. �����κ��� ���(A,B,C,.. ��� �Ǵ�)
         if(score >= 91) {          // score:91~100
        grade = 'A';
        } else if(score >= 81) {    // score:81~90
            grade = 'B';
        } else if(score >= 71) {    // score:71~80
            grade = 'C';
        } else if(score >= 61) {    // score:61~70
            grade = 'D';
        } else {                    // score:0~60
            grade = 'F';
        }
        // 3. ������ ����� ���
    } else {
        // ����: 0�� �̸�  100�� �ʹ�
        printf("ERROR: 0~100�� ���̿� ���� �Է��ϼ���.");
    }
    
        printf("�л��� ������ %d������ %c�����Դϴ�.", score, grade)
    
