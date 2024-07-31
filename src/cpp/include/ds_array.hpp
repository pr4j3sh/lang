#ifndef DS_ARRAY_H
#define DS_ARRAY_H

#include <iostream>
using namespace std;

string *create_array(int);
void print_array(string *, int);
pair<string *, int> insert_beg(string *, int, string);
pair<string *, int> insert_end(string *, int, string);
pair<string *, int> insert_mid(string *, int, string, int);
void free_mem(string *);

#endif
