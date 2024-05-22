// SortPyramidaUb.cpp: ���������� ��������� �� ��������.
#include "stdafx.h"
#include<iostream>
#define n 9
using namespace std;
void HeapSort(int A[], int nn);
void Sift(int A[], int L, int R);
int A[n]={5,3,7,27,9,11,14,2,8};
int _tmain(int argc, _TCHAR* argv[])
{	setlocale(LC_ALL, "russian");
	cout<<"C��������� ��������� �� ��������\n"<<endl;
	cout<<"�������� ������:\n"<<endl;
	for(int i=0; i<n; i++)
		cout<<"������� ������ A["<<i<<"]->"<<A[i]<<endl;
	cout<<"\n���������� ������:\n"<<endl;
	HeapSort(A, n);
	cout<<"\n��������������� ������:\n"<<endl;
	for(int i=0; i<n; i++)
		cout<<"������� ������ A["<<i<<"]->"<<A[i]<<endl;
		system("pause");
	return 0;
}
void HeapSort(int A[], int nn) {
	int L, R, x, i;
		L=nn/2; R=nn-1;
//���������� �������� �� ��������� �������
		while(L>0)
		{ L=L-1; Sift(A, L, R);
//���������� ������
		cout<<"L="<<L<<endl;
		for(int i=0; i<nn; i++)
			cout<<A[i]<<"\t"; cout<<endl;
		}
//����������: �������� -> ��������������� ������
		while(R>0) {
		x=A[0]; A[0]=A[R]; A[R]=x;
		R--;
//���������� ������
		cout<<"R="<<R<<endl;
		for(int i=0; i<n; i++)
			cout<<A[i]<<"\t"; cout<<endl;
			Sift(A, L, R);
		}
}
void Sift(int A[], int L, int R) {
	int i,j,x,k;
	i=L; j=2*L+1;
	x=A[L];
	if((j<R)&&(A[j]>A[j+1])) j++; //���������
	while((j<=R)&&(x>A[j]))	//���������
	{
		k=A[i]; A[i]=A[j]; A[j]=k;
		i=j;
		j=2*j+1;
		if((j<R)&&(A[j]>A[j+1])) //���������
			j++;
	}
}