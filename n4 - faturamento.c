#include <stdio.h>

int main(){
	float sp = 67836.43;
	float rj = 36678.66;
	float mg = 29229.88;
	float es = 27165.48;
	float outros = 19849.53;
	float soma = sp + rj + mg + es + outros;
	
	int ssp, srj, smg, ses, soutros;
	
	printf("O valor total eh: %d", soma);
	
	ssp = (sp/soma)*100;
	srj = (rj/soma)*100;
	smg = (mg/soma)*100;
	ses = (es/soma)*100;
	soutros = (outros/soma)*100;
	
	printf("\nPorcentagens de cada estado: \n Sao Paulo: %d%%\n Rio de Janeiro: %d%%\n Minas Gerais: %d%%\n Espirito Santo: %d%%\n Outros: %d%%"
		, ssp, srj, smg, ses, soutros);
}
