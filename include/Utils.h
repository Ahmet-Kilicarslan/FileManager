
#ifndef LION_UTILS_H
#define LION_UTILS_H

#include "DirectoryOps.h"

typedef struct {
    char currentDir[1024];
    char previousDir[1024];
    char clipboardPath[1024];
    int clipboardOperation;// 0=none, 1=copy, 2=cut
    int show_hidden_files;// 1=show, 0=hide files starting with '.'
    int sortMode;// 0=name, 1=size, 2=date
DirectoryListing* currentListing;
}
FileManagerState;
#endif //LION_UTILS_H