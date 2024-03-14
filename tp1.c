/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
     int n = 0;
     int somme = 0;
    
    printf ("saisir n");
    scanf("%i", &n);
    
    for (int i=1; i<=n; i++)
            somme = somme + i;
            
            
    printf("somme = %d\n",somme);
    
    
    return 0;
}
