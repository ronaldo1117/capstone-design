#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* made by Daehwan Kim 
���� ���⿡ ���� ���ΰ� yawing, ���ΰ� pitching �Դϴ�.
*/

int main(void)
{
  int len, wid; // Length(����), Width(����)
  printf("���� ���θ� �Է��ϼ���\n");
  scanf("%d%d", &len, &wid);

  if ((len > 0) && (wid == 0))
  {
	printf("��θ� �̵�\n");
  }
  else if ((len < 0) && (wid == 0))
  {
	printf("�·θ� �̵�\n");
  }
  else if ((wid > 0) && (len == 0))
  {
	printf("���θ� �̵�\n");
  }
  else if ((wid < 0) && (len == 0))
  {
	printf("�Ʒ��θ� �̵�\n");
  }
  else if ((len > 0) && (wid > 0))
  {
	printf("����̵��ϸ鼭 ���� �̵�\n");
  }
  else if ((len > 0) && (wid < 0))
  {
	printf("��� �̵��ϸ鼭 �Ʒ��� �̵�\n");
  }
  else if ((len < 0) && (wid > 0))
  {
	printf("�·� �̵��ϸ鼭 ���� �̵�\n");
  }
  else if ((len < 0) && (wid < 0))
  {
	printf("�·� �̵��ϸ鼭 �Ʒ��� �̵�\n");
  }
  else
  {
	printf("����\n");
  }
  printf("����%d, ����%d\n", len, wid);
return 0;

 }

