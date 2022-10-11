#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
typedef  struct NS{
	int ngay;
	int thang;
	int nam;
};
typedef struct NV {
	char ht[50];
	NS ns;
	float l;
};
main(){
	int n;
	NS ns;
	printf("So luong nhan vien: ");
	scanf("%d",&n);
	NV *nv;
	nv=(NV*)malloc(n*sizeof(NV));
	for(int i=0;i<n;i++){
		printf("\nHo va ten");
		fflush(stdin); 
		gets((nv+i)->ht);
		printf("\nNhap ngay sinh: ");
		scanf("%d",&(nv+i)->ns.nam);
	}for(int i=0;i<n;i++)
		printf("%s ",(nv+i)->ht); 
	
	
	
	



















































































}
