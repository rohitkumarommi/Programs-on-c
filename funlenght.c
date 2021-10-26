int width;          
int height;         

int area;           
int perimeter;      

int main() 
	{
		int height()
		{
		printf("enter height:")
		scanf("%d",&height);
		}
		int width()
		{
		printf("enter width:")
		scanf("%d",&width);
		}
   		        perimeter = 2*(height + width);
			printf("Perimeter of the rectangle = %d inches\n", perimeter);
	
		area = height * width;
		printf("Area of the rectangle = %d square inches\n", area);

	return(0);
}
