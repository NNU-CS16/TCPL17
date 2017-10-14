/*rightrot: totate x to the right by n position*/
unsigned rightrot(unsigned x,int n)
{
 int wordlength(void);
 int rbit;
 /* rightmost bit*/
 while(n-- >0)
 {
  rbit = (x & 1) << (wordlength() -1);
  x = x >> 1;
     x = x | rbit;
 }
}

/*Calculates the word size used by the computer that runs the program */

int wordlength(void)
{
 int i;
 unsigned v = (unsigned) ~0;
 for(i = 1; (v = v >> 1) > 0; ++i);
 return i;
}
