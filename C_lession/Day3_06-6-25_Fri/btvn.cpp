#include <iostream>
#include <cstdio>

int main()
{
    int i,target,size;
    
    printf("Entry size of array:");
    scanf("%d",&size);
    
    int* input = new int[size];
    printf("Entry elements: \n");
    
    for(i=0;i<size;i++){
        printf("Input[%d]: ",i);
        scanf("%d",&input[i]);
    }
    
    printf("Entry target: ");
    scanf("%d",&target);
    
    int index = 0;
    for(int k = 0; k < size - 1; k++){
        for(int j = k + 1; j < size; j++){
            if(input[k] + input[j] == target){
                index++;
                printf("Ket qua %d là %d,%d\n",index,k,j);
            }
        }
    }
    
    if(index == 0){
        printf("Khong tim thay cap nao co tong bang %d\n", target);
    }
    
    delete[] input; // Giải phóng bộ nhớ ở cuối chương trình
    return 0;
}