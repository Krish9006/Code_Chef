#include <stdio.h>



int main() {
    int t, n;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        int arr[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
        }
    for (int y = 0; y < n - 1; y++) {
    for (int x = 0; x < n - y - 1; x++) {
        if (arr[x] > arr[x + 1]) {
            int temp = arr[x];
            arr[x] = arr[x + 1];
            arr[x + 1] = temp;
        }
    }
}

        // for(int a=0;a<n;a++){
        //     printf("%d ",arr[a]);
        // }
        // printf("\n");
        
        int sum = 0;
for (int k = 1; k < n; k++) {
    sum += arr[k] - arr[k - 1];
}

           
        
        
        printf("%d\n", sum);
        
    
        
    }
    return 0;
}