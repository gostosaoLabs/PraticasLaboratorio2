package inicio;

import figura.*;
public class Principal {

	public static void main(String[] args) {
		int i,j;
		Figura[][] matriz=new Figura[3][3];
		
		matriz[0][0]=new Circulo(2);
		matriz[0][1]=new Retangulo(2,4);
		matriz[0][2]=new Triangulo(5,4);
		matriz[1][1]=new Trapezio(4,2,3);
		for (i=0;i<3;i++)
			for (j=0;j<3;j++){
				if(matriz[i][j]!=null)
				System.out.println("Area: " + matriz[i][j].getArea());
			}
	}

}
