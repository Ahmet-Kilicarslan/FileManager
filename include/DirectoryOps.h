//
// Created by ahmet on 9/16/25.
//

#ifndef LION_DIRECTORYOPS_H
#define LION_DIRECTORYOPS_H

#include "Types.h"

//directory listing

DirectoryListing* get_directories(const char* directory_path);

void free_up_directory_listing(DirectoryListing* listing);

void display_directories(const DirectoryListing* listing);


#endif //LION_DIRECTORYOPS_H