/*¥����n��̨�ף���¥����һ����1�ף�Ҳ����һ����2�ף�
��һ������㹲�ж����ֲ�ͬ���߷������磬��n=3ʱ����
��3���߷�����1+1+1�� 1+2�� 2+1��*/ 
#include<iostream>
#include<cmath>
typedef long long ll;
using namespace std;
ll f(int n);
int main()
{	
	int n;
	cin>>n;
	cout<<f(n)<<endl; 
}
ll f(int n)
{
	if(n==1){//̨����Ϊ1ʱ��1���߷� 
		return 1;
	}
	if(n==2){//̨����Ϊ2ʱ��2���߷� 
		return 2;
	}
	if(n==3){//̨����Ϊ3ʱ��3���߷�  
		return 3;
	}
	else{//ͨ���ҹ��ɿɷ���n��̨�׵��߷�����n-1��̨�׵��߷�����n-2��̨�׵��߷� 
		return f(n-1)+f(n-2);
	}
}

