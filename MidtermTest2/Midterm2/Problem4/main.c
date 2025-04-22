#include <stdio.h>
#include <conio.h>  // getch() ���
#include <stdlib.h> // system("cls") ���

void drawCake(int state) {
    system("cls"); // ȭ�� �����

    // ����ũ ���κ� (�� + Happy)
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

    // ����ũ �Ʒ��κ� (Birthday)
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
    printf("\n'H' Ű�� ������ �޽����� �ٲ�ϴ�! (Happy -> Birthday -> �ʱ�ȭ)\n");
    printf("�����Ϸ��� ESC Ű�� ��������.\n");

    while (1) {
        char ch = getch();
        if (ch == 'H' || ch == 'h') {
            state = (state + 1) % 3;
            drawCake(state);
            printf("\n'H' Ű�� ������ �޽����� �ٲ�ϴ�! (Happy -> Birthday -> �ʱ�ȭ)\n");
            printf("�����Ϸ��� ESC Ű�� ��������.\n");
        }
        else if (ch == 27) { // ESC Ű
            break;
        }
    }

    return 0;
}
