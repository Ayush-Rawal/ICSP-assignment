void print_array(int a[],size_t size)
{
int i;
for(i=0;i<size;i++){
	printf("%d",a[i]);
	}
}

void scan_array(int a[],size_t size)
{
int i;
for(i=0;i<size;i++){
	scanf("%d",&a[i]);
	}
}

int** allocate_2d(int r,int c){
	int **arr;
	arr = malloc(r*sizeof(int*));
	for(int i=0; i < r; i++){
    	arr[i] = malloc(c*sizeof(int));
	}
	return arr;
}

void scan_2d_array(int** a,int row,int col)
{
	printf("Enter elements of array:");	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&a[i]);
		}
		printf("");
	}
}

void print_2d_array(int a[],int row,int col)
{
	printf("Array is:");
	int i,j;
	for(i=0;i<row;i++){
	for(j=0;j<col;j++){
		printf("%d",a[i]);
		}
	}
}
