#include <stdio.h>

#define RESET   "\x1b[0m"
#define RED     "\x1b[41m"
#define YELLOW  "\x1b[43m"
#define BLUE    "\x1b[44m"
#define WHITE   "\x1b[47m"
#define BLACK   "\x1b[40m"
#define GRAY    "\x1b[100m"

int main() {
    printf(BLACK"                                                  "RESET"\n");
    printf(BLACK"                                                  "RESET"\n");
    printf(BLACK"                                                  "RESET"\n");
    printf(BLACK"                                     "GRAY"      "BLACK"                       "RESET"\n");
    printf(BLACK"                                     "GRAY"  "WHITE"      "GRAY"  "BLACK"                       "RESET"\n");
    printf(BLACK"                                     "GRAY"  "WHITE"      "GRAY"  "BLACK"                       "RESET"\n");
    printf(BLACK"                                     "GRAY"      "BLACK"                       "RESET"\n");
    printf(BLACK"                                "RED"                    "BLACK"                  "RESET"\n");
    printf(BLACK"                              "RED"                        "BLACK"                "RESET"\n");
    printf(BLACK"                            "RED"                            "BLACK"              "RESET"\n");
    printf(BLACK"                          "RED"                                "BLACK"            "RESET"\n");
    printf(BLACK"                        "RED"                                    "BLACK"          "RESET"\n");
    printf(BLACK"                      "RED"                                        "BLACK"        "RESET"\n");
    printf(BLACK"                    "RED"                                            "BLACK"      "RESET"\n");
    printf(BLACK"                  "RED"                                                "BLACK"    "RESET"\n");
    printf(BLACK"                "RED"                                                    "BLACK"  "RESET"\n");
    printf(BLACK"              "RED"                                                        "BLACK""RESET"\n");
    printf(BLACK"            "RED"                                                            "RESET"\n");
    printf("         "YELLOW"██████████████████████████████████████████████"RESET"\n");
    printf("         "YELLOW"██"BLUE"██"YELLOW"  "BLUE"██"YELLOW"  "BLUE"██"YELLOW"                      "BLUE"██"YELLOW"  "BLUE"██"YELLOW"  "BLUE"██"YELLOW"██"RESET"\n");
    printf("         "YELLOW"██"YELLOW"                                        "YELLOW"██"RESET"\n");
    printf("         "YELLOW"██"YELLOW"                                        "YELLOW"██"RESET"\n");
    printf("         "YELLOW"██████████████████████████████████████████████"RESET"\n");

    return 0;
}
