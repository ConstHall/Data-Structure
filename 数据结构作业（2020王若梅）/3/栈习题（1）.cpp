/*�õݹ鷽������������⣬���㵽��n��Ϊֹ��
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
double f(int n,double x)//�����ʽ 
{
	if(n==1){
		return x;
	}
	else{
		return pow(-1,n-1)*pow(x,2*n-1)/fac(2*n-1)+f(n-1,x); 
	}
}
double fac(int n)//��׳ˣ�������ʽ�еķ�ĸ 
{
	if(n==1){
		return 1;
	}
	else{
		return n*fac(n-1);
	}
}
