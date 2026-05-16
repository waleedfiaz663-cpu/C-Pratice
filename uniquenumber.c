#include <stdio.h>
int main() {
    int arr[7] = {1,2,3,4,3,2,1};
    int i, j;
    int Unique;
    for (i = 0; i < 7; i++) 
    {
        Unique = 1; 
        for (j = 0; j < 7; j++)
         {
            if (i != j && arr[i] == arr[j]) 
            {
                Unique = 0; 
                break;
            }
        }

        if (Unique) 
        {
            printf("%d is a unique number\n", arr[i]);
        }
    }
    return 0;
}
