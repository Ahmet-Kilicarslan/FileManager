
#include "../include/Utils.h"
#include <stdio.h>
#include <stdlib.h>

void display_main_menu(void){
    const char* menu =
        "\n"
        "╔══════════════════════════════════════╗\n"
        "║           FILE MANAGER v1.0          ║\n"
        "╠══════════════════════════════════════╣\n"
        "║                                      ║\n"
        "║  📁 [1] List Files & Directories      ║\n"
        "║  📋 [2] Copy File                     ║\n"
        "║  🗑️ [3] Delete File                   ║\n"
        "║  📂 [4] Create Directory              ║\n"
        "║  📄 [5] File Information              ║\n"
        "║  🔄 [6] Refresh View                  ║\n"
        "║  🚪 [0] Exit Program                  ║\n"
        "║                                      ║\n"
        "╚══════════════════════════════════════╝\n"
        "\n"
        "💡 Enter your choice (0-6): \n";

    printf("%s", menu);
};

void exit_program(void) {
    const char* goodbye =
        "\n"
        "╔══════════════════════════════════════╗\n"
        "║            GOODBYE!                  ║\n"
        "║                                      ║\n"
        "║   Thank you for using File Manager   ║\n"
        "║         Have a great day! 👋         ║\n"
        "║                                      ║\n"
        "╚══════════════════════════════════════╝\n"
        "\n"
        ;
    printf("%s", goodbye);

    exit(0);
};

int get_menu_choice(void) {

int choice;

    scanf("%d", &choice);

    while (getchar() != '\n') {
        // Keep reading until we find newline
    }
    return choice;

};
