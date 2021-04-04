#include<stdio.h>
#include<math.h>
struct point{
	int x;
	int y;
};
float power(int x,int y){
	int i=0;
	for(i=1;i<y;i++){
		x=x*x;
	}return x;
}
int main(){
	int len;int i=0;
	printf("enter how many points you wanna enter :");
	scanf("%d",&len);
	
	struct point p[len];
	
	int xval,yval;
	for(i=0;i<len;i++){
		printf("\nenter %d point x value :",i+1);
		scanf("%d",&xval);
		p[i].x=xval;
		printf("\nenter %d point y value :",i+1);
		scanf("%d",&yval);
		p[i].y=yval;
	}
	/*for(i=0;i<len;i++){
		printf("\n (%d ,%d )  ",p[i].x,p[i].y);
	}*/
	printf("\n");
	float min=999999;
	int j;
	float mdist=0;
	int k,l;
	for(i=0;i<len-1;i++){
		
		for(j=i+1;j<len;j++){
			mdist =0;
			int a=p[j].x;	float x2;	x2=power(a,2);
			int b=p[i].x;	float x1;	x1=power(b,2);
			int c =p[j].y;	float y2;	y2=power(c,2);
			int d=p[i].y;	float y1;	y1=power(d,2);
			float val=(x2-x1)+(y2-y1);
			printf("value ---%.2f\t",val);
			mdist  = sqrt(val);
			printf("mdist %.2f---\t",mdist);
			if(mdist<min){
				min=mdist;
				printf("\t\tmin \t%.2f---",min);
				
				k=i;
				l=j;
			}printf("\n");
		}
		
	}printf("\n\n(%d,%d),(%d,%d) are having closest path i.e %.2f\n ",p[k].x,p[k].y,p[l].x,p[l].y,min);
}












//vijaysimharockz@gmail.com

