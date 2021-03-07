#include <stdio.h>
#include <string.h>

char* my_strstr(char* src, char* sub)
{
	if (NULL == src || NULL == sub || strlen(src) < strlen(sub))
		return NULL;
	
	int i;
	while(*src) {
		for(i = 0; *(src + i) == *(sub + i); i++) {
			if(*(sub + i + 1) == '\0')
				return src;
		}
		src++;
	}
	return NULL;
}

char * xx_strstr(const char *cs, const char *ct) {
    if (NULL == cs || NULL == ct || strlen(cs) < strlen(ct))
		return NULL;
	
	int i;
	while(*cs) {
		for(i = 0; *(cs + i) == *(ct + i); i++) {
			if(*(ct + i + 1) == '\0')
				return cs;
		}
		cs++;
	}
	return NULL;
}

int main() {
    char* src = "helloadfdsaworlddfs";
    char* target = "world";

    /* strstr method - 2 */
    printf("src: %s\n target: %s\n rslt: %s\n", src, target, xx_strstr(src, target));

    /* strstr method - 1 
    int src_len = strlen(src);
    int target_len = strlen(target);

    int i;
    for(i = 0; i < src_len - target_len; i++) {
        if (0 == strncmp(&src[i], target, target_len))
            break;
    }

    printf("index = %d, str: %s\n", i, &src[i]);
    */

    return 0;
}
