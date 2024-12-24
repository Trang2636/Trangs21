#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
int main(){
	char s[100]; 
	//cuphap FILE *ptr = fopen("fileName.txt","mode")
	FILE *ptr = fopen("bt01.txt","w");
	if(ptr==NULL){
		printf("Loi"); 
	}else{
		printf("Moi ban nhap vao chuoi ki tu cho file bt01.txt:");
	fgets(s,100,stdin);
	s[strlen(s)-1]='\0'; 
	fprintf(ptr ,"%s", s);
	 fclose (ptr); 	
	} 
	return 0 ; 
} 
