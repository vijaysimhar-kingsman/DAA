#include<stdio.h>

int main(){
	
	int  i=0,j=0,mlen,slen;//main array length and sub array length ....mlen and  slen
	
	//reading mian array
	
	printf("how many elements do you wanna enter in to main arrar: ");
	scanf("%d",&mlen);
	int main_arr[mlen];	
	for(i=0;i<mlen;i++){
		printf("\nEnter element : ");
		scanf("%d",&main_arr[i]);
	}
	//reading sub array
	printf("how many elements do you wanna enter in to sub arrar: ");
	scanf("%d",&slen);
	int sub_arr[slen];	
	for(i=0;i<slen;i++){
		printf("\nEnter element : ");
		scanf("%d",&sub_arr[i]);
	}
	int f=0,c=0;
	for(i=0;i<((mlen-slen)+1);i++){
		f=0;
		for(j=i;j<(i+slen);j++){
			if(main_arr[j]==sub_arr[j-i]){
				f++;
			}else{
				break;
			}
		}if(f==slen
		){
			printf("match found from index %d to %d",i,i+slen-1);
			c=1;
			break;
		}
	}if(c==0){
		printf("sub_array didn't matched ");
	}


}



//vijaysimharockz@gmail.com

