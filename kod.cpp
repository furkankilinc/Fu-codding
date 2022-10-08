#include <iostream>
#include <math.h>
using namespace std;
pisagor(){
	int k1,k2,carpim1,carpim2,hipotenus;
	cout << "Hipotenusu alinacak kenarlari seciniz.Ucgenin dik ucgen olmasi gerek" << endl;
	cin >> k1 >> k2;
	carpim1 = k1*k1;
	carpim2 = k2*k2;
	hipotenus = carpim1+carpim2;
	cout << "Sonucunuz: " << sqrt(hipotenus) << endl;
}
kosinus(){
		// ÜÇGEN KENARLARINDAN KOSİNÜSÜNÜ BULMA 
	float k1,k2,k3,carpim1,carpim2,carpim3,cosa;
	cout << "Ucgenin Kenarlarini Ardi Ardina Giriniz: " << endl;
	cin >> k1 >> k2 >> k3; 
	carpim1 = k1*k1;
	carpim2 = k2*k2;
	carpim3 = k3*k3;
	cosa = ((carpim1-carpim2-carpim3)/(2*k2*k3));
	cosa = -cosa;
	cout << "Cosa sonucunuz: " << cosa << endl;
	if(cosa==0){
		cout << "Ucgeniniz Diktir " << endl;
	
	}
		else{
			cout << "Sonucunuz dar veya genis acilidir" << endl;
		}	

}
sinus(){
	float k1,k2,k3,carpim1,carpim2,carpim3,cosa,sina;
	cout << "Ucgenin Kenarlarini Ardi Ardina Giriniz: " << endl;
	cin >> k1 >> k2 >> k3; 
	carpim1 = k1*k1;
	carpim2 = k2*k2;
	carpim3 = k3*k3;
	cosa = ((carpim1-carpim2-carpim3)/(2*k2*k3));
	cosa = -cosa;
		cosa = cosa*cosa;
		sina = sina*sina;
		sina = 1-cosa;
		cout << "Cevabiniz: " << sina << endl;
}
oklid(){
	cout << "   OKLID BAGINTISI " << endl;
cout << "      **" << endl;
cout << "     ** **" << endl;
cout << "    * *   **" << endl;
cout << "  c*  *h     **b" << endl;
cout << "  *   *         **" << endl;
cout << " *    *            **" << endl;
cout << "***********************" << endl;
cout << "   m       n    " << endl;
cout << "      a        " << endl;

int c,h,b,m,n,a,h_carpimi,b_carpimi,c_carpimi;
cout << "M Degerini Giriniz: " << endl;
cin >> m ;
cout << "N Degerini Giriniz: " << endl;
cin >> n ;
a = m+n;
pow(h_carpimi,2);
pow(b_carpimi,2);
pow(c_carpimi,2);
h_carpimi = m*n;
b_carpimi = n*a;
c_carpimi = m*a;
system("cls");
cout <<  sqrt(h_carpimi) << endl;
cout <<  sqrt(b_carpimi) << endl;
cout <<  sqrt(c_carpimi) << endl;
cout << "      **" << endl;
cout << "     ** **" << endl;
cout << "    * *   **" << endl;
cout << "  "<<sqrt(c_carpimi)<<"*  *"<<sqrt(h_carpimi)<<"     **"<<sqrt(b_carpimi)<< endl;
cout << "  *   *         **" << endl;
cout << " *    *            **" << endl;
cout << "***********************" << endl;
cout << "   "<<m <<"       "<< n<<"    " << endl;
cout << "      "<< a<<"        " << endl;
 }
terimsayisitoplami(){
	int ts,st,it,arm,tt,calc,calcrev,starm;
	cout << "Baslangic Terimini Yaziniz: " << endl;
	cin >> it;
	cout << "Son Terimini Yaziniz: " << endl;
	cin >> st;
	cout << "Artis Miktarini Yaziniz: " << endl;
	cin >> arm;
	calc = (st-it)/arm;
	calcrev = (it-st)/arm;
	if(st==it){
		cout << "Degerler Aynidir." << endl;
	}
	else{
		if(st<it){
		ts = calcrev+1;
		tt = ((it+st)/2.0)*ts;
		} 
		else{
		ts = calc+1;
		tt = ((it+st)/2.0)*ts;
		}
	}

 
	cout << "Sonucunuz: " <<  tt << endl;
}
fonksiyon(){
		system("color 0A");
		cout << "Pisagor islemleri yapmak icin 1'e basiniz" << endl;
		cout << "Kosinus islemleri yapmak icin 2'e basiniz" << endl;
		cout << "Sinus islemleri yapmak icin 3'e basiniz  " << endl;
		cout << "Oklid islemleri yapmak icin 4'e basiniz  " << endl;
		cout << "Toplama islemleri yapmak icin 5'e basiniz  " << endl;
		cout << "Sayi Giriniz: " << endl;
	int x1;
	cin >> x1;
	system("cls");
	if(x1==1){
		pisagor();
	}
	else if(x1==2){
		kosinus();
	}
	else if(x1==3){
		sinus();
	}
	else if(x1==4){
		oklid();
	}
	else if(x1==5){
		terimsayisitoplami();
} }
int main(){
fonksiyon();
system("pause");
}