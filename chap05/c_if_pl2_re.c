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
    // 1번 : 사용자로부터 점수 입력
    int score;
    char grade;

    printf("점수 : ");
    scanf("%d", &score);

    if(score >=0 && score <= 100) {
        // 2. 점수로부터 등급(A,B,C,.. 등급 판단)
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
        // 3. 점수와 등급을 출력
    } else {
        // 점수: 0점 미만  100점 초반
        printf("ERROR: 0~100점 사이에 값을 입력하세요.");
    }
    
        printf("학생의 점수는 %d점으로 %c학점입니다.", score, grade)
    
