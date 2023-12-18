/*
user 10 ?
even odd
even array
total 
count
*/
#include<stdio.h>
void main(){
	int i,user[10],even[10],odd[10],total,counteven=0,countodd,j=0,k=0;
	for(i=0;i<10;i++){
		scanf("%d",&user[i]);   ///taking array 
		if(user[i]%2==0){  ///processing array 
			even[j]=user[i];   /// chaning array
			j++;     ///condtion
			counteven+=user[i]; ///array  number
		}
	}
	printf("%d this is your j \n",j);
	for(i=0;i<j;i++){
		printf("%d \n",even[i]);
	}
	printf("This is your total %d ",counteven);
}
