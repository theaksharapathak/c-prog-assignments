#include <stdio.h> 
#include<math.h> 
  
// function to print distance 
void distance(float x1, float y1,  
              float z1, float x2,  
              float y2, float z2) 
{ 
    float d = sqrt(pow(x2 - x1, 2) +  
                   pow(y2 - y1, 2) +  
                   pow(z2 - z1, 2) * 1.0); 
    printf("Distance is %f", d); 
    return; 
} 
  
// Driver Code 
int main() 
{ 
    float x1 = 2; 
    float y1 = -5; 
    float z1 = 7; 
    float x2 = 3; 
    float y2 = 4; 
    float z2 = 5; 
      
    // function call for distance 
    distance(x1, y1, z1,     
             x2, y2, z2); 
    return 0; 
} 
