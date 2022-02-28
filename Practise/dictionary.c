#include<stdio.h>


int main(){
int N;
	scanf("%d",&N);
	char input_chars[N];
	int i;
	for(i=0;i<N ;i++)
	{
		scanf(" %c",&input_chars[i]);
	}
	char input[100];
	scanf("%99s",input);


	int position=0,j=0;
	int addValue[N];
	/*
	for(i=0,j=N-1;i<N ;i++,j--)
	   addValue[i] = (1<<j);*/

	for(int a = 0; a < N; ++a)
			addValue[a];
	   // printf("%2d : %3d\n", a, addValue[a]);



	for(i=0,j=0;input[i];i++){
       		while(input_chars[j]!=input[i]){
			position+=addValue[j];
			j++;
		}
		j++;
		position++;
	}
	printf("%d\n",position);

	return 0;
}
