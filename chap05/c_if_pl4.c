#include <stdio.h>
#include <string.h>
/**
 * BMI ����
 *  1. �Է� : ����� -> ����, ������
 *  2. ����ȯ -> cm(m)
 *  3. BMI���
 *  4. BMI�� ���� ��� �ο�
 *  5. ��� : BMI���
*/
int main(void) {
    // 1.�Է�
    int height; // ����(cm)
    int weight; // ������(kg)

    printf("����(cm) �Է� : ");
    scanf("%d", &height);
    printf("ü��(kg) �Է� : ");
    scanf("%d", &weight);
    // printf("%d,%d", height, weight);

    // 2. ��ȯ {����(cm->m)}
    // �� : 180cm -> 1.8m
    // 1.8=180/100
    double height_m = (double)height / 100;
    printf("%.2lf", height_m);

    // 3. ���
    // BMI����  =  ������(kg) / {����(m)x����(m)}
    double bmi_value = weight/(height_m * height_m);

    // 4. ����
    // 18.5 �̸� : ��ü��
    // 18.5~23�̸� : ����
    // 23~26 �̸� : ��ü��
    // 26~30 �̸� : ��
    // 30�̻� : ����

    //bmi_degree�������� 
    //
    //

    char bmi_degree[20];
    

    if(bmi_value < 18.5) {
        strcpy(bmi_degree, "��ü��");
    } else if(bmi_value >= 18.5 && bmi_value < 23) {
        strcpy(bmi_degree, "����");
    } else if(bmi_value >= 23 && bmi_value < 26) {
        strcpy(bmi_degree, "��ü��");
    } else if(bmi_value >= 26 && bmi_value < 30) {
        strcpy(bmi_degree, "��");
    } else if(bmi_value >= 30) {
        strcpy(bmi_degree, "����");
    }
    
    //5.���
    printf("���� %dcm, ������ %dkg���� \n", height, weight);
    printf("����� BMI������ %.2lf�� %s�Դϴ�.", bmi_value, bmi_degree);
    

}