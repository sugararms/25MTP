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
        printf("재시험 없습니다!\n");

    if (result == 0)
        printf("재시험 있습니다\n");

    return 0;
}