#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main (void){

FILE *fp;
FILE *fp_n;
char str[256];
char new[256];
    fp=fopen("test.txt","r");
    if(fp==NULL)
	    printf("File isn't opened\n");
    else
	    printf("File is opened\n");
    
    fp_n=fopen("new.txt","w");

    while(fgets(str,256,fp)!=NULL){
	    printf("%s",str);
	    for(int i=0;i<256;i++){
		    if(isalpha(str[i]))
			    new[i]=str[i];
		    else if (isspace(str[i]))
                            new[i]=str[i];
	            else if (str[i]=='\0')
		    {
		    new[i]='\0';
		    break;}
		    else
			    new[i]=' ';}
	    fprintf(fp_n,"%s",new);
            
    }

    fclose(fp);
    fclose(fp_n);
    
    return 0;
}
