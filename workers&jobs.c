/*
Assignment Problem
Assign n workers to n jobs. Each worker charges a different rate for each job specified by the cost matrix C[i,j].

Note each worker must be assigned to one and only one job.

 

The cost matrix specifies the problem instance.

 

A solution can be specified by an n-tuple that specifies the job assignment for the first, second, etc worker.

 

Then an exhaustive search would generate all the permutations and search for the minimal cost.

Cost of this algorithm? T(n!)

 

There is a better algorithm called the Hungarian method developed by Kong and Egervary.

*/

#include<stdio.h>
int min=99999;

void swap(int a[],int l,int i){
	char temp;
	temp=a[l];
	a[l]=a[i];
	a[i]=temp;
}

void permut(int m,int n,int arr[][n],int a[],int l,int len){
	int i;
	int b[len];
	if(l==len){
			int j,sum=0;	
			for(j=0;j<len;j++){
					b[j]=a[j];	
			}int val;
			for(i=0;i<len;i++){
					val=b[i];
					sum+=arr[val][i];	
			}if(min>=sum){
				min=sum;
				for(j=0;j<len;j++){		
					printf("w%d--->",b[j]);	
				}printf("\tcost : %d\n\n",sum);
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
	
	printf("\nEnter no of workers: ");
	scanf("%d",&len);
	
	int a[len];
	for(i=0;i<len;i++){
		a[i]=i;
	}
	int arr[len][len];
	for(i=0;i<len;i++){
		printf("\nenter worker %d charges for %d works respectively :",i+1,len);
		for(j=0;j<len;j++){
			scanf("%d",&arr[i][j]);		
		}
	}
	for(i=0;i<len;i++){
		for(j=0;j<len;j++){
			printf("%d ",arr[i][j]);
		}printf("\n");
	}int m,n;

	m=n=len;
	printf("J0--->J1--->J2--->J3\n");
	permut(m,n,arr,a,l,len);
	
	printf("\n\n%d is the minimum fair to make the work done:",min);
	
}
//vijaysimharockz@gmail.com
