include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char Black[1], White[1];	
	
	printf("Black is:\n");
	scanf("%s", Black);
	
	printf("White is:\n");
	scanf("%s", White);
	
    int size,row,column;

    if(argc <= 1)
        size = 8;
    else
        size = atoi(argv[1]);

    printf("%d x %d Chessboard:\n",size,size);
    for(row=0;row<size;row++)
    {
        /* Draw the top line */
        for(column=0;column<size;column++)
            printf(" ---");
        putchar('\n');
        
        /* Draw the squares */
        for(column=0;column<size;column++)
        	if((column%2==0 && row%2==0)||(column%2!=0 && row%2!=0))
        	{
            printf("| %s ",White);
        	}
        	else if((column%2==0 && row%2!=0)||(column%2!=0 && row%2==0))
        	{
            printf("| %s   ",Black);
        	}
		printf("|\n");
    }
    
    /* Draw the bottom line */
    for(column=0;column<size;column++)
        printf(" ---");
    putchar('\n');

    return(0);
}
