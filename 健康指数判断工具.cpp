#include<bits/stdc++.h>

using namespace std;
int main()
{
	double cm,kg;
	system("title FxxK工作室出品");
	cout<<"欢迎使用BMI健康指数判断工具(offline)\n";
	cout<<"\n请输入您的体重(kg)\n";
	cin>>kg;
	cout<<"请输入您的身高(cm)\n";
	cin>>cm;
	double num=(kg/((cm/100)*(cm/100)));
	if(num<16)
	{
		cout<<"你太瘦了!\n"; 
	}else if(num >17&&num<18)
	{
		cout<<"你有点瘦!";
	}
	else if(num >=18&&num<=25)
	{
		cout<<"发育很正常啊！";
	}
	else if(num >25&&num<=30)
	{
		cout<<"你吃多了";
	}
	else if(num >31&&num<=35)
	{
		cout<<"快去锻炼吧！";
	}
	else if(num >35)
	{
		 cout<< "你命不久矣，即将死亡"; 
	}
	else{
		cout<<"非法数据";
	}
	cout<<endl<<num;
 } 
