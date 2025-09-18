//
// Created by ahmet on 9/16/25.
//


#include "DirectoryOps.h"
#include "../include/Utils.h"
#include <dirent.h>//directory ops
#include <stdio.h>//i/o ops
#include <stdlib.h>//memory ops
#include <string.h>//string functions


DirectoryListing *get_directories(const char *directory_path) {
    DIR* directory = opendir(directory_path);

    if (!directory) {
        printf("Error opening directory %s\n", directory_path);
        return NULL;
    }

    DirectoryListing *listing = calloc(1, sizeof(DirectoryListing));

    if (!listing) {
        printf("Error allocating memory for listing\n");
        closedir(directory);
        return NULL;
    }


    listing->count = 0;
    listing->capacity = 0;
    listing->files = NULL;

    strcpy(listing->currentPath, directory_path);

    struct dirent* entry;

    while ((entry = readdir(directory)) != NULL){

        printf("%s\n",entry->d_name);
    };

    closedir(directory);
    return listing;
};

void free_up_directory_listing(DirectoryListing *listing) {
};

void display_directories(const DirectoryListing *listing) {
};
