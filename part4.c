#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int counts[28][28]={{0,},};
int ind=26;

void atoz(char x){
switch(x){
	case 'a':
	case 'A':
		counts[ind][0]++;
		ind=0;
		break;
	
	case 'b':
	case 'B':
	    counts[ind][1]++;
		ind=1;
		break;
	case 'c':
	case 'C':
		counts[ind][2]++;
		ind=2;
		break;
	case 'd':
	case 'D':
		counts[ind][3]++;
		ind=3;
		break;
	case 'e':
	case 'E':
		counts[ind][4]++;
		ind=4;
		break;
	case 'f':
	case 'F':
		counts[ind][5]++;
		ind=5;
		break;
	case 'G':
	case 'g':
		counts[ind][6]++;
		ind=6;
		break;
	case 'h':
	case 'H':
	    counts[ind][7]++;
		ind=7;
		break;
	case 'i':
	case 'I':
		counts[ind][8]++;
		ind=8;
		break;
	case 'j':
	case 'J':
		counts[ind][9]++;
		ind=9;
		break;
	case 'k':
	case 'K':
		counts[ind][10]++;
		ind=10;
		break;
	case 'l':
	case 'L':
		counts[ind][11]++;
		ind=11;
		break;
	case 'm':
	case 'M':
		counts[ind][12]++;
		ind=12;
		break;
	case 'n':
	case 'N':
		counts[ind][13]++;
		ind=13;
		break;
	case 'o':
	case 'O':
		counts[ind][14]++;
		ind=14;
		break;
	case 'p':
	case 'P':
		counts[ind][15]++;
		ind=15;
		break;
	case 'q':
	case 'Q':
		counts[ind][16]++;
		ind=16;
		break;
	case 'r':
	case 'R':
		counts[ind][17]++;
		ind=17;
		break;
	case 's':
	case 'S':
		counts[ind][18]++;
		ind=18;
		break;
	case 't':
	case 'T':
		counts[ind][19]++;
		ind=19;
		break;
	case 'u':
	case 'U':
		counts[ind][20]++;
		ind=20;
		break;
	case 'v':
	case 'V':
		counts[ind][21]++;
		ind=21;
		break;
	case 'w':
	case 'W':
		counts[ind][22]++;
		ind=22;
	    break;
	case 'x':
	case 'X':
		counts[ind][23]++;
		ind=23;
		break;
	case 'y':
	case 'Y':
	    counts[ind][24]++;
		ind=24;
	    break;
        case 'z':
	case 'Z':
	    counts[ind][25]++;
		ind=25;
	    break;
	case ' ':
	    counts[ind][26]++;
		ind=26;
		break;
	case '\n':
		counts[ind][27]++;
		ind=27;
		break;}	      	
}

int main (void){
	FILE *fp;
    char str[256];
	char mem[28]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',' ','N'};
    char pea[3];

	int deta_1[784]={0,};
    char deta_2[784][3];
	fp=fopen("new.txt","r");
    
	pea[2]='\0';
	if(fp==NULL)
	printf("file error");
    
	while(fgets(str,256,fp)!=NULL){
		for(int i=0;i<256;i++){
		if(str[i]=='\0')
		    break;
		atoz(str[i]);}
	}
	int count=0;
    for(int i=0;i<28;i++)
	for(int j=0;j<28;j++){
	pea[0]=mem[i];
	pea[1]=mem[j];
    
	deta_1[count]=counts[i][j];
	deta_2[count][0]=pea[0];
	deta_2[count][1]=pea[1];
	deta_2[count][2]=pea[2];
	count++;
}
    for(int i=0;i<784;i++)
	    for(int j=0;j<784-i;j++)
		    if(deta_1[j]<deta_1[j+1])
		    { 
			    int t = deta_1[j];
			    deta_1[j]=deta_1[j+1];
			    deta_1[j+1]=t;
            for(int k=0;k<3;k++){
			    char t2 = deta_2[j][k];
			    deta_2[j][k] = deta_2[j+1][k];
			    deta_2[j+1][k] = t2;}
		    }
    
	for(int i=0;i<784;i++)
	printf("%s %d\n",deta_2[i],deta_1[i]);
    
    

}