int sum (int n)
{
    (n > 0) && ( n += sum(n - 1));
    return n;
}
