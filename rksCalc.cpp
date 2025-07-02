//Phigros rksCalculator v1.0.1
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
struct crt{
	char name[105];
	double lvl;
	double acc;
	double rks;
};
bool cmp(crt a,crt b){
	return a.rks > b.rks;
}
int main(){
	double dif,acc;
	char name[105];
	crt sng[1005]={0},ap[1005]={0};
	int t=0,p=0;
	double srks,rks=0;
	while(true){
		cin>>sng[t].name;
		cin>>dif;
		if(dif==-1) break;
		cin>>acc;
		srks=(acc-55)/45.0;
		srks=srks*srks*dif;
		if(acc==100){
			ap[p].rks=srks;
			ap[p].acc=acc;
			ap[p].lvl=dif;
			strcpy(sng[t].name,ap[p].name);
			p++;
		}
		sng[t].rks=srks;
		sng[t].acc=acc;
		sng[t].lvl=dif;
		t++;
	}
	sort(sng,sng+1005,cmp);
	sort(ap,ap+1005,cmp);
	for(int i=0;i<3;i++){
		rks+=ap[i].rks;
	}
	for(int i=0;i<27;i++){
		rks+=sng[i].rks;
	}
	rks/=30.0;
	cout<<rks<<endl<<endl;
	for(int i=0;i<3;i++){
		cout<<ap[i].name<<' '<<ap[i].lvl<<" "<<ap[i].acc<<endl;
	}
	for(int i=0;i<27;i++){
		cout<<sng[i].name<<' '<<sng[i].lvl<<" "<<sng[i].acc<<endl;
	}
	return 0;
}
/*
更新日志
v1.0 主体制作完成
	v1.0.1修复一些bug


*/
