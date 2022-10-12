//c_if_pl2에 했던 코드를 효율적으로 리팩토링 하는과정

#include <stdio.h>

//학점 계산기 - 리팩토링
//   - 사용자로부터 점수(0~100점)
//   - 91~100 : A
//   - 81~90  : B
//   - 71~80  : C
//   - 61~70  : D
//   - ~60    : F

int main(void) {
    int score;
    char grade;

    printf("점수 : ");
    scanf("%d", &score);

    if(score >=0 && score <= 100) {
        // 점수: 0~100점
         if(score >= 91) {
        grade = 'A';
        } else if(score >= 81) {
            grade = 'B';
        } else if(score >= 71) {
            grade = 'C';
        } else if(score >= 61) {
            grade = 'D';
        } else {
            grade = 'F';
        }
    } else {
        // 점수: 0점 미만  100점 초반
        printf("ERROR: 0~100점 사이에 값을 입력하세요.");
    }
    
        printf("학생의 점수는 %d점으로 %c학점입니다.", score, grade)
    }
