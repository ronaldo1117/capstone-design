#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* made by Daehwan Kim 
노즐 방향에 대해 가로가 yawing, 세로가 pitching 입니다.
*/

int main(void)
{
  int len, wid; // Length(가로), Width(세로)
  printf("가로 세로를 입력하세요\n");
  scanf("%d%d", &len, &wid);

  if ((len > 0) && (wid == 0))
  {
	printf("우로만 이동\n");
  }
  else if ((len < 0) && (wid == 0))
  {
	printf("좌로만 이동\n");
  }
  else if ((wid > 0) && (len == 0))
  {
	printf("위로만 이동\n");
  }
  else if ((wid < 0) && (len == 0))
  {
	printf("아래로만 이동\n");
  }
  else if ((len > 0) && (wid > 0))
  {
	printf("우로이동하면서 위로 이동\n");
  }
  else if ((len > 0) && (wid < 0))
  {
	printf("우로 이동하면서 아래로 이동\n");
  }
  else if ((len < 0) && (wid > 0))
  {
	printf("좌로 이동하면서 위로 이동\n");
  }
  else if ((len < 0) && (wid < 0))
  {
	printf("좌로 이동하면서 아래로 이동\n");
  }
  else
  {
	printf("정지\n");
  }
  printf("가로%d, 세로%d\n", len, wid);
return 0;

 }

