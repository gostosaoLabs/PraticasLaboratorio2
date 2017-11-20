package main;

public class Main {

	public static void main(String[] args) {
		int base = 2;
		int expoente = 5;
		System.out.println(potenciacao(base,expoente));
	}
	public static long potenciacao(int base, int expoente){
		if(expoente==0) return 1;
		if(expoente==1) return base;
		else return base*potenciacao(base, expoente - 1);
	}
}
