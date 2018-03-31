//1. in C, no limit input

#include <stdio.h>
#include <string.h>//strlen, strcpy, strcat
#include <stdlib.h>//malloc

#define LENGTH 5
int main() {
	char s[LENGTH];
	char *t, *u;
	int size = 0;
	int len;
	t = (char*)calloc(1,sizeof(char*));//reset
	do
	{
		fgets(s, LENGTH, stdin);
		len = strlen(s);
		size += len;

		u=(char*)malloc(size);
		strcpy(u, t);
		strcat(u, s);
		t = u;
	} while (len == LENGTH-1 && s[LENGTH-2] != '\n');//because fgets copy strings from stdin 'LENGTH-1', and insert '\0' at index num 'LENGTH-1', then 'len''s maximum value can be just 'LENGTH-1'
	printf("%s", t);
	return 0;
}

//2. in C++, no limit input
/*
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	cout << s;
}*/