#include <stdio.h>
#include <conio.h>  // getch() 사용
#include <stdlib.h> // system("cls") 사용

void drawCake(int state) {
    system("cls"); // 화면 지우기

    // 케이크 윗부분 (초 + Happy)
    printf("      \033[40;33m          o           o\033[0m\n");
    printf("      \033[40;34m          |           \033[32m|\033[0m\n");
    printf("      ----------------------------------\n");
    printf("      |\033[45;37m\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\033[0m|\n");

    if (state == 1) {
        printf("      |\033[47;30m            \033[35mHappy\033[30m              \033[0m|\n");
    }
    else {
        printf("      |\033[47;30m                                \033[0m|\n");
    }

    printf("      ----------------------------------\n");

    // 케이크 아랫부분 (Birthday)
    printf("  ------------------------------------------\n");
    printf("  |\033[45;37m\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\033[0m|\n");

    if (state == 2) {
        printf("  |\033[47;30m              \033[36mBirthday\033[30m                  \033[0m|\n");
    }
    else {
        printf("  |\033[47;30m                                        \033[0m|\n");
    }

    printf("  ------------------------------------------\n");
}

int main() {
    int state = 0;

    drawCake(state);
    printf("\n'H' 키를 누르면 메시지가 바뀝니다! (Happy -> Birthday -> 초기화)\n");
    printf("종료하려면 ESC 키를 누르세요.\n");

    while (1) {
        char ch = getch();
        if (ch == 'H' || ch == 'h') {
            state = (state + 1) % 3;
            drawCake(state);
            printf("\n'H' 키를 누르면 메시지가 바뀝니다! (Happy -> Birthday -> 초기화)\n");
            printf("종료하려면 ESC 키를 누르세요.\n");
        }
        else if (ch == 27) { // ESC 키
            break;
        }
    }

    return 0;
}
