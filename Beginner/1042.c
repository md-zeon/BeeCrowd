#include <stdio.h>

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++){
        printf("%d\n", arr[i]);
    }
}

int main () {
	int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int arr[] = {a, b, c};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 1; i < size; i++) {
        int curr = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > curr) {
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }

    printArray(arr, size);

    printf("\n%d\n%d\n%d\n", a, b, c);

	
	return 0;
}

/*
^ Alternative Solution:

#include<stdio.h>
int main(){

    int a,b,c,temp, x,y,z;
    scanf("%d%d%d",&a,&b,&c);
    x = a;
    y = b;
    z = c;
    if(a>b){
        temp=a;a=b;b=temp;
        }
        if(a>c){
            temp=a;a=c;c=temp;
            }
            if(b>c){
            temp=b;b=c;c=temp;
            }
            printf("%d\n%d\n%d\n\n",a,b,c);
            printf("%d\n%d\n%d\n",x,y,z);



    return 0;
}

*/