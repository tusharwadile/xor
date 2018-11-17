#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
    int main(void)
    {
        char data[100];
        int key;
        int length;
        int i;
 
 
        printf("Enter 2 digits key: ");
        scanf("%d", &key);

        printf("\nEnter data to encrypt: ");
        scanf("%s",data);
	
 	length = strlen(data);
        for(i=0; i<length; i++)
        {
            data[i] = data[i]^key;
        }
 
        printf("\n**** Encrypted Data *****");
        printf("\n%s\n", data);
 
    			// flushall () This function clear all buffers associated with input streams, and write any buffers associated 				//	with output streams.         
 
 	
        printf("\nEnter unlock key: ");
        scanf("%d", &key);
 
        for(i=0; i<length; i++)
        {
            data[i] = data[i]^key;
        }
 
        printf("\n***** Decrypted Data *****");
        printf("\n%s\n\n", data);
	return(0);
}
 
 
