#include<bits/stdc++.h>

using namespace std;
int main()
{
	double cm,kg;
	system("title FxxK�����ҳ�Ʒ");
	cout<<"��ӭʹ��BMI����ָ���жϹ���(offline)\n";
	cout<<"\n��������������(kg)\n";
	cin>>kg;
	cout<<"�������������(cm)\n";
	cin>>cm;
	double num=(kg/((cm/100)*(cm/100)));
	if(num<16)
	{
		cout<<"��̫����!\n"; 
	}else if(num >17&&num<18)
	{
		cout<<"���е���!";
	}
	else if(num >=18&&num<=25)
	{
		cout<<"��������������";
	}
	else if(num >25&&num<=30)
	{
		cout<<"��Զ���";
	}
	else if(num >31&&num<=35)
	{
		cout<<"��ȥ�����ɣ�";
	}
	else if(num >35)
	{
		 cout<< "���������ӣ���������"; 
	}
	else{
		cout<<"�Ƿ�����";
	}
	cout<<endl<<num;
 } 
