#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	//variables del tama�o de pantalla
    int TampX;
    int TampY;
    //Variables del objeto mostrado en coordenadas
    float coordX;
    float coordY;
    //Variables del tama�o del objeto
    float tamX;
    float tamY;
    //Variables de coordenadas superiores
    int coordsX;
    int coordsY;
    //Variables de coordenadas inferiores
    int coordiX;
    int coordiY;

    //Datos guardados
    printf("ingresa la cordenada TampX: ");
     scanf ("%i", &TampX);
    printf("ingresa la cordenada TampY: ");
     scanf ("%i", &TampY);
    printf("ingresa la cordenada coordX: "); 
     scanf ("%f", &coordX);
     scanf ("%f", &coordY);
     scanf ("%f", &tamX);
     scanf ("%f", &tamY);

    //Calcular coordenadas
    coordsX = TampX * coordX;
    coordsY = TampY * coordY;
    coordiX = TampX * tamX + coordsX;
    coordiY = TampY * tamY + coordsY; 
    //Resultrados Print
    printf("%i %i %5.2 %5.2 %5.2" );
	
	return 0;
}
