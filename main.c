#include <stdio.h>
int main(){
	int i,j;
	int mat[3][3];
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Digite o valor de %d,%d: ",i,j);
			scanf("%d",&mat[i][j]);
		}
		
	}
		printf("Matriz:\n");
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",mat[i][j]);
			
		}
		printf("\n");
	}
	
	return 0;
}