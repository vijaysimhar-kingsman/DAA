#include<stdio.h>
struct point{
	int x;
	int y;
};
int main(){
	int len;int i=0,j,k;
	printf("enter how many points you wanna enter :");
	scanf("%d",&len);
	
	struct point p[len];
	//inputing points 
	int xval,yval;
	for(i=0;i<len;i++){
		printf("\nenter %d point x value :",i+1);
		scanf("%d",&xval);
		p[i].x=xval;
		printf("\nenter %d point y value :",i+1);
		scanf("%d",&yval);
		p[i].y=yval;
	}//printing points
	/*for(i=0;i<len;i++){
		printf("\n (%d ,%d )  ",p[i].x,p[i].y);
	}*/
	int a,b,c;
	for(i=0;i<len-1;i++){
		for(j=i+1;j<len;j++){
			a=p[j].y - p[i].y;
			b=p[i].x -p[j].x;
			c= (p[i].x * p[j].y )- (p[i].y * p[j].x);
		//	printf("\n\n for points (%d,%d) -- (%d,%d) a,b,c %d---%d---%d---\n\n",p[i].x,p[i].y,p[j].x,p[j].y,a,b,c);
			int f1=0,f2=0,error=0;
			for(k=0;k<len;k++){
				if(k!=i && k!=j){
					int value;
					value = ((a*p[k].x) + (b*p[k].y));
					if(value<c && f2==0){
						f1++;
					}else if(value>c && f1==0){
						f2++;
					}else if(value=0){
						continue;
					}else{
						error++;
					}
				}
			}if(error==0){
				printf("line segment (%d,%d) -- (%d,%d)\n",p[i].x,p[i].y,p[j].x,p[j].y);
			}
		}
	}
}

//vijaysimharockz@gmail.com







