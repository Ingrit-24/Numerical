#include<stdio.h>
#include<stdlib.h>
#include<time.h>

	struct mem {
	int st;
	char name;
	int num;
	double prob;
	};

	struct mem A[28];

char random_c(int ran){
	int boder =0;
	int i=0;
	while(1){
	boder+=A[i].num;
	if(ran<=boder)
	return A[i].name;
	i++;}
}

int main(void){

FILE *fp;

srand((unsigned int)time(NULL));
fp=fopen("deta.csv","r");
if(fp==NULL)
	printf("ERROR");
char str[64];


for(int i=0;i<28;i++){
fgets(str,sizeof(str),fp);
sscanf(str,"%d,%c,%d,%lf",&A[i].st,&A[i].name,&A[i].num,&A[i].prob);
if(A[i].name=='N')
	A[i].name='\n';
}

fclose(fp);

int sum=0 ;

for(int i=0;i<28;i++)
sum+=A[i].num;

char create[2500];
for(int i=0;i<2499;i++){
create[i]=random_c(rand()%sum+1);
}
create[2499]='\0';
printf("%s",create);
puts("");


return 0;}
