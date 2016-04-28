#include <stdio.h>
#include <string.h>

void println(char * text);

int main(int argc, char *argv[]) {
	println("Welcome to TildeBlog! Choose an option!");
	println("1. Read your blog");
	println("2. Write a post (NYI)");
	println("3. Exit");
	char choice[500];
	scanf("%s", choice);
	if (strcmp(choice,"3") == 0) {
		return 0;
	}
	if (strcmp(choice,"2") == 0) {
		println("NYI");
	}
	if (strcmp(choice,"1") == 0) {
		println("blahblahblah's blog");
		println("1. Test");
		println("Created on 1970-01-01 00:00:00 UTC+0:00");
		println("");
		println("This is a test to see if this works.");
		println("Eventually, you will be able to set your own title and write your own posts.");
	}
	return 0;
}

void println(char * text) {
	printf("%s\n",text);
}
