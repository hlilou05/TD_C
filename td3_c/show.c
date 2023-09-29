#include "show.h"
void Print(int *ptr){
printf("(%d) addr pointed to by p: %d\n", (int)getpid(), ptr);
}