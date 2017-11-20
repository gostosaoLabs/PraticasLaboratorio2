package main;
import java.util.Locale;
import java.util.Scanner;
public class Fibonacci {
	
	static long fibo(int n){
		int atual = 0;
		int anterior = 0;
		int i = 1;
		for(i = 1; i <= n; i++){
			if(i==1){
				atual = 1;
				anterior = 0;
			}
			else{
				atual = atual + anterior;
				anterior = atual - anterior;
			}
		}
		return atual;
	}
		
	public static void main(String[] args) {
		Scanner teclado = new Scanner (System.in);
		teclado.useLocale (Locale.ENGLISH);
		System.out.println ("Informe um número inteiro: ");
		int x = teclado.nextInt ();
		
		for(int i = 0; i < x; i++){
			System.out.println(Fibonacci.fibo(i));
		}
	}
}