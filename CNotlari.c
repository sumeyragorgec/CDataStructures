#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Abstract Data Types: Özel veri saklama yapýsý + soyut veri yapýsý 
/*
* her düðüm sonrasýný iþaret etmek zorunda 
* iki temel deðer 1-data 2- pointer: Bir sonraki düðümü iþaret eder 
* son düðüm null iþaret eder 
* baðlý liste çeþitleri :
* 1) Tüm elemanlar sonrakini iþaret eder, son düðüm null'ý iþaret eder.
* 2) Dairesel baðlý liste : SOn düðüm ilk düðüm ile baðlanýr.
* 3) Doubly Linked List : Ýki pointer tutar biri önceki düðümü biri sonraki düðümü iþaret eder 
* Traverse iþlemi : Ýlk düðümden baþlayarak gezinme 

* BAÐLI LÝSTELERÝN AVANTAJLARI
* Dinamiktir
* Bellekten tasarruf saðlar, ihtiyaç kadar yer açar
* ELeman ekleme ve silme iþlemleri kolay, dizilerde yaptýðýmýz zaman tüm indeksleri deðiþtirmemiz gerekir 
* Random eriþim yok, en baþtan baþlamamýz gerek.
* Ekstra hafýza gerektirir, fazladan pointer tutmak zorunda kalýrýz.
* malloc nedir?
* (geriDondurulecekVeriTipi *) malloc(ayrýlacakAlan* sizeof (veritipi))
*/


/*düðüm yapýsý*/
struct node {
	int data;
	struct node *sonraki;
};


int main(int argc, char *argv[]) {
	struct node *first = NULL ; // initial value = null
	struct node *second= (struct node*)malloc(sizeof(struct node));
	first = (struct node*)malloc(sizeof(struct node));// ilk düðüme hafýzadan yer ayýrdým 
	first->data=57;
	first->sonraki=second;
	second->data=58;
	second->sonraki=NULL;
	printf("DATAS => first : %d second : %d", first->data , second->data);
	
	return 0;
}

/*
malloc en önemli nokta yer ayrýlmadan kullanýlamaz !
*/
