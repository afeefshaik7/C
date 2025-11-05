#include<stdio.h> 
int main() 
{ 
 	int a[20],n,i,j,t;  	
	printf("enter size of an array:\n");  	
	scanf("%d",&n); 
 	printf("enter %d elements:\n",n);  	
	for(i=0;i<n;i++) 
 	{ 
 	 	scanf("%d",&a[i]); 
 	} 
 	printf("elements before sorting :\n");  	
	for(i=0;i<n;i++) 
 	{ 
 	 	printf("%d ",a[i]); 
    } 
    for(i=1;i<n;i++) 
    { 
     	for(j=0;j<n-i;j++) 
       {   
      	 if(a[j]>a[j+1]) 
        { 
 	 	  t=a[j];  	 	 
		 a[j]=a[j+1];  	 	  
		 a[j+1]=t; 
      	} 
       } 
    } 
 	printf("\nelements after sorting :\n");  	
	for(i=0;i<n;i++) 
 	{ 
 	 	printf("%d ",a[i]); 
 	} 
 	return 0; 
}
