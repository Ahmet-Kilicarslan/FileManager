
#ifndef LION_UTILS_H
#define LION_UTILS_H

#include "Types.h"

void display_main_menu(void);

void exit_program(void);

void clear_screen(void);

int get_menu_choice(void);

FileManagerState* create_state(void);//void for no params in C

void destroy_state(FileManagerState* state);

void display_error(const char* message);

#endif //LION_UTILS_H