#include <stdio.h>
 int width;
 int height;
 
 int area, perimeter;
 int main()
 { 
   height=5;
   width=4;
   
   perimeter=2*(height + width);
   printf("perimeter of the rectangle = %d cm\n", perimeter);
   
   area=height*width;
   printf("area of the rectangle = %d square cm\n", area);
   
 return(0); 
}

