#include <stdio.h>
int main()
{
    // 1 
    // 6 2
    // 10 7 3
    // 13 11 8 4
    int n,data,list[100];
    scanf("%d",&data);
    for(int i=0;i<data;i++) {
    scanf("%d",&n);
        
        for(int j=0;j<n;j++) {
            
            scanf("%d",&list[j]);
        }
        for(int j=n-1;j>=0;j--) {
            
            printf("%d\n",list[j]);
        }
    }
return 0;
}