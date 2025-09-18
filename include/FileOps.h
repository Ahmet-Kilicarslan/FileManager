

#ifndef LION_FILEOPS_H
#define LION_FILEOPS_H

#include "Types.h"

//file operations
int copy_file(const char* source, const char* destination);//returns 0 if success

int delete_file(const char* filepath);

int rename_file(const char* oldName, const char* newName);

int move_file(const char* source, const char* destination);

//file info functions
FileInfo get_file_info( const char* filepath);

void display_file_info(const FileInfo* file_info);

int file_exists(const char* filepath);

//helper functions
long get_file_size(const char* filepath);

char* get_file_extension(const char* filepath);

#endif //LION_FILEOPS_H