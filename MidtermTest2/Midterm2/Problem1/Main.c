#include <stdio.h>


int PassOrFail(int score) {
    if (score >= 50)
        return 1;
    return 0;  
}

int main() {
    int myScore = 100;  
    int result = PassOrFail(myScore);

    if (result == 1)
        printf("����� �����ϴ�!\n");

    if (result == 0)
        printf("����� �ֽ��ϴ�\n");

    return 0;
}