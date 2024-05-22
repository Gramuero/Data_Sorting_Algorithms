// Sort.cpp: Сортировка массивов.
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
	cout<<"Введите количество элементов n="; cin>>n; cout<<endl; 
cout<<"Введите параметр А="; cin>>A; cout<<endl;
cout<<"Введите параметр В="; cin>>B; cout<<endl;
cout<<"Введите параметр C="; cin>>C; cout<<endl;
srand(time(NULL));
//Выделение памяти под массив из n вещественных элементов
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
		cout<<"Сортировка массива по возрастанию простым методом обмена"<<endl;
		cout<<"Исходный массив"<<endl;
		for(i=0; i<n; i++)
			cout<<"Элемент массива X["<<i<<"]="<<setw(10)<<setprecision(6)<<*(ptr+i)<<endl;
			cout<<endl; 
// Сортировка массива по возрастанию простым методом обмена 		
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
cout<<"\nУпорядоченный массив. Простой метод обмена:"<<endl;
	for(i=0; i<n; i++) cout<<"Элемент массив X["<<i<<"]="<<setw(10)<<setprecision(6)<<*(ptr+i)<<endl;	
	cout << "Время сортировки обменом t ->"<<t << endl;
	cout << "Количество сравнений c ->" << c << endl; 
	cout << "Количество перестановок m ->" << m << endl; 
	system("pause");
cout<<"\nСортировка массива по возрастанию простым методом выбора"<<endl;
		cout<<"Исходный массив"<<endl;
		for(i=0; i<n; i++)
			cout<<"Элемент массивп X["<<i<<"]="<<setw(10)<<setprecision(6)<<*(ptr1+i)<<endl;
			cout<<endl;			
// Сортировка массива по возрастанию простым методом выбора 
			for(j=1; j<n; b=ptr1[n-j], ptr1[n-j]=ptr1[nom], ptr1[nom]=b, j++)	
				for(max=ptr1[0], nom=0, i=1; i<=n-j;i++)
				if(ptr1[i]>max)	
			 { max=ptr1[i];
				nom=i;
		}
			//Вывод упорядоченного массива
			cout<<"Упорядоченный массив. Простой метод выбора."<<endl;
			for(i=0; i<n; i++) cout<<"Элемент массива ["<<i<<"]="<<setw(10)<<setprecision(6)<<ptr1[i]<<endl;
			system("pause");
cout<<"\nСортировка массива по возрастанию простым методом вставки"<<endl;
		cout<<"Исходный массив"<<endl;
		for(i=0; i<n; i++)
			cout<<"Элемент массива X["<<i<<"]="<<setw(10)<<setprecision(6)<<*(ptr2+i)<<endl;
			cout<<endl;			
// Сортировка массива по возрастанию простым методом вставки		
			for(i=1; i<n; ptr2[j+1]=b, i++)
				for(b=ptr2[i], j=i-1; (j>-1 && b<ptr2[j]); ptr2[j+1]=ptr2[j], j--);
			//Вывод упорядоченного массива
			cout<<"Упорядоченный массив. Простой метод вставки."<<endl;
			for(i=0; i<n; i++) cout<<"Элемент массива ["<<i<<"]="<<setw(10)<<setprecision(6)<<ptr2[i]<<endl;
			system("pause");
			cout<<"Сортировка массива по возрастанию простым методом обмена"<<endl;
			cout<<"Вероятностный закон Лапласа"<<endl;
		cout<<"Исходный массив"<<endl;
		for(i=0; i<n; i++)
			cout<<"Элемент массивп X["<<i<<"]="<<setw(10)<<setprecision(6)<<*(ptr3+i)<<endl;
			cout<<endl; 
// Сортировка массива по возрастанию простым методом обмена 		
			for(j=1; j<n; j++)	
				for(i=n-1; i>=j; i--)
							if(ptr3[i-1]>ptr3[i])	
			 { b=ptr3[i-1];
				ptr3[i-1]=ptr3[i];
				ptr3[i]=b;	}		
cout<<"\nУпорядоченный массив. Простой метод обмена:"<<endl;
	for(i=0; i<n; i++) cout<<"Элемент массив X["<<i<<"]="<<setw(10)<<setprecision(6)<<*(ptr3+i)<<endl;	cout.unsetf(ios::showpos);
	delete [] ptr;
	delete [] ptr1;
	delete [] ptr2;
	delete [] ptr3;
	system("pause");
	return 0;
}

//Вероятностный закон распределения Pareto
double Pareto(double A1, double B1) {
	int num;
	double root, right;
	num=rand();	//Случайное число
	right=((double)num/double(RAND_MAX+1));	//Проекция на интервал (0, 1)
	root=A1/pow(1-right, 1.0/B1);	//Расчет обратной функции
	return root;
}
//Вероятностный закон распределения Logistic
double Logistic(double A1, double B1) {
double y, buf; int sl;
sl=rand();
buf=((double)sl/double(RAND_MAX+1));
y=A1-B1*log(1.0/buf-1.0);
return y;}
//Вероятностный закон распределения Weibul
double Weibul(double A1, double B1, double C1) {
	int k;
	double l, y;
	k=rand();
	l=((double)k/double(RAND_MAX));
	y=A1+B1*pow(-log(1.0-l),1.0/C1);
	return y;}
//Вероятностный закон распределения Лапласа
double get_laplace(double A1, double B1) {
	long int num;
	double root, right;
	num=rand();
	right=((double)num/double(RAND_MAX));
	if(right>0.5)	root=A1+B1*(double)log(2.0*right);
	else root=A1-B1*(double)log(2*(1-right));
	return root;
}