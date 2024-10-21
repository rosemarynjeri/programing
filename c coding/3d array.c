//array in c 3D arrays
#include <stdio.h>
int main(int argc, char** argv)
{
	int i,j,k;
	int marks[2][2][3]= {{50,90,60},{40,70,40},{87,23,75}};
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<3;k++)

			
			printf("marks[%d][%d][%d]=%d\n",i,j,k, marks[i][j][k]);
			
			
		}
	}
	return 0;
}