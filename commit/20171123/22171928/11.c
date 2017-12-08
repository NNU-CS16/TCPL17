#include <stdio.h>
#include <stdlib.h>

struct data
{
    int nr;
    char const *value;
}
    data[] = {{1,"FOO"},{2,"BAR"},{3,"HELLO"},{4,"WORLD"}};

int data_cmp(void const *lhs, void const *rhs)
{
    struct data const *const l = lhs;
    struct data const *const r = rhs;

    if (l->nr < r->nr)
        return -1;
    else if (l->nr > r->nr)
        return 1;
    else 
        return 0;
}

int main (void)
{
    struct data key = {.nr = 3};
    struct data const *res = bsearch(&key, data, sizeof data[0]/ sizeof data[0],sizeof data[0], data_cmp);
    if (res)
        printf("NO %d: &s\n",res->nr, res->value);
    else
        printf("NO %d not found\n", key.nr);
}
