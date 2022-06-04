#include<stdio.h>

int main(){
	int n;
	printf("Nhap vao so nguyen co 3 chu so : ");
	scanf("%d",&n);
	do{
		printf("Nhap lai : ");
		scanf("%d",&n);
	}
	while(n<100 || n>1000);
	
	int k;
	switch(k){
		case 1:
			printf("Mot");
			case 2:
				printf("Hai");
				case 3:
					printf("Ba");
					case 4:
						printf("Bon");
						case 5:
							printf("Nam");
							case 6:
								printf("Sau");
								case 7:
									printf("Bay");
									case 8:
										printf("Tam");
										case 9:
											printf("Chin");
											case 0:
												printf("Khong");
	}
	int i;
	while(n!=0){
		i=n%10;
		n=n/10;
		
	}
}
