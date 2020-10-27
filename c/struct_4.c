#include <stdio.h>
struct point
{
	int x;
	int y;
};

struct point* getStuct(struct point*);
void output (struct point);
void print (const struct point *p);

int main(int argc, char const *argv[])
{
	struct point y = {0, 0};
	getStuct(&y);
	output(y);
	output(*getStuct(&y));
	print(getStuct(&y));
	return 0;
}

struct point* getStuct(struct point *p)
{
	scanf("%d", &p->x);
	scanf("%d", &p->y);
	return p;
}

void output (struct point p)
{
	printf("%d, %d\n", p.x, p.y);
}

void print (const struct point *p)
{
	printf("%d, %d", p->x, p->y);
}