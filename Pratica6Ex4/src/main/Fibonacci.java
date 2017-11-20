package main;
import java.util.Locale;
import java.util.Scanner;
public class Fibonacci {

	static long fibo(int n){
		if(n < 2) return n;
		else return fibo(n - 1) + fibo(n - 2);
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
   