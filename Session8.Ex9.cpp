#include <stdio.h>

int main(){
	int ar[]={1,2,1,2,4,1,7,9,2};
	int maxCount;
	int maxItem;
	int lengthArr= sizeof(arr)/sizeof(arr[0]);
	for(int i=0;0<lengthArr;i++){
		int count=0;
		for(int j=o; j<lengthArr; j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		if(count>maxCount){
			maxCount=count;
			maxItem= arr[i];
		}
	}
	printf("Phan tu co gia %d xuat hien so lan nhieu nhat %d",maxItem,maxCount);
	return 0;
}
