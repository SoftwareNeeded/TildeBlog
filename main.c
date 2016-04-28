#include <stdio.h>
#include <string.h>

struct running { int val;
	int retval;
};
void println(char * text);
void mainloop(struct running *m);

int main(int argc, char *argv[]) {
	struct running m;
	m.val = 1;
	m.retval = 0;
	println("Welcome to TildeBlog!");
	while (m.val) {
		mainloop(&m);
	}
	return m.retval;
}

void mainloop(struct running *m) {
	char * sep = "---------------------";
	println(sep);
	println("1. Read your blog");
	println("2. Write a post (NYI)");
	println("3. Exit");
	printf("Choice: ");
	char choice[500];
	scanf("%s", choice);
	if (strcmp(choice,"3") == 0) {
		println(sep);
		m->val = 0;
	}
	if (strcmp(choice,"2") == 0) {
		println("NYI");
		println(sep);
		m->retval = -1;
		m->val = 0;
	}
	if (strcmp(choice,"1") == 0) {
		println("blahblahblah's blog");
		println("1. Test");
		println("Created on 1970-01-01 00:00:00 UTC+0:00");
		println("");
		println("This is a test to see if this works.");
		println("Eventually, you will be able to set your own title and write your own posts.");
	}
}

void println(char * text) {
	printf("%s\n",text);
}
