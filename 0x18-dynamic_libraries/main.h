#ifndef MAIN_H
#define MAIN_H

int _abs(int n);
int _atoi(char *str);
char *__bss_start(char *str);
char *__cxa_finalize(char *str);
char *_edata(char *str);
char *_end(char *str);
char *_fini(char *str);
char *__gmon_start__(char *str);
int _init(int a, int b);
int _isalpha(int str);
int _isdigit(int str);
int _islower(int str);
int _isupper(int str);
char *_ITM_deregisterTMCloneTable(char *str);
char *_ITM_registerTMCloneTable(char *str);
char *_Jv_RegisterClasses(char *str);
char *_memcpy(char *a, char *c, unsigned int n);
char *_memset(char *c, char b, unsigned int n);
int _putchar(char str);
void _puts(char *str);
char *_strcat(char *str);
char *_strchr(char *str, char b);
int _strcmp(char *stra, char *strb);
char *_strcpy(char *stra, char *strb);
int _strlen(char *str);
char *_strncat(char *stra, char *strb, int n);
char *_strncpy(char *stra, char *strb, int n);
char *_strpbrk(char *str, char *c);
unsigned int *_strspn(char *str, char *b);
char *_strstr(char *str, char b);

#endif /* _MAIN_H */
