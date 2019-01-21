#include <stdio.h>

int main (void) {
   struct std {
      char sNum[10];
      char name[10];
      int year;
      struct std* ptr;
   };
   struct std s = {"hellohello", "sonchaewon", 1994, &s};

   printf ("sNum:%u\n",sizeof(s.sNum));
   printf ("name:%u\n",sizeof(s.name));
   printf ("year:%u\n",sizeof(s.year));
   printf ("std memory address:%u, ptr memory address:%u, ptr value:%u\n",&s,&s.ptr,s.ptr);
   printf ("std size:%u ptr size:%u\n",sizeof(s),sizeof(s.ptr));
   return 0;
}