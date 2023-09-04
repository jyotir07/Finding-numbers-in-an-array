/*code by Jyotiraditya Singh.*/
/*Linkedin: https://www.linkedin.com/in/jyotir-aditya-028925249*/
#include<stdio.h>
int main()
{
 int n;
 printf("Size:");
 scanf("%d", &n);
 int arr[n];

 // putting the vales in the array
 for (int i=0; i<n; i++){
    printf("Enter element:");
    scanf("%d", &arr[i]);
 }
 for(int i=0; i<n; i++){
    printf("%d ", arr[i]);
 }
 printf("\n");
 printf("Enter the number to search: ");
 int x;
 scanf("%d", &x);
 for(int i=0; i<n; i++){
  if (arr[i]==x){
    printf("Number found     :)\n At index:%d", i);
    break;
  }  
  /*else{
    //printf("Number not found     :(\n");
    goto if:
  }*/
 }
 //for(int i=0; i<n; i++){
  //if (arr[i]!=x){
    //printf("Number not found     :(\n");
  //}
 //}
return 0;
}