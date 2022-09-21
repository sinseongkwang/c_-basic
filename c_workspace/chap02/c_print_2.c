#include <stdio.h> //라이브러리

// 프로그래밍 언어는 필기시험은 문법시험 위주
// 정수와 실수 출력
// + 정수(%d), 실수 (%lf), 문자(%c), 문자열(%s) 등
//   decimal, long float, character, string


// 정수 : 0 ,1 ,2 ..
// 실수 : 0.2, 0.0, 10.2, -5.3 ..
// 문자 : 'A', 'C'
// 문자열 : "samsung", "sk hynix"
int main(void)
{ 
    /* code */
    // 나이를 입력하세요 : [사용자 값]
    int age = [사용자값];
    printf("귀하의 나이는 %d살입니다.", age)
    printf("나는 %d살 입니다\n.", 34);
    printf("%d\n",10); // %d 위치에 10출력
    printf("%lf\n",3.4); // %lf 위치에 3.4를 소수점 이하 6자리 까지 출력
    printf("%.1lf\n",3.45); // 소수점 이하 첫째 자리 까지 출력(둘째자리에서 반올림)
    printf("%.10lf\n",3.4); // 소수점 이하 10자리까지 출력

    printf("%d와 %d의 합은 %d입니다.\n", 10,20,10+20);
    printf("%.1lf - %.1lf = %.1lf\n" , 3.4,1.2,3.4-1.2);

    return 0;
}