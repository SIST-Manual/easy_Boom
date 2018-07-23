#include<cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
int main() {
	srand(time(NULL));
	int n=4;
	printf("%d\n",n);
	for(int i=1;i<=n;i++) {
		int x=rand()%3+1,y=rand()%3+1;
		while(x==y) y=rand()%3+1;
		printf("%d %d\n",x,y);
	}
	return 0;
}
