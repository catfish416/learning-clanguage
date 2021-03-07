#include <stdio.h>

union {
	char c;
	int a;
}a;


int main() {

/* impl func strstr()
	char* src = "abcdefghabcddef";
	char* target = "def";
	printf("result is %s\n", my_strstr(src, target));
*/

/* judge little end or big end -- 1
	a.a = 1;
	if (1 == a.c) printf("little\n");
	else printf("big\n");
*/

/* judge little end or big end -- 2
	int a = 1;
	char* p = (char*)&a;
	if(1 == *p) printf("little\n");
	else printf("big\n");
*/

	printf("hello, world\n");
	return 0;
}
