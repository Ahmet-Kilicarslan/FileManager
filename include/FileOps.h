

#ifndef LION_FILEOPS_H
#define LION_FILEOPS_H

typedef struct {
    char name[256];
    char path[1024];
    long size;
    int is_dir;
    char permissions[16];
    char last_modified[64];
    char extension[16];
}FileInfo;

typedef struct {
    int OperationType;// 1=copy, 2=move, 3=delete, 4=create
    char sourcePath[1024];
    char destinationPath[1024];
    char timeStamp[64];
    int success;
}
FileOperation;
#endif //LION_FILEOPS_H