    #include <stdlib.h>
    #include <stdio.h>
    struct data {
                    int nr;
                    char const *value;
                } dat[] = {
                            {1, "Foo"}, {2, "Bar"}, {3, "Hello"}, {4, "World"}
                          }; 
    int data_cmp(void const *lhs, void const *rhs) 
    {
        struct data const *const l = lhs;
        struct data const *const r = rhs;
                 
        if (l->nr < r->nr) return -1;
        else if (l->nr > r->nr) return 1;
        else return 0;
    }
                            
    int main() 
    {
        struct data key = { .nr = 3 };
        struct data const *res = bsearch(&key, dat, sizeof dat / sizeof dat[0],
        sizeof dat[0], data_cmp);
        if (res) 
            printf("No %d: %s\n", res->nr, res->value);
        else 
            printf("No %d not found\n", key.nr);
        return 0;
    }
