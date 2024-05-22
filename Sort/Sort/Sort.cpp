// Sort.cpp: ���������� ��������.
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
#include<iomanip>
using namespace std;

double Pareto(double, double);
double Logistic(double, double);
double Weibul(double, double, double);
double get_laplace(double, double);

int _tmain(int argc, _TCHAR* argv[])
{	setlocale(LC_ALL, "russian");
	int i, j, n, nom, c, m;
	int unsigned t, t1, t2;
	double b, max, A, B, C, y1, y2, y3;
	cout<<"������� ���������� ��������� n="; cin>>n; cout<<endl; 
cout<<"������� �������� �="; cin>>A; cout<<endl;
cout<<"������� �������� �="; cin>>B; cout<<endl;
cout<<"������� �������� C="; cin>>C; cout<<endl;
srand(time(NULL));
//��������� ������ ��� ������ �� n ������������ ���������
	double *ptr=new double[n];
		double *ptr1=new double[n];
			double *ptr2=new double[n];
				double *ptr3=new double[n];
		cout.setf(ios::showpos|ios::fixed|ios::right);
		for(i=0; i<n; i++) 
				 ptr[i]=Pareto(A, B);
		for(i=0; i<n; i++) 
					ptr1[i]=Logistic(A, B);
		for(i=0; i<n; i++) 
					 ptr2[i]=Weibul(A,B,C);
		for(i=0; i<n; i++) 
					ptr3[i]=get_laplace(A, B);
		cout<<"���������� ������� �� ����������� ������� ������� ������"<<endl;
		cout<<"�������� ������"<<endl;
		for(i=0; i<n; i++)
			cout<<"������� ������� X["<<i<<"]="<<setw(10)<<setprecision(6)<<*(ptr+i)<<endl;
			cout<<endl; 
// ���������� ������� �� ����������� ������� ������� ������ 		
			t1 = clock(); c = 0; m = 0;
			for (j = 1; j < n; j++)
				for (i = 0; i < n - j; i++) {
					c++;
					if (ptr[i] > ptr[i + 1])
					{
						m++; b = ptr[i];
						ptr[i] = ptr[i + 1];
						ptr[i + 1] = b;
					}
				}
			t2 = clock();
			t = t2 - t1;
cout<<"\n������������� ������. ������� ����� ������:"<<endl;
	for(i=0; i<n; i++) cout<<"������� ������ X["<<i<<"]="<<setw(10)<<setprecision(6)<<*(ptr+i)<<endl;	
	cout << "����� ���������� ������� t ->"<<t << endl;
	cout << "���������� ��������� c ->" << c << endl; 
	cout << "���������� ������������ m ->" << m << endl; 
	system("pause");
cout<<"\n���������� ������� �� ����������� ������� ������� ������"<<endl;
		cout<<"�������� ������"<<endl;
		for(i=0; i<n; i++)
			cout<<"������� ������� X["<<i<<"]="<<setw(10)<<setprecision(6)<<*(ptr1+i)<<endl;
			cout<<endl;			
// ���������� ������� �� ����������� ������� ������� ������ 
			for(j=1; j<n; b=ptr1[n-j], ptr1[n-j]=ptr1[nom], ptr1[nom]=b, j++)	
				for(max=ptr1[0], nom=0, i=1; i<=n-j;i++)
				if(ptr1[i]>max)	
			 { max=ptr1[i];
				nom=i;
		}
			//����� �������������� �������
			cout<<"������������� ������. ������� ����� ������."<<endl;
			for(i=0; i<n; i++) cout<<"������� ������� ["<<i<<"]="<<setw(10)<<setprecision(6)<<ptr1[i]<<endl;
			system("pause");
cout<<"\n���������� ������� �� ����������� ������� ������� �������"<<endl;
		cout<<"�������� ������"<<endl;
		for(i=0; i<n; i++)
			cout<<"������� ������� X["<<i<<"]="<<setw(10)<<setprecision(6)<<*(ptr2+i)<<endl;
			cout<<endl;			
// ���������� ������� �� ����������� ������� ������� �������		
			for(i=1; i<n; ptr2[j+1]=b, i++)
				for(b=ptr2[i], j=i-1; (j>-1 && b<ptr2[j]); ptr2[j+1]=ptr2[j], j--);
			//����� �������������� �������
			cout<<"������������� ������. ������� ����� �������."<<endl;
			for(i=0; i<n; i++) cout<<"������� ������� ["<<i<<"]="<<setw(10)<<setprecision(6)<<ptr2[i]<<endl;
			system("pause");
			cout<<"���������� ������� �� ����������� ������� ������� ������"<<endl;
			cout<<"������������� ����� �������"<<endl;
		cout<<"�������� ������"<<endl;
		for(i=0; i<n; i++)
			cout<<"������� ������� X["<<i<<"]="<<setw(10)<<setprecision(6)<<*(ptr3+i)<<endl;
			cout<<endl; 
// ���������� ������� �� ����������� ������� ������� ������ 		
			for(j=1; j<n; j++)	
				for(i=n-1; i>=j; i--)
							if(ptr3[i-1]>ptr3[i])	
			 { b=ptr3[i-1];
				ptr3[i-1]=ptr3[i];
				ptr3[i]=b;	}		
cout<<"\n������������� ������. ������� ����� ������:"<<endl;
	for(i=0; i<n; i++) cout<<"������� ������ X["<<i<<"]="<<setw(10)<<setprecision(6)<<*(ptr3+i)<<endl;	cout.unsetf(ios::showpos);
	delete [] ptr;
	delete [] ptr1;
	delete [] ptr2;
	delete [] ptr3;
	system("pause");
	return 0;
}

//������������� ����� ������������� Pareto
double Pareto(double A1, double B1) {
	int num;
	double root, right;
	num=rand();	//��������� �����
	right=((double)num/double(RAND_MAX+1));	//�������� �� �������� (0, 1)
	root=A1/pow(1-right, 1.0/B1);	//������ �������� �������
	return root;
}
//������������� ����� ������������� Logistic
double Logistic(double A1, double B1) {
double y, buf; int sl;
sl=rand();
buf=((double)sl/double(RAND_MAX+1));
y=A1-B1*log(1.0/buf-1.0);
return y;}
//������������� ����� ������������� Weibul
double Weibul(double A1, double B1, double C1) {
	int k;
	double l, y;
	k=rand();
	l=((double)k/double(RAND_MAX));
	y=A1+B1*pow(-log(1.0-l),1.0/C1);
	return y;}
//������������� ����� ������������� �������
double get_laplace(double A1, double B1) {
	long int num;
	double root, right;
	num=rand();
	right=((double)num/double(RAND_MAX));
	if(right>0.5)	root=A1+B1*(double)log(2.0*right);
	else root=A1-B1*(double)log(2*(1-right));
	return root;
}