/*用递归方法求解如下问题，计算到第n项为止。
f(x)=x-x^3/3!+x^5/5!-x^7/7!+.....*/
#include<iostream>
#include<cmath>
using namespace std;
double f(int n,double x);
double fac(int n);
int main()
{
	int n,i;
	double x;
	cin>>n>>x;
	cout<<f(n,x)<<endl;
}
double f(int n,double x)//求多项式 
{
	if(n==1){
		return x;
	}
	else{
		return pow(-1,n-1)*pow(x,2*n-1)/fac(2*n-1)+f(n-1,x); 
	}
}
double fac(int n)//求阶乘，即多项式中的分母 
{
	if(n==1){
		return 1;
	}
	else{
		return n*fac(n-1);
	}
}
