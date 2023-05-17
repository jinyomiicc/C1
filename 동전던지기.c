#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int coin_toss(void); //전역변수 

int main(void) {
  int toss;
  int heads = 0;
  int tails = 0;
  srand((unsigned)time(NULL)); //음수 없이 현재 시간으로 초기화

  for(toss = 0; toss<100; toss++){ //toss가 99가 될 때까지 반복
    if(coin_toss() == 1) 
      heads++; //coin_toss가 1이면 heads 1씩 증가
    else
      tails++; //1이 아니면 tails 1씩 증가
  }
  printf("동전의 앞면: %d\n", heads);
  printf("동전의 뒷면: %d\n", tails);
  return 0;
}

int coin_toss(void){ //coin_toss 함수 만들기
  int head = rand() % 2; //head값은 rand를 이용해 랜덤으로 0 1 만 나오게 함
  return head; //head값 반환
}