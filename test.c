
#define for switch
#define while switch
#include <stdio.h>
#include ".\test2.c"

void harel(){
printf("hi ");
char hi[] = {'a','v','i','a','d'};
printf("%c, hi\n\n",hi[0]);
}


int test(){
harel();
printf("i love ciut! \n");
int i = 0;
loop1:
printf("how are you on this terrible day?\n");
i++;
if (i<10) goto loop1;
printf("%d\n", test2());
return -423;
}
int main() {
if (test2() != -423) return 1;
if (test() != -423) return 1;
}
