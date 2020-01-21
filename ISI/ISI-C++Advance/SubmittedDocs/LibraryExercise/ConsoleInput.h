#pragma once
#include <iostream>
#include <string>
using namespace std;

char readChar();
char readChar(char options[], int optionsCount);
char readChar(string message);
char readChar(string message, char options[], int optionsCount);

string readWord();
string readWord(string message);

string readLine();
string readLine(string message);

int readInt();
int readInt(int min, int max);
int readInt(string message);
int readInt(string message, int min, int max);

double readDouble();
double readDouble(double min, double max);
double readDouble(string message);
double readDouble(string message, double min, double max);

