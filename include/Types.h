

#ifndef LION_TYPES_H
#define LION_TYPES_H

typedef struct {
    char name[256];
    char path[1024];
    long size;
    int is_dir;
    char permissions[16];
    char last_modified[64];
    char extension[16];
} FileInfo;

typedef struct {
    int OperationType; // 1=copy, 2=move, 3=delete, 4=create
    char sourcePath[1024];
    char destinationPath[1024];
    char timeStamp[64];
    int success;
}
FileOperation;


typedef struct {
    FileInfo *files;
    int count;
    int capacity;
    char currentPath[256];
}
DirectoryListing;

typedef struct {
    char currentDir[1024];
    char previousDir[1024];
    char clipboardPath[1024];
    int clipboardOperation; // 0=none, 1=copy, 2=cut
    int show_hidden_files; // 1=show, 0=hide files starting with '.'
    int sortMode; // 0=name, 1=size, 2=date
    DirectoryListing *currentListing;
}
FileManagerState;


// Enum types for better code readability
typedef enum {
    SORT_BY_NAME = 0,
    SORT_BY_SIZE = 1,
    SORT_BY_DATE = 2
} SortMode;

typedef enum {
    CLIPBOARD_NONE = 0,
    CLIPBOARD_COPY = 1,
    CLIPBOARD_CUT = 2
} ClipboardOperation;

typedef enum {
    OP_COPY = 1,
    OP_MOVE = 2,
    OP_DELETE = 3,
    OP_CREATE = 4
} OperationType;

#define MAX_PATH_LENGTH 1024
#define MAX_FILENAME_LENGTH 256
#define MAX_FILES_PER_DIRECTORY 10000
#define MAX_OPERATION_HISTORY 100

// Function return codes
#define FILE_SUCCESS 0
#define FILE_ERROR_NOT_FOUND -1
#define FILE_ERROR_PERMISSION -2
#define FILE_ERROR_NO_MEMORY -3
#define FILE_ERROR_INVALID_PATH -4
#define FILE_ERROR_DISK_FULL -5


#endif //LION_TYPES_H
