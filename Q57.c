//Write a program to store even and odd elements of an array in two separate arrays.

#include<stdio.h>

void scan_array(int a[],int size)
{
int i;
printf("Enter array elements");
for(i=0;i<size;i++){
	scanf("%d",&a[i]);
	}
}

void print_array(int a[],int size)
{
int i;
for(i=0;i<size;i++){
	printf("%d",a[i]);
	}
}
struct oesize{
	int odd_size,even_size;
};

struct oesize store_odd_even(int a[],size_t size,int even[], int odd[])
{
	int i,j,k;
	struct oesize oe;
	for(i=0,j,k;i<size;i++){
		if(a[i]%2){
			even[j]=a[i];
			j++;
		}
		if(!a[1]%2){
			odd[k]=a[i];
			k++;
		}
	}
	oe.odd_size=k;
	oe.even_size=j;
	return oe;
}

int main(void)
{
	size_t size;
	printf("Enter size\n");
	scanf("%uz",&size);
	struct oesize oe;
	int a[size],odd[size],even[size];
	scan_array(a,size);
	oe = store_odd_even(a,size,odd,even);
	printf("Original array:\n");
	print_array(a,size);
	printf("\nEven elements:\n");
	print_array(even,oe.even_size);
	printf("\nOdd elements:\n");
	print_array(odd,oe.odd_size);
	return 0;
}