#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
int main(){
	char s[100]; 
	//cuphap FILE *ptr = fopen("fileName.txt","mode")
	FILE *ptr = fopen("bt01.txt","r"); 
	 if (ptr == NULL) {
        printf("Loi!\n");
        return 1;  
    }
	fgets(s, sizeof(s), ptr);
	if(s[0]!='\0'){
		printf("%c",s[0]); 
	}else{
		printf("Chiu roi"); 
	} 
	
	 fclose (ptr); 
	return 0 ; 
} 
