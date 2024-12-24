#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
int main(){
	char f[100];
	int number ; 
	int i; 
	int n ; 
	//cuphap FILE *ptr = fopen("fileName.txt","mode")
	FILE *ptr = fopen("bt05.txt","w");
	if(ptr==NULL){
		printf("Loi"); 
	}else{
		printf("Moi ban nhap vao so dong cho file bt05.txt:");
		scanf("%d",&n);
		getchar(); 
		for(i=0;i<n;i++){
			printf("Moi nhap vao noi dung dong %d",i+1);
			fgets(f,100,stdin);
			f[strlen(f)-1]='\0'; 
        	fprintf(ptr ,"%s", f);
	   }
	}
	fclose(ptr); 
	    	ptr = fopen("bt05.txt","r");
	    printf("\nNoi dung cua file bt05.txt la:\n");
    while (fgets(f, sizeof(f), ptr)) {
        printf("%s", f);
}
fclose(ptr); 
		return 0;
}
