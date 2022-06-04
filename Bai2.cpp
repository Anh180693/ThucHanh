#include<stdio.h>
#include<string.h>

void sapxep(char arr[]){
	int n = strlen(arr);
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				char temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main(){
	char ary[100] = "AnhTuan";
	sapxep(ary);
	printf("Chuoi sau khi sap xep la :  %s",ary);
	
}
