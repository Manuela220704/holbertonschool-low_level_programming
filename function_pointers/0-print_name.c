#include <stdio.h>

void print_name(char *name, void (*f)(char *)) {
	f(name);
}

void print(char *name) {
	printf("El nombre es: %s\n", name);
}

int main() {
	char name[] = "Juan";
	print_name(name, print);
	return 0;
}

