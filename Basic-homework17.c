/* �p������׹��-�򥻽m�ߧ@�~-�@�~17*/
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/05/07 01:15*/ 
#include <stdio.h>�@//��ܮw 
#include <stdlib.h> //��ܮw  
int main(int argc, char *argv[]) {
	int a[5]={0};//�ŧidata�}�C�A�}�C������a[0]~a[4],��l�ȬҬ�0 */
	int i=0, min;//min����ܼƥN��̤p��
	printf("�p������׹��-��¦�m�ߧ@�~-�@�~17\n");
	printf("�s�@�H�G���f�W\n");
	printf("�����ɶ��G2019/05/07 01:15\n");
	printf("-------------------------------------------------\n");  
	printf("             ��M�}�C���̤p�Ȫ��{��              \n");
	printf("-------------------------------------------------\n");   
	printf("�гs���J���ӼƭȡG\n");
	for(i=0;i<5;i++)//�s���J5�Ӿ�ƨæs���a[0]~a[4]
	{
	   printf("��%d����ơG", i+1 );
	   scanf("%d", &a[i]);
	}
	min=a[0];//���]a[0]���̤p��
	for(i=0;i<5;i++)//�ΰj��v�@��Xa[0]~a[4]���̤p��
	{
	  if (min>a[i])	
	  {
		  min=a[i];
	  }
	}
	printf("�̤p�ȬO�G%d\n\n",min); 
	system("PAUSE");	
	return 0;
}
