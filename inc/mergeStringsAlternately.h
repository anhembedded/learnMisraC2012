//
// Created by PC on 12/12/2023.
//

#ifndef LEARNMISRAC2012_MERGESTRINGSALTERNATELY_H
#define LEARNMISRAC2012_MERGESTRINGSALTERNATELY_H
#include "embeddedSys.h"
#include <string.h>
char* mergeAlternately(const char* word1,const char* word2) {
    uint32_t len1 = strlen(word1);
    uint32_t len2 = (int)strlen(word2);
    uint32_t len;
    if (len1 > len2) {
        len = len1;
    } else {
        len = len2;
    }
    char* result = (char*)malloc(sizeof(char) * (len1 + len2 + 1));

    int i = 0;
    for (; i < len; i++) {
        if (i < len1) {
            result[2*i] = word1[i];
        }
        if (i < len2) {
            result[2*i+1] = word2[i];
        }
    }
    result[2*i] = '\0';
    return result;
}

#endif //LEARNMISRAC2012_MERGESTRINGSALTERNATELY_H
