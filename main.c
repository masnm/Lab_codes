#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define chmax(a,b) if ( a < b ) a = b
#define chmin(a,b) if ( a > b ) a = b

#define si(a) scanf("%d",&a)
#define pis(a) printf("%d ",a)
#define pi(a) printf("%d",a)
#define nln printf("\n")

int min ( const void *a, const void *b ) {
	int l = *(int*)a, r = *(int*)b;
	if ( l < r ) return -1;
	if ( l > r ) return 1;
	return 0;
} // void qsort ( void *ptr, size_t count, size_t size, int (*comp)(const void *, const void *) );

int white = 1 << 0;
int gray = 1 << 1;
int black = 1 << 2;

typedef struct {
	int count;
	int next[101];
	int pretecesor;
	int color;
	int distance;
} node ;

void bfs ( node* graph, int start )
{
	graph[start].color = gray;
	graph[start].distance = 0;
	graph[start].pretecesor = 0;
	int queue[201] = { };
	int qs = 0, qe = 0;
	queue[qe++] = start;
	while ( qs != qe ) {
		int now_visiting = queue[qs++];
		if ( qs == qe ) qs = qe = 0;
		for ( int i = 0 ; i < graph[now_visiting].count ; i++ ) {
			int next_node = graph[now_visiting].next[i];
			if ( graph[next_node].color == white ) {
				graph[next_node].color = gray;
				graph[next_node].distance = graph[now_visiting].distance + 1;
				graph[next_node].pretecesor = now_visiting;
				queue[qe++] = next_node;
			}
		}
		graph[now_visiting].color = black;
	}
}

int main ()
{
	printf("Enter the number of Vertices : ");
	int n; si(n);
	printf("Enter the number of Edges : ");
	int m; si(m);
	printf("Enter %d edges\n", m);
	node gp[n+1];
	for ( int i = 0 ; i < n+1 ; i++ ) {
		gp[i].count = 0;
		gp[i].pretecesor = 0;
		gp[i].color = white;
		gp[i].distance = 0;
	}
	int s,e;
	while ( m-- ) {
		si(s); si(e);
		gp[s].next[gp[s].count++] = e;
		gp[e].next[gp[e].count++] = s;
	}

	bfs ( gp, 1 );

	puts("Finding distance from root to every node");
	for ( int i = 1 ; i < n+1 ; i++ ) {
		e = i;
		while ( e != 1 ) {
			pis(e);
			e = gp[e].pretecesor;
		}
		pis(e);
		nln;
	}


	return 0;
}
