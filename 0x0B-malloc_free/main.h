char *create_array(unsigned int size, char c);
void print_hex(char *buf, unsigned int sz);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
void show_grid(int **g, int w, int h);
void free_grid(int **g, int h);
int **alloc_grid(int w, int h);
char *argstostr(int ac, char **av);
void print_words(char **words);
int count_words(char *str);
char **strtow(char *str);


