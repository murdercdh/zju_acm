#include <iostream.h>
struct
{
	char name[100];
	int hp;
	int power;
	int amount;
	int cool;
	int armor;
}a,b;
void main ()
{
	int k,t,a_cool,b_cool,attack_a,attack_b;
	while (cin>>a.name)
	{
		cin>>a.hp>>a.armor>>a.cool>>a.amount>>a.power;
		cin>>b.name>>b.hp>>b.armor>>b.cool>>b.amount>>b.power;
		k=a.cool<b.cool?a.cool:b.cool;
		t=k;
		a_cool=a.cool;
		b_cool=b.cool;
		if (a.power-b.armor<=0) attack_a=a.amount;
		else attack_a=(a.power-b.armor)*a.amount;
		if (b.power-a.armor<=0) attack_b=b.amount;
		else attack_b=(b.power-a.armor)*b.amount;
		while (1)
		{
			if (t>=a.cool)
			{
				b.hp-=attack_a;
				a.cool+=a_cool;
			}
			if (t>=b.cool)
			{
				a.hp-=attack_b;
				b.cool+=b_cool;
			}
			if (a.hp<=0||b.hp<=0) break;
			t+=k;
		}
		if (a.hp<=0&&b.hp<=0) cout<<"All Die!"<<endl;
		else if (a.hp<=0&&b.hp>0) cout<<b.name<<" Survive!"<<endl;
		else if (a.hp>0&&b.hp<=0) cout<<a.name<<" Survive!"<<endl;
	}
}