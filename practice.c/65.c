#include <stdio.h>
 int main() {
    char c;
     for (c = 'a'; c <= 'm'; c++) {
         putchar(c);
     }
     putchar('\n');  
     for (c = 'n'; c <= 'z'; c++) {
         putchar(c);
     }
     putchar('\n'); 
     for (c = 'z'; c >= 'n'; c--) {
         putchar(c);
     }
     putchar('\n');  
     for (c = 'm'; c >= 'a'; c--) {
         putchar(c);
     }
     putchar('\n');  
     return 0;
 }