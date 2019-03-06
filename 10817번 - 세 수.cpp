#include<stdio.h>

int main(){
	int n1,n2,n3;
	int result;
	scanf("%d%d%d",&n1,&n2,&n3);
	if(n1 <= n2 && n1 <= n3){
		if(n2<=n3){
			result = n2;
			
		}else{
			result = n3;
			
		}
	}else if(n2 <= n1 && n2 <= n3){
			if(n1<=n3){
				result = n1;
			
			}else{
				result = n3;
			
			}
		}else if(n3 <= n1 && n3 <= n2){
			if(n1<=n2){
				result = n1;
			
			}else{
				result = n2;
			
			}
		}
		printf("%d",result);
	}
	
