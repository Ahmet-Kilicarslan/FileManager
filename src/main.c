#include <stdio.h>
#include<stdbool.h>

#include "../include/Utils.h"



int main(void) {

    display_main_menu();

    int choice = get_menu_choice();

    switch (choice) {
        case 0:
            exit_program();
            break;
        case 1:

            break;
        case 2:

            break;
        case 3:

            break;
    }
    return 0;
}


