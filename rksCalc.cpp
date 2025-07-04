//Phigros rksCalculator v1.0.2
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
struct crt{
	int id=-1;
	double lvl;
	double acc;
	double rks;
};
bool cmp(crt a,crt b){
	return a.rks > b.rks;
}
int main(){
	double dif,acc;
	crt sng[1005],ap[1005];
	int t=0,p=0;
	double srks,rks=0;
	string name[2005],tname;
	while(true){
		cin>>tname;
		cin>>dif;
		if(dif==-1) break;
		cin>>acc;
		srks=(acc-55)/45.0;
		srks=srks*srks*dif;
		name[t]=tname;
		if(acc==100){
			ap[p].rks=srks;
			ap[p].acc=acc;
			ap[p].lvl=dif;
			ap[p].id=t;
			p++;
		}
		sng[t].rks=srks;
		sng[t].acc=acc;
		sng[t].lvl=dif;
		sng[t].id=t;
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
		if(ap[i].id !=-1) cout<<name[ap[i].id]<<' '<<ap[i].lvl<<" "<<ap[i].acc<<endl;
	}
	for(int i=0;i<27;i++){
		if(sng[i].id !=-1) cout<<name[sng[i].id]<<' '<<sng[i].lvl<<" "<<sng[i].acc<<endl;
	}
	return 0;
}
/*
更新日志
v1.0 主体制作完成
	v1.0.1修复一些bug
   	v1.0.2修复谱名显示bug&当谱面数量不足时不会展示空数值

*/
