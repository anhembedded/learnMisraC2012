//
// Created by PC on 1/12/2024.
//

#include "dynamicMemoryAllocation.hpp"
#include <iostream>
#include <string>
/* Write a C++ program to dynamically allocate an integer, a character and a string and assign a value to them. */
void func1()
{
    auto ptrInt = new int32_t;
    auto ptrChar = new char;
    auto ptrStr = new std::string;
    *ptrInt = 300;
    *ptrChar = 'C';
    *ptrStr = "This is a String";
    delete ptrInt;
    delete ptrChar;
    delete ptrStr;
}
//Write a C++ program to dynamically allocate an array of integers and strings and initialize its elements.
void func2()
{
    auto ptrInt = new int32_t[5];
    auto ptrStr = new std::string[5];
    delete[] ptrStr;
    delete[] ptrInt;
}
void func3()
{
    auto matrix = new int*[7];
    for (auto i = 0; i < 7; i++)
    {
        matrix[i] = new int[5];
    }
    for (auto i = 0; i < 7; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}
