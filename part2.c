#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int counts[28]={0,};
double probability[28];

void atoz(char x){
switch(x){
	case 'a':
	case 'A':
		counts[0]++;
		break;
	
	case 'b':
	case 'B':
	        counts[1]++;
		break;
	case 'c':
	case 'C':
		counts[2]++;
		break;
	case 'd':
	case 'D':
		counts[3]++;
		break;
	case 'e':
	case 'E':
		counts[4]++;
		break;
	case 'f':
	case 'F':
		counts[5]++;
		break;
	case 'G':
	case 'g':
		counts[6]++;
		break;
	case 'h':
	case 'H':
	        counts[7]++;
		break;
	case 'i':
	case 'I':
		counts[8]++;
		break;
	case 'j':
	case 'J':
		counts[9]++;
		break;
	case 'k':
	case 'K':
		counts[10]++;
		break;
	case 'l':
	case 'L':
		counts[11]++;
		break;
	case 'm':
	case 'M':
		counts[12]++;
		break;
	case 'n':
	case 'N':
		counts[13]++;
		break;
	case 'o':
	case 'O':
		counts[14]++;
		break;
	case 'p':
	case 'P':
		counts[15]++;
		break;
	case 'q':
	case 'Q':
		counts[16]++;
		break;
	case 'r':
	case 'R':
		counts[17]++;
		break;
	case 's':
	case 'S':
		counts[18]++;
		break;
	case 't':
	case 'T':
		counts[19]++;
		break;
	case 'u':
	case 'U':
		counts[20]++;
		break;
	case 'v':
	case 'V':
		counts[21]++;
		break;
	case 'w':
	case 'W':
		counts[22]++;
	        break;
	case 'x':
	case 'X':
		counts[23]++;
		break;
	case 'y':
	case 'Y':
	        counts[24]++;
	        break;
        case 'z':
	case 'Z':
	        counts[25]++;
	        break;
	case ' ':
	        counts[26]++;
		break;
	case '\n':
		counts[27]++;
		break;}	      	
}

int main (void){
int count=0;
FILE *fp;
FILE *fp_d;
char str[256];
char new[256];
    fp=fopen("new.txt","r");
    if(fp==NULL)
	    printf("File isn't opened\n");
    else
	    printf("File is opened\n");
    

    while(fgets(str,256,fp)!=NULL){
	    printf("%s",str);
	    for(int i=0;i<256;i++)
		     {if(str[i]=='\0')
		     break;
		     count++;
		     atoz(str[i]);}
	    
            
    }
    
    
    char mem[28]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',' ','N'};



    for(int i=0;i<28;i++)
	    for(int j=0;j<27-i;j++)
		    if(counts[j]<counts[j+1])
		    { 
			    int t = counts[j];
			    counts[j]=counts[j+1];
			    counts[j+1]=t;

			    char t2 = mem[j];
			    mem[j] = mem[j+1];
			    mem[j+1] = t2;
		    }
    for(int i=0;i<28;i++)
	    probability[i]=(double)counts[i]/count;
    fp_d=fopen("deta.csv","w");
    if(fp_d==NULL)
	    printf("file isn't opened\n");
    else
	    printf("file is opened\n");
    for(int i=0;i<28;i++){
	    printf("%c: %d\n",mem[i],counts[i]);
            fprintf(fp_d,"%d,%c,%d,%f\n",i+1,mem[i],counts[i],probability[i]);
    }
    fclose(fp);
    fclose(fp_d);
    
    return 0;
}
