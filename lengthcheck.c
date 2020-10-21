/*Written by Akash Shetty 

/*line checker code that checks if your code has any lines that exceeds 80 characters. It will  */ 

#include <stdio.h> 

int arrprint(char var[], int *arr_size); 
/*print function */ 

int main (void) { 
  char line[999]; 
  /*999 is  maximum size
   a line*/
   
   int count = 0;
   char ins_char = ’ ’;
   
   while (!feof(stdin) &&
          scanf("%c", &ins_char) == 1) {
        /*want feof to be false to read
        the whole input*/
        
        if (ins_char == ’\n’ ) {
          arrprint(line, &count); 
        } else { 
          line[count] = ins_char;
          count++;
          /*if new line is not found it keeps going */ 
          
         }
         
    }
    
    return 0; 
    /* ends when fully run */ 
} 

int arrprint(char var[], int *arr_size) {
  int iterate = 0;
  /*used to iterate through the whole array */ 
  
  if (*arr_size > 80) { 
    /*80 is the max array size */ 
    
    printf("X"); 
    /* If over 80 than this is printed */ 
    
  } else { 
    printf(" "); 
  } 
  
  printf(" "); 
  /*second blank space */ 
  
  if (*arr_size > 99) { 
    printf("%d" , *arr_size); 
  } else if (*arr_size > 9) { 
    printf(" "); 
    printf("%d" , *arr_size); 
  } else { /*print single digit */ 
    printf(" "); 
    printf(" "); 
    printf("%d", *arr_size); 
    
  } 
  
  
  printf(":"); 
  printf(" "); 
  
  while (iterate < *arr_size) { 
    printf("%c" , var[iterate]); 
    /*prints the passed array */ 
    
    iterate++; 
    
  } 
  
  printf("/n"); 
  
  *arr_size = 0; 
  /*resets the counter */ 
  
  
  return 0; 
  
}
    
    




 
 
