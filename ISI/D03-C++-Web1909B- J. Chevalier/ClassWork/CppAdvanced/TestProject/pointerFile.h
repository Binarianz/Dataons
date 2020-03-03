#pragma once
#include <iostream>
#include <string>
using namespace std;
int readInt();
int readInt(int min, int max);
int readInt(string message);
int readInt(string message, int min, int max);

void readThreeInts(int* a, int* b, int* c);
void swapInts(int* x, int* y);
void sortThreeInts(int* a, int* b, int* c);
void displayThreeInts(int* a, int* b, int* c);