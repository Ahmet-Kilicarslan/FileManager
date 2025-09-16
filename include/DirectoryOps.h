//
// Created by ahmet on 9/16/25.
//

#ifndef LION_DIRECTORYOPS_H
#define LION_DIRECTORYOPS_H

#include "FileOps.h"
typedef struct {
    FileInfo* files;
    int count;
    int capacity;
    char currentPath[256];
}
DirectoryListing;
#endif //LION_DIRECTORYOPS_H