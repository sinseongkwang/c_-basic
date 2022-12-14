/**
 * if문(제어문) 기본 문법
 * 
 * if(조건) {
 *   실행문
 *  } else if (조건) { 
 *   실행문
 *  } else if (조건) { 
 *   실행문
 *  } else {
 *    실행문
 *  }    else if 는 여러번 쓸 수 있다, 체인으로 연결 되어 있는 구조, if(조건) "조건"을 참인지 거짓인지 판단하고 만약 참이라면 바로 실행
 *         거짓이라면 실행되지 않고 else if(조건) "조건" 으로 내려가서 참인지 거짓인지 판단 무한반복
 */

/**
 * 조합방법
 * 1.  if() 단독
 * 2. if()~else
 * 3. if()~else if()
 * 4. if()~else if()~else
 * 
 * ※ if문은 반드시 if로 시작
 * ※ else if ()와 else는 필수 아님
 * ※ if와 else(는 1번만 사용 가능
 * ※ else if() 여러번 사용 가능
 * ※ if문에서 체인으로 연결된 경우 위에서부터 참(True)인 값 하나만 실행하고 빠져나감
 * 
 * # 조건문 1개(chain) - 이중에 하나만 실행 (참)
 * if(남자이면) {
 *      출력(남자);
 * } else{
 *      출력(여자);
 * }
 * 
 * # 조건문 2개(각각 따로 실행) - 남자에서 참이여도 (여자) 실행
 * if(남자이면) {
 *      출력(남자);
 * }
 * if(여자이면){
 *      출력(여자);
 * }
 * 
*/


int main(void){
    int a = 20;
    int b = 0;

    // 조건을 보고
    // 참(True) 블록문 안에 있는 코드 실행
    // 거짓(False) 다음으로 넘어감
    
    if(a>30){ 
        printf("a가30보다 커요!");
    }
}


















