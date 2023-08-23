#include<stdio.h>
int main(){
    int n,i,j,k;
    int max=0,min=100;
    double avg=0.00,sum=0.00;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++){
        if(max<a[j]){
            max=a[j];
        }
        if(min>a[j]){
            min=a[j];
        }
    }
    printf("%d\n%d\n",max,min);
    for(k=0;k<n;k++){
       sum=sum+a[k]; 
    }
    avg=(int)((sum/n)*100+0.5)/100.0;
    printf("%.2f",avg);
}