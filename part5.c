#include<stdio.h>
#include<stdlib.h>
#include<time.h>

char alfabet[28]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',' ','\n'};

char create(int *mem ,int random ,int *ind){
int border=0;
int i=0;
while(1){
    border+=mem[i];
    if(random<border)
    {
        *ind=i;
        return alfabet[i];
    }
    i++;
}
}

int main(void){

srand((unsigned int)time(NULL));

FILE *fp;
int counts[28][28];
char gomi[3];
gomi[2]='\0';
srand((unsigned int)time(NULL));
fp=fopen("part4.csv","r");
if(fp==NULL)
	printf("ERROR");
char str[64];

int  sums[28]={0,};
for(int i=0;i<28;i++)
    for(int j=0;j<28;j++){
        fgets(str,sizeof(str),fp);
        sscanf(str,"%c%c,%d",&gomi[0],&gomi[1],&counts[i][j]);
        sums[i]+=counts[i][j];
    }

int ind=26;

char passege[1000];
for(int i=0;i<1000;i++){
passege[i]=create(counts[ind],rand()%sums[ind]+1,&ind);
}

printf("%s\n",passege);
fclose(fp);

return 0;}
