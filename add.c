#include<stdio.h>
void main(){
  int n,a[10],i,k,j;
  printf("Enter the number");
  scanf("%d",&n);
  printf("Enter the array element");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  printf("Enter the target element");
  scanf("%d",&k);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    if(k==a[i]+a[j])
      printf("%d",a[i][j]);
    }
  }
}
  
