int add(int n1, int n2)
{
    int a, b;
    if (n2 == 0)
        return n1;
    a = n1 ^ n2;
    b = (n1 & n2) << 1;
    return add(a, b);
}

