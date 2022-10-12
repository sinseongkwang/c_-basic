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


















