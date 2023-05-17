#include <math.h>
#include <stdio.h>

int menu(void) { //메뉴 함수
  int n;
  printf("1.팩토리얼\n");
  printf("2.싸인\n");
  printf("3.로그(base)n");
  printf("4.제곱근\n");
  printf("5.순열(nPr)\n");
  printf("6.조합(nCr)\n");
  printf("7.종료\n");
  printf("선택해주세요: ");
  scanf("%d", &n);
  return n; //n값 반환
}

void factorial() {            //팩토리얼 함수
  long long n, result = 1, i; // 8바이트 정수 범위
  printf("정수를 입력하시오: ");
  scanf("%lld", &n);       // longlong 정수 값 입력
  for (i = 1; i <= n; i++) //입력 값 n과 같을 때 까지 반복
    result = result * i;
  printf("결과 = %lld\n\n", result); // longlong 정수값 출력
}

void sine() {       //싸인 함수
  double a, result; //소수점 가능
  printf("각도를 입력하시오: ");
  scanf("%lf", &a); // double형 입력
  result = sin(a);  //싸인 값 계산
  printf("결과 = %lf\n\n", result);
}

void logBase10() { //로그 계산
  double a, result;
  printf("실수값을 입력하시오:");
  scanf("%lf", &a);
  if (a <= 0.0)
    printf("오류\n");  // 입력 값이 0보다 작으면 "오류"출력
  else {               // 0보다 크면
    result = log10(a); //로그 계산
    printf("결과 = %lf\n\n", result); //결과값 출력
  }
}

int main(void) {
  while (1) { //무한으로 돌아감
    switch (menu()) {//입력 숫자에 따라 함수 호출
    case 1:
      factorial();
      break;
    case 2:
      sine();
      break;
    case 3:
      logBase10();
      break;
    case 7:
      printf("종료합니다.\n");
      break;
    default: //지정된 숫자가 아닌 경우
      printf("잘못된 선택입니다.\n");
      break;
    }
  }
}