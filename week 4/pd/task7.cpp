#include<iostream>
using namespace std;
void flowerShop(int redRose, int whiteRose, int tulip);
main(){
	cout<<"Red Rose: ";
	int redRose;
	cin>>redRose;

	cout<<"White Rose: ";
	int whiteRose;
	cin>>whiteRose;

	cout<<"Tulips: ";
	int tulip;
	cin>>tulip;

	flowerShop(redRose, whiteRose,tulip);

}

void flowerShop(int redRose, int whiteRose, int tulip){
	float total_price;
	total_price=(whiteRose*4.10)+(redRose*2)+(tulip*2.50);

	float dis;
	dis=0;
	float price;

if(total_price>200){
	dis=total_price*0.20;
	price=total_price-total_price*0.20;
	cout<<"Original Price: $"<<total_price<<endl;
	cout<<"Price after Discount: $"<<price<<endl;}

if(dis==0){

	cout<<"Original Price: $"<<total_price<<endl;
	cout<<"No discount applied.";}
}








