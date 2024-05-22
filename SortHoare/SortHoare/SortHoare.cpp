// SortHoare.cpp: Ѕыстра€ сортировка ’оара.
#include "stdafx.h"
#include<iostream>
#define n 15
using namespace std;

void QuickSort(int A[], int L, int R);
int A[]={12, 2, 13, 4, 15, 6, 9, 11, 3, 7, 5, 10, 1, 8, 14};

int _tmain(int argc, _TCHAR* argv[])
{	setlocale(LC_ALL, "russian");
	int j;
	cout<<"»сходный массив:\n"<<endl;
	for(j=0; j<n; j++)
		cout<<"Ёлемент массива A["<<j<<"]->"<<A[j]<<endl;
	cout<<"ќтладочна€ печать\n"<<endl;
	QuickSort(A, 0, n-1);
	cout<<"\nќтсортированный массив:\n"<<endl;
	for(j=0; j<n; j++)
		cout<<"Ёлемент массива A["<<j<<"]->"<<A[j]<<endl;
	system("pause");	
	return 0;
}

//–екурсивна€ функци€ быстрой сортировки
void QuickSort(int A[], int L, int R) {
	int i, j, k, x, m;
	i=L; j=R;
	x=A[(L+R)/2];
	do {
		while(A[i]<x) i++;
		while(x<A[j]) j--;
		if(i<=j) {
			k=A[i]; A[i]=A[j]; A[j]=k;
			i++; j--;
//ќтладочна€ печать
			cout<<"\ni="<<i-1<<'\t';
			cout<<"j="<<j-1<<'\t';
			cout<<"x="<<x<<'\t';
			for(m=0; m<n; m++)
				cout<<A[m]<<"\t";
		}
	}
	while (i<j);
	if(L<j) {
		cout<<"L="<<L<<endl;
		cout<<"j="<<j<<endl;
		QuickSort(A, L, j);
	}
	if(i<R)
		 {
		cout<<"i="<<i<<endl;
		cout<<"R="<<R<<endl;
		QuickSort(A, i, R);
	}
}
