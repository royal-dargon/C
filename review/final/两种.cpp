#include <stdio.h> 
#include <stdlib.h>

void insertion_sort_1() 
{  
  int n, *a, i, j, key;
  
  scanf("%d", &n);
  a = (int *) malloc(n * sizeof(int));
  
   for (i = 0; i < n; i++) 
      scanf("%d", &a[i]); 
	     for (i = 1; i < n; i++) {
             key = a[i]; j = i-1;
             
    while (j >= 0 && a[j] > key) 
	{ 
	 a[j+1] = a[j];
      j--; }
     a[j+1] = key;
  }
    for (i = 0; i < n; i++) printf("%d ", a[i]); puts("");
         free(a);
    }
    

void insertion_sort_3()
 {
   int n, *a, **p, i, j, *key; 
   
   scanf("%d", &n);
   p = (int **) malloc(n * sizeof(int *));
   a = (int *) malloc(n * sizeof(int)); for (i = 0; i < n; i++) 
   {
     scanf("%d", &a[i]); 
	 p[i] = a + i;
}
   for (i = 1; i < n; i++) { 
         key = p[i];
          j = i - 1;
   while (j >= 0 && *p[j] > *key) 
   {   p[j+1] = p[j];
       j--;
}
      p[j+1] = key;
}
      puts("");
   for (i = 0; i < n; i++) 
         printf("%d ", a[i]); 
	     puts("");
   for (i = 0; i < n; i++)
        printf("%d ", *p[i]); puts("");
        free(a), free(p);
}

int main() {
    insertion_sort_1();
	 return 0;
}
