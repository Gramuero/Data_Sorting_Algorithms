// SortShell.cpp: ���������� �����.
#include "stdafx.h"
#include<iostream>
#define n 15
using namespace std;

void Shell(int A[], int nn);
int A[n]={12, 3, 14, 15, 6, 1, 7, 8, 9, 5, 11, 2, 13, 4, 10};

int _tmain(int argc, _TCHAR* argv[])
{	setlocale(LC_ALL, "russian");
	cout<<"�������� ������:\n"<<endl;
	for(int i=0; i<n; i++)
		cout<<"������� ������� A["<<i<<"]->"<<A[i]<<endl;
	cout<<"\n���������� ������ �� ����� ����������:\n"<<endl;
	Shell(A, n); cout<<endl;
	cout<<"\n��������������� ������:\n"<<endl;
	for(int i=0; i<n; i++)
		cout<<"������� ������� A["<<i<<"]->"<<A[i]<<endl;
	system("pause");	
	return 0;
}
//������� ���������� ������� �����
void Shell(int A[], int nn) {
	int i, j, k, x;
	k=(n+1)/2;
	while(k>=1)
	{
		for(i=k; i<nn; i++)
		{
			if(A[i-k]>A[i])
			{
				x=A[i]; j=i-k;
M: A[j+k]=A[j];
				if(j>k)
				{
					if(A[j-k]>x) 
					{
						j=j-k;
						goto M;
					}
				}
				A[j]=x;
			}
		}
//���������� ������
		cout<<"\nk="<<k<<endl;
		for(i=0; i<nn; i++)
			cout<<A[i]<<" ";
		if(k>2) k=(k+1)/2;
		else k=k/2;
	}
}

