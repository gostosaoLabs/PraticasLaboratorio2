package inicio;

import animal.*;

public class Principal {

	public static void main(String[]args) {
		int i;
		Animal[] zoologico = new Animal[10];
		zoologico[0] = new Gorila();
		zoologico[1] = new Urso();
		zoologico[2] = new Leao();
		zoologico[3] = new Zebra();
		zoologico[4] = new Elefante();
		
		for(i=0;i<10;i++) {	
			if(zoologico[i]!=null)
		zoologico[i].emitirSom();
		}
	}
}
