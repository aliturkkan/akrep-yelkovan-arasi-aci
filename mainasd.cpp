#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	float saat,dakika,a;
	float aci,sonuc;
	cout<<"saati ve dakikayi sýrasý ile giriniz..! (saati giriniz ve entere bastiktan sonra dakikayi giriniz!) ";
	cin>>saat>>dakika;

	if(saat<12.0)
	{
	
	         if (saat>dakika/5.0)
	             {
	             	 a=saat-dakika/5.0;
		             aci=a*30.0;
		             sonuc=aci+dakika/2.0;
	             }
	         else if (saat<dakika/5.0)
	             {
	             	 a=dakika/5.0-saat;
	                 aci=a*30.0;
		             sonuc=aci-dakika/2.0;
	             }
	         else if (saat=dakika/5.0)
	             {
	             	 sonuc=dakika/2.0;
	             }
	         else 
			     {
			     	 cout<<"yanlis deger girdiniz..!\a";
	             }
    }
    else if(saat>12.0)
	{
		saat=saat-12.0;
		if (saat>dakika/5.0)
	             {
	             	 a=saat-dakika/5.0;
		             aci=a*30.0;
		             sonuc=aci+dakika/2.0;
	             }
	         else if (saat<dakika/5.0)
	             {
	             	 a=dakika/5.0-saat;
	                 aci=a*30.0;
		             sonuc=aci-dakika/2.0;
	             }
	         else if (saat=dakika/5.0)
	             {
	         	     sonuc=dakika/2.0;
	             }
	         else 
			     {
			     	 cout<<"yanlis deger girdiniz..!\a";
	             }
		
    }
    else 
	{
		cout<<"yanlis deger girdiniz..!\a";
    }
    cout<<"akrep ile yelkovan arasindaki aci = "<<sonuc;
	return 0;
}
