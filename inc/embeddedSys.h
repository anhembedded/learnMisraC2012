//
// Created by PC on 12/10/2023.
//

#ifndef LEARNMISRAC2012_EMBEDDEDSYS_H
#define LEARNMISRAC2012_EMBEDDEDSYS_H
#include <stdint.h>
#include <stddef.h>

enum systemDef
{
    ARR_MAX_SIZE = 1000,
    C_STRING_MAX_SIZE = 3000
};

struct u_string
{
    char *str;
    uint32_t size;
    uint32_t capacity;
};
typedef struct u_string u_string;
struct u_arrayType
{
    uint32_t *at;
    uint32_t size;
    uint32_t capacity;
};
typedef struct u_arrayType u_array;


#endif //LEARNMISRAC2012_EMBEDDEDSYS_H
