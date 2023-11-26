#include "text_to_binary.h"
#include <stddef.h>
#include <stdint.h>
#define MAX_BUFFER 300U

static const char *name = "Tran Hoang Anh";
#define BIT_READ(byte, bit) (((byte) >> (bit)) & 1U)
/**
 * @brief Calculate the length of a string up to a maximum of 100 characters.
 *
 * This function calculates the length of a string up to a maximum of 100 characters.
 * If the string is longer than 100 characters, it returns 0. If the string is NULL,
 * it also returns 0. Otherwise, it returns the length of the string.
 *
 * @param str The input string.
 * @return The length of the string if it's less than or equal to 100 characters, 0 otherwise.
 */
static uint32_t u32_StrLenLimit100Char(const char *str)
{
    uint32_t count = 0U;
    if (str == NULL)
    {
        return 0U;
    }
    else
    {
        while ((count < 100) && (str[count] != (const char)'\0'))
        {
            count++;
        }
        if ((count == 100) && (str[count] != (const char)'\0'))
        {
            count = 0U;
        }
    }
    return count;
}

const char *text_to_binary(const char *text)
{
    if (text == NULL)
    {
        return "notAString";
    }
    else
    {
        uint32_t strLenght = u32_StrLenLimit100Char(text);
        static char buffer[MAX_BUFFER] = {'\0'};
        uint32_t textIndex = 0U;
        uint32_t bufferIndex = 0U;
        if (strLenght > 0)
        {
            while((textIndex <= 20U) && (textIndex <= strLenght))
            {
                for (uint32_t i = 0U; i <= 7U; i++)
                {
                   buffer[bufferIndex] = BIT_READ(text[textIndex], i);
                    bufferIndex++;
                }
                 bufferIndex++;
                 textIndex++;
            }
                
            
        }
    }
    return "HoangAnh";
}