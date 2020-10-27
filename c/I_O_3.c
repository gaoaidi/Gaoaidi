#include <stdio.h>
int main(int argc, char const *argv[])
{
	FILE *fp = fopen("12.in", "r");
	FILE *fw = fopen("1.out", "a");
	if(fp){
		printf("%p\n", fp);
		int num;
		fscanf(fp, "%d", &num);
		fprintf(fw, "%d\n", num);
		fclose(fp);
		fclose(fw);
	}else{
		fprintf(fw, "无法打开文件\n");
	}
	return 0;
}