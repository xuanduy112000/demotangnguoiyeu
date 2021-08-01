#include<iostream>
#include<fstream>
#include<windows.h>
#include<conio.h>
#include<string>
using namespace std;


void XuLy(){
	fstream file;
	string str;	
	file.open("input.txt", ios::in);
	
	if(file.is_open())
	{
		string tp;
		while(getline(file, tp))
		{
			str += tp;
			str += '\n';
		}
		file.close();
	}
	
	for(int i=0; i<str.length();i++)
	{
		cout<<str.at(i);
		if(str.at(i)=='\n') Sleep(100);
	}
}
void Loading()
{
	system("color 0A");
	cout<<"Doi xiu nha!"<<endl;Sleep(500);
	cout<<"LOADING.....10%"<<endl;Sleep(200);
	cout<<"LOADING.....20%"<<endl;Sleep(200);
	cout<<"LOADING.....30%"<<endl;Sleep(200);
	cout<<"LOADING.....40%"<<endl;Sleep(200);
	cout<<"LOADING.....50%"<<endl;Sleep(200);
	cout<<"LOADING.....60%"<<endl;Sleep(200);
	cout<<"LOADING.....70%"<<endl;Sleep(200);
	cout<<"LOADING.....80%"<<endl;Sleep(200);
	cout<<"LOADING.....90%"<<endl;Sleep(200);
	cout<<"LOADING.....100%"<<endl<<endl;Sleep(200);
	cout<<"NGUOI YEU BAN NE!"<<endl<<endl<<endl;Sleep(800);
	system("color F");
}

int main()
{
	int day, month, year;
	int gioihan=1;
	do
	{
	cout<<"Nhap vao day ngay sinh cua nguoi yeu ban: ";cin>>day;
	cout<<"Nhap vao day thang sinh cua nguoi yeu ban: ";cin>>month;
	cout<<"Nhap vao day nam sinh cua nguoi yeu ban: ";cin>>year;
	gioihan++;
	if(day==13 && month==8 && year==2000)
	{
		cout<<endl<<"--------------------------------Chuc mung ban da dang nhap thanh cong!-----------------------------------"<<endl;
		Loading();
		XuLy();break;
	}
	else 
	if(gioihan>3)
	{
		cout<<endl<<"----------------------NGAY SINH CUA NGUOI YEU MINH CUNG KHONG NHO! NGUOI YEU NHU CC!-------------------------"<<endl;
	}else 
		cout<<"SAI ROI!"<<endl;
	}
	while(gioihan<=3);
	getch();
	
}
