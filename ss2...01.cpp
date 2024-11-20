#include<stdio.h>
 main(){
 	// Ki?u d? li?u int: Dùng d? luu tr? s? nguyên 
	 int a=3;
 	printf("%d\n",a);// Khai báo bi?n a ki?u int và gán giá tr? 3
 	// Ki?u d? li?u float: Dùng d? luu tr? s? th?c có d? chính xác don
	 float b=2.5;
 		printf("%f\n",b);// Khai báo bi?n b ki?u float và gán giá tr? 2.5
 	// Ki?u d? li?u char: Dùng d? luu tr? m?t ký t? don 
	 char c='d';// Khai báo bi?n c ki?u char và gán ký t? 'd'
 		printf("%c\n",c);
 	// Ki?u d? li?u int: Dùng d? luu tr? gias tr? dúng ho?c sai. n?u dúng thì giá tr? là 1, còn sai giá tr? là 0
	 int t=a<b;//Khai báo bi?n t ki?u int và gán giá tr? 0
 		printf("%d\n",t);
 }