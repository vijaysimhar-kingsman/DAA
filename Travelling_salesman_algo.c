#include<stdio.h>
int min=99999;


//void swap(char a[],int l,int i){
void swap(int a[],int l,int i){
	char temp;
	temp=a[l];
	a[l]=a[i];
	a[i]=temp;
}
//void permut(char a[],int l,int len){
void permut(int m,int n,int arr[][n],int a[],int l,int len){
	int i;
	int b[len];
	if(l==len){
		if(a[0]==0){
			int j,sum=0;	
			//printf("\n%c-->%c-->%c-->%c-->%c",a[0],a[1],a[2],a[3],a[4]);
			for(j=0;j<len;j++){
				if(j!=len-1){
					//printf("%c-->",a[j]);
					//printf("%d-->",a[j]);
					b[j]=a[j];
					printf("%d--->",b[j]);
				}else
					//printf("%c\t",a[j]);
					printf("%d\t",a[j]);
					b[j]=a[j];
			}int a,c;
			for(i=0;i<len-1;i++){
				a=b[i];
				c=b[i+1];
					
				//printf("\n______%d%d_____",a,c);
				
				sum=sum+arr[a][c];
				//printf(" sum : %d ",sum);
					//sum+=arr[b[len-1]][0];
				
			}a=b[len-1];
			sum=sum+arr[a][0];
			//printf("sum : %d\n",sum);
			if(min>sum){
				min=sum;
				
			}printf("cost : %d\n",sum);
			
		}
		
	}else{
		
		for(i=l;i<len;i++){
			swap(a,l,i);
			permut(m,n,arr,a,l+1,len);
			swap(a,l,i);
		}
	}
}
int main(){
	int l=0;
	
	int i,j;

	int len;
	printf("\nEnter no of cities: ");
	scanf("%d",&len);
	//len=5;
	//char a[4]="ABCDE";
	//char a[5]={'A','B','C','D','E'};
	//permut(a,l,len);
	//char  a;
	
	int a[len];
	for(i=0;i<len;i++){
		a[i]=i;
	}
	int arr[len][len];
	for(i=0;i<len;i++){
		printf("\nenter row %d elements :",i+1);
		for(j=0;j<len;j++){
			scanf("%d",&arr[i][j]);
			
		}
	}
	for(i=0;i<len;i++){
		//printf("\nenter row %d elements :"i+1);
		for(j=0;j<len;j++){
			//scanf("%d",&arr[i][j]);
			printf("%d ",arr[i][j]);
		}printf("\n");
	}int m,n;
	m=n=len;
	permut(m,n,arr,a,l,len);
	printf("\n\n%d is the min cost route:",min);
	
}
//vijaysimharockz@gmail.com
