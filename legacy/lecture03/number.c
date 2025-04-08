
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>  // setlocale 헤더 추가

int main() {
    setlocale(LC_ALL, "ko_KR.UTF-8"); // 로케일을 한국어로 설정

    int target, guess, attempts = 0;

    srand(time(0));  // 랜덤 시드 설정
    target = rand() % 100 + 1;  // 1과 100 사이의 랜덤 숫자 생성

    printf("숫자 맞추기 게임!\n");
    printf("1과 100 사이의 숫자를 맞춰보세요.\n");

    do {
        printf("숫자를 입력하세요: ");
        scanf("%d", &guess);
        attempts++;  // 시도 횟수 증가

        if (guess > target) {
            printf("너무 높아요! 다시 시도해보세요.\n");
        } else if (guess < target) {
            printf("너무 낮아요! 다시 시도해보세요.\n");
        } else {
            printf("정답입니다! %d번 만에 맞췄어요.\n", attempts);
        }
    } while (guess != target);

    return 0;
}
